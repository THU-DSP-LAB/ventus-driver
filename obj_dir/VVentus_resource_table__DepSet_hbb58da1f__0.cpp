// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus__Syms.h"
#include "VVentus_resource_table.h"

VL_INLINE_OPT void VVentus_resource_table___nba_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl__0(VVentus_resource_table* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_resource_table___nba_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_92;
    CData/*1:0*/ __PVT___GEN_93;
    SData/*13:0*/ __PVT___T_44;
    SData/*13:0*/ __PVT___T_46;
    SData/*13:0*/ __PVT___T_52;
    IData/*26:0*/ __VdfgTmp_hecff3acc__0;
    IData/*28:0*/ __VdfgTmp_h1fad0f50__0;
    CData/*0:0*/ __VdfgTmp_hda0062ea__0;
    CData/*0:0*/ __VdfgTmp_h54771c51__0;
    CData/*0:0*/ __Vdly__res_table_rd_valid;
    IData/*30:0*/ __Vdly__res_table_rd_reg;
    CData/*1:0*/ __Vdly__table_head_pointer_0;
    CData/*1:0*/ __Vdly__table_head_pointer_1;
    CData/*1:0*/ __Vdly__table_head_pointer_i;
    CData/*3:0*/ __Vdly__m_state;
    CData/*3:0*/ __Vdly__a_state;
    CData/*4:0*/ __Vdly__d_state;
    CData/*3:0*/ __Vdly__f_state;
    CData/*0:0*/ __Vdly__alloc_done;
    CData/*0:0*/ __Vdly__dealloc_done;
    // Body
    __Vdly__alloc_done = vlSelf->__PVT__alloc_done;
    __Vdly__table_head_pointer_1 = vlSelf->__PVT__table_head_pointer_1;
    __Vdly__table_head_pointer_0 = vlSelf->__PVT__table_head_pointer_0;
    __Vdly__dealloc_done = vlSelf->__PVT__dealloc_done;
    __Vdly__m_state = vlSelf->__PVT__m_state;
    __Vdly__f_state = vlSelf->__PVT__f_state;
    __Vdly__d_state = vlSelf->__PVT__d_state;
    __Vdly__a_state = vlSelf->__PVT__a_state;
    __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_i;
    __Vdly__res_table_rd_valid = vlSelf->__PVT__res_table_rd_valid;
    __Vdly__res_table_rd_reg = vlSelf->__PVT__res_table_rd_reg;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__dealloc_wg_slot_id_i = 0U;
        vlSelf->__PVT__alloc_res_start_i = 0U;
        vlSelf->__PVT__alloc_wg_slot_id_i = 0U;
        vlSelf->__PVT__resource_table_ram_0 = 0U;
        vlSelf->__PVT__resource_table_ram_1 = 0U;
        vlSelf->__PVT__resource_table_ram_2 = 0U;
        vlSelf->__PVT__resource_table_ram_3 = 0U;
        vlSelf->__PVT__resource_table_ram_4 = 0U;
        vlSelf->__PVT__resource_table_ram_5 = 0U;
        vlSelf->__PVT__resource_table_ram_6 = 0U;
        vlSelf->__PVT__resource_table_ram_7 = 0U;
        vlSelf->__PVT__res_table_last_rd_reg = 0U;
        __Vdly__res_table_rd_reg = 0U;
        vlSelf->__PVT__resource_table_ram_8 = 0U;
        vlSelf->__PVT__resource_table_ram_9 = 0U;
        vlSelf->__PVT__alloc_res_size_i = 0U;
        vlSelf->__PVT__res_table_max_start = 0U;
        __Vdly__table_head_pointer_0 = 0U;
        __Vdly__table_head_pointer_1 = 0U;
        __Vdly__table_head_pointer_i = 0U;
        __Vdly__m_state = 1U;
        __Vdly__a_state = 1U;
        __Vdly__d_state = 1U;
        __Vdly__f_state = 1U;
        vlSelf->__PVT__res_table_wr_reg = 0U;
        vlSelf->__PVT__cu_initialized_i = 0U;
        vlSelf->__PVT__res_addr_wg_slot = 0U;
        vlSelf->__PVT__res_table_max_size = 0U;
        vlSelf->__PVT__new_entry_is_last = 0U;
        vlSelf->__PVT__new_entry_is_first = 0U;
        vlSelf->__PVT__rem_entry_is_last = 0U;
        vlSelf->__PVT__rem_entry_is_first = 0U;
        vlSelf->__PVT__cu_initialized_0 = 0U;
        vlSelf->__PVT__cu_initialized_1 = 0U;
        vlSelf->__PVT__res_addr_cu_id = 0U;
    } else {
        if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            vlSelf->__PVT__alloc_res_start_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start1;
            vlSelf->__PVT__alloc_wg_slot_id_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i;
            vlSelf->__PVT__alloc_res_size_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size1;
        }
        if (vlSelf->__PVT__res_table_rd_en) {
            vlSelf->__PVT__res_table_last_rd_reg = vlSelf->__PVT__res_table_rd_reg;
            __Vdly__res_table_rd_reg = ((9U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                         ? vlSelf->__PVT__resource_table_ram_9
                                         : ((8U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                             ? vlSelf->__PVT__resource_table_ram_8
                                             : vlSelf->__PVT___GEN_257));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__res_table_rd_en)))) {
            if (vlSelf->__PVT__res_table_wr_en) {
                if ((0U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_0 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((1U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_1 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((2U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_2 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((3U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_3 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((4U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_4 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((5U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_5 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((6U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_6 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((7U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_7 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((8U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_8 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((9U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_9 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__f_state))) {
            vlSelf->__PVT__res_table_max_start = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT___GEN_186));
            if (vlSelf->__PVT__find_max_start) {
                if ((1U & (~ (IData)(vlSelf->__PVT___T_5)))) {
                    __Vdly__f_state = 2U;
                }
                vlSelf->__PVT__res_addr_wg_slot = ((IData)(vlSelf->__PVT___T_5)
                                                    ? (IData)(vlSelf->__PVT___GEN_172)
                                                    : (IData)(vlSelf->__PVT__table_head_pointer_i));
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_179;
            } else {
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_172;
            }
        } else {
            vlSelf->__PVT__res_table_max_start = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT___GEN_221));
            if ((2U == (IData)(vlSelf->__PVT__f_state))) {
                if (vlSelf->__PVT__res_table_rd_valid) {
                    __Vdly__f_state = ((3U != (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU)))
                                        ? 4U : 8U);
                    vlSelf->__PVT__res_table_max_size 
                        = (0x1fffU & vlSelf->__PVT__res_table_rd_reg);
                }
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_196;
            } else if ((4U == (IData)(vlSelf->__PVT__f_state))) {
                __Vdly__f_state = vlSelf->__PVT___GEN_205;
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_196;
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_206;
            } else {
                __Vdly__f_state = vlSelf->__PVT___GEN_213;
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_172;
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_210;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__m_state))) {
            if (vlSelf->__PVT__alloc_res_en_i) {
                __Vdly__m_state = 2U;
            } else if (vlSelf->__PVT__dealloc_res_en_i) {
                __Vdly__m_state = 4U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__m_state))) {
            if (vlSelf->__PVT__alloc_done) {
                __Vdly__m_state = 8U;
            }
        } else {
            __Vdly__m_state = ((4U == (IData)(vlSelf->__PVT__m_state))
                                ? (IData)(vlSelf->__PVT___GEN_16)
                                : (IData)(vlSelf->__PVT___GEN_20));
        }
        if ((1U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__alloc_start) {
                __Vdly__a_state = ((1U & ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i)) 
                                          | (~ (IData)(vlSelf->__PVT__cu_initialized_i))))
                                    ? 8U : 2U);
                vlSelf->__PVT__new_entry_is_last = vlSelf->__PVT___T_7;
                vlSelf->__PVT__new_entry_is_first = vlSelf->__PVT___T_7;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __Vdly__a_state = ((IData)(vlSelf->__VdfgTmp_h945ab87b__0)
                                    ? ((2U == (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1bU)))
                                        ? 8U : 4U) : (IData)(vlSelf->__PVT___GEN_48));
                vlSelf->__PVT__new_entry_is_last = vlSelf->__PVT___GEN_55;
                vlSelf->__PVT__new_entry_is_first = vlSelf->__PVT___GEN_51;
            }
        } else {
            __Vdly__a_state = ((4U == (IData)(vlSelf->__PVT__a_state))
                                ? 8U : (IData)(vlSelf->__PVT___GEN_73));
        }
        if (((IData)(vlSelf->__PVT__alloc_res_en_i) 
             | (IData)(vlSelf->__PVT__dealloc_res_en_i))) {
            if (vlSelf->__PVT__res_addr_cu_id) {
                __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_1;
                vlSelf->__PVT__cu_initialized_i = vlSelf->__PVT__cu_initialized_1;
            } else {
                __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_0;
                vlSelf->__PVT__cu_initialized_i = vlSelf->__PVT__cu_initialized_0;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__d_state))) {
            if ((1U != (IData)(vlSelf->__PVT__a_state))) {
                __Vdly__table_head_pointer_i = vlSelf->__PVT___GEN_87;
            }
        } else {
            __Vdly__table_head_pointer_i = ((2U == (IData)(vlSelf->__PVT__d_state))
                                             ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                                 ? 
                                                ((IData)(vlSelf->__PVT___T_24)
                                                  ? 3U
                                                  : (IData)(vlSelf->__PVT___GEN_96))
                                                 : (IData)(vlSelf->__PVT___GEN_96))
                                             : (IData)(vlSelf->__PVT___GEN_158));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__alloc_res_en_i) 
                      | (IData)(vlSelf->__PVT__dealloc_res_en_i))))) {
            if (((IData)(vlSelf->__PVT__alloc_done) 
                 | (IData)(vlSelf->__PVT__dealloc_done))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__res_addr_cu_id)))) {
                    __Vdly__table_head_pointer_0 = vlSelf->__PVT__table_head_pointer_i;
                }
                if (vlSelf->__PVT__res_addr_cu_id) {
                    __Vdly__table_head_pointer_1 = vlSelf->__PVT__table_head_pointer_i;
                }
            }
        }
        if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1) {
            vlSelf->__PVT__dealloc_wg_slot_id_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i;
            vlSelf->__PVT__res_addr_cu_id = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        } else if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            vlSelf->__PVT__res_addr_cu_id = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__alloc_res_en_i) 
                      | (IData)(vlSelf->__PVT__dealloc_res_en_i))))) {
            if (((IData)(vlSelf->__PVT__alloc_done) 
                 | (IData)(vlSelf->__PVT__dealloc_done))) {
                vlSelf->__PVT__cu_initialized_0 = vlSelf->__PVT___GEN_238;
                vlSelf->__PVT__cu_initialized_1 = vlSelf->__PVT___GEN_239;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__d_state))) {
            if (vlSelf->__PVT__dealloc_start) {
                __Vdly__d_state = 2U;
                vlSelf->__PVT__rem_entry_is_last = 0U;
                vlSelf->__PVT__rem_entry_is_first = 0U;
            }
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else if ((2U == (IData)(vlSelf->__PVT__d_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __Vdly__d_state = ((IData)(vlSelf->__PVT___T_24)
                                    ? 1U : ((2U == 
                                             (3U & 
                                              (vlSelf->__PVT__res_table_rd_reg 
                                               >> 0x1bU)))
                                             ? 4U : 
                                            ((3U == 
                                              (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU)))
                                              ? 8U : 4U)));
                vlSelf->__PVT__rem_entry_is_last = vlSelf->__PVT___GEN_116;
                vlSelf->__PVT__rem_entry_is_first = vlSelf->__PVT___GEN_115;
            }
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else if ((4U == (IData)(vlSelf->__PVT__d_state))) {
            __Vdly__d_state = 8U;
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else {
            __Vdly__d_state = vlSelf->__PVT___GEN_147;
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_150;
        }
    }
    __Vdly__res_table_rd_valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSelf->__PVT__res_table_rd_en));
    __PVT___T_44 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_last_rd_reg) 
                               + (vlSelf->__PVT__res_table_last_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT__res_table_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((1U != (IData)(vlSelf->__PVT__m_state)) 
                                        & ((2U != (IData)(vlSelf->__PVT__m_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__m_state)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->__PVT__m_state)) 
                                                 & (IData)(vlSelf->__PVT__find_max_done))))));
    vlSelf->__PVT__res_table_rd_en = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                            & ((1U 
                                                == (IData)(vlSelf->__PVT__f_state))
                                                ? ((IData)(vlSelf->__PVT__find_max_start)
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT___T_5)) 
                                                    | (IData)(vlSelf->__PVT___GEN_171))
                                                    : (IData)(vlSelf->__PVT___GEN_171))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__f_state))
                                                    ? (IData)(vlSelf->__PVT___GEN_195)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__f_state))
                                                     ? (IData)(vlSelf->__PVT___GEN_195)
                                                     : (IData)(vlSelf->__PVT___GEN_171))))));
    vlSelf->__PVT__res_table_wr_en = ((~ (IData)(vlSymsp->TOP.reset)) 
                                      & ((1U == (IData)(vlSelf->__PVT__d_state))
                                          ? (IData)(vlSelf->__PVT___GEN_94)
                                          : ((2U == (IData)(vlSelf->__PVT__d_state))
                                              ? (IData)(vlSelf->__PVT___GEN_94)
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__d_state))
                                                  ? (IData)(vlSelf->__PVT___GEN_94)
                                                  : (IData)(vlSelf->__PVT___GEN_149)))));
    vlSelf->__PVT__find_max_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((1U != (IData)(vlSelf->__PVT__m_state)) 
                                        & ((2U == (IData)(vlSelf->__PVT__m_state))
                                            ? (IData)(vlSelf->__PVT__alloc_done)
                                            : (IData)(vlSelf->__PVT___GEN_21))));
    __Vdly__alloc_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                          & ((1U != (IData)(vlSelf->__PVT__a_state)) 
                             & ((2U != (IData)(vlSelf->__PVT__a_state)) 
                                & ((4U != (IData)(vlSelf->__PVT__a_state)) 
                                   & (8U == (IData)(vlSelf->__PVT__a_state))))));
    __Vdly__dealloc_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((1U != (IData)(vlSelf->__PVT__d_state)) 
                               & ((2U == (IData)(vlSelf->__PVT__d_state))
                                   ? ((IData)(vlSelf->__PVT__res_table_rd_valid) 
                                      & (IData)(vlSelf->__PVT___T_24))
                                   : ((4U != (IData)(vlSelf->__PVT__d_state)) 
                                      & (IData)(vlSelf->__PVT___GEN_152)))));
    vlSelf->__PVT__find_max_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((1U == (IData)(vlSelf->__PVT__f_state))
                                        ? (IData)(vlSelf->__PVT___GEN_185)
                                        : ((2U != (IData)(vlSelf->__PVT__f_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__f_state)) 
                                              & (8U 
                                                 == (IData)(vlSelf->__PVT__f_state))))));
    __VdfgTmp_hecff3acc__0 = (((IData)(vlSelf->__PVT__alloc_res_size_i) 
                               << 0xdU) | (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT__table_head_pointer_0 = __Vdly__table_head_pointer_0;
    vlSelf->__PVT__table_head_pointer_1 = __Vdly__table_head_pointer_1;
    vlSelf->__PVT__alloc_done = __Vdly__alloc_done;
    vlSelf->__PVT__dealloc_done = __Vdly__dealloc_done;
    vlSelf->__PVT__f_state = __Vdly__f_state;
    vlSelf->__PVT__d_state = __Vdly__d_state;
    vlSelf->__PVT__a_state = __Vdly__a_state;
    vlSelf->__PVT__table_head_pointer_i = __Vdly__table_head_pointer_i;
    vlSelf->__PVT__res_table_rd_valid = __Vdly__res_table_rd_valid;
    vlSelf->__PVT__res_table_rd_reg = __Vdly__res_table_rd_reg;
    vlSelf->__PVT___GEN_152 = ((8U != (IData)(vlSelf->__PVT__d_state)) 
                               & (0x10U == (IData)(vlSelf->__PVT__d_state)));
    __VdfgTmp_h1fad0f50__0 = (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                               << 0x1bU) | __VdfgTmp_hecff3acc__0);
    vlSelf->__PVT___GEN_73 = ((8U == (IData)(vlSelf->__PVT__a_state))
                               ? 1U : (IData)(vlSelf->__PVT__a_state));
    if ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))) {
        vlSelf->__PVT___T_5 = 1U;
        vlSelf->__PVT___GEN_179 = 0x1000U;
        vlSelf->__PVT___GEN_185 = vlSelf->__PVT__find_max_start;
    } else {
        vlSelf->__PVT___T_5 = 0U;
        vlSelf->__PVT___GEN_179 = 0U;
        vlSelf->__PVT___GEN_185 = 0U;
    }
    vlSelf->__PVT___GEN_186 = ((IData)(vlSelf->__PVT__find_max_start)
                                ? ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : (IData)(vlSelf->__PVT__res_table_max_start));
    vlSelf->__PVT___GEN_87 = ((2U == (IData)(vlSelf->__PVT__a_state))
                               ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                               : ((4U == (IData)(vlSelf->__PVT__a_state))
                                   ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                                   : ((8U == (IData)(vlSelf->__PVT__a_state))
                                       ? ((IData)(vlSelf->__PVT__new_entry_is_first)
                                           ? (IData)(vlSelf->__PVT__alloc_wg_slot_id_i)
                                           : (IData)(vlSelf->__PVT__table_head_pointer_i))
                                       : (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__PVT___T_7 = (1U & ((~ (IData)(vlSelf->__PVT__cu_initialized_i)) 
                                 | (3U == (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__PVT___GEN_48 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU)))
                               ? 8U : (IData)(vlSelf->__PVT__a_state));
    __PVT___T_46 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               - (IData)(__PVT___T_44)));
    __PVT___T_52 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               + (vlSelf->__PVT__res_table_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT___T_24 = (IData)((0x70000000U == 
                                    (0x78000000U & vlSelf->__PVT__res_table_rd_reg)));
    vlSelf->__VdfgTmp_h945ab87b__0 = ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                      > (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT__alloc_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & ((1U == (IData)(vlSelf->__PVT__m_state)) 
                                     & (IData)(vlSelf->__PVT__alloc_res_en_i)));
    vlSelf->__PVT__dealloc_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((1U == (IData)(vlSelf->__PVT__m_state)) 
                                       & ((~ (IData)(vlSelf->__PVT__alloc_res_en_i)) 
                                          & (IData)(vlSelf->__PVT__dealloc_res_en_i))));
    if ((1U == (IData)(vlSelf->__PVT__a_state))) {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT__table_head_pointer_i;
        vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
        if (vlSelf->__PVT__alloc_start) {
            __PVT___GEN_92 = (1U & (~ (IData)(vlSelf->__PVT___T_7)));
            __PVT___GEN_93 = (3U & ((IData)(vlSelf->__PVT___T_7)
                                     ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                     : (IData)(vlSelf->__PVT__table_head_pointer_i)));
        } else {
            __PVT___GEN_92 = 0U;
            __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
        }
    } else {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT___GEN_87;
        if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                if (vlSelf->__VdfgTmp_h945ab87b__0) {
                    vlSelf->__PVT___GEN_95 = ((0x60000000U 
                                               & vlSelf->__PVT__res_table_rd_reg) 
                                              | (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                                  << 0x1bU) 
                                                 | (0x7ffffffU 
                                                    & vlSelf->__PVT__res_table_rd_reg)));
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                } else if ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                         >> 0x1dU)))) {
                    vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                               << 0x1dU) 
                                              | (0x1fffffffU 
                                                 & vlSelf->__PVT__res_table_rd_reg));
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                } else {
                    vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                    __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU));
                }
                __PVT___GEN_92 = (((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                   <= (IData)(vlSelf->__PVT__alloc_res_start_i)) 
                                  & (3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1dU))));
            } else {
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                __PVT___GEN_92 = 0U;
            }
        } else {
            if ((4U == (IData)(vlSelf->__PVT__a_state))) {
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                           << 0x1dU) 
                                          | (0x1fffffffU 
                                             & vlSelf->__PVT__res_table_last_rd_reg));
                __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                        >> 0x1bU));
            } else if ((8U == (IData)(vlSelf->__PVT__a_state))) {
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__new_entry_is_first) 
                                           & (IData)(vlSelf->__PVT__new_entry_is_last))
                                           ? (0x70000000U 
                                              | __VdfgTmp_hecff3acc__0)
                                           : ((IData)(vlSelf->__PVT__new_entry_is_last)
                                               ? (0x60000000U 
                                                  | __VdfgTmp_h1fad0f50__0)
                                               : ((IData)(vlSelf->__PVT__new_entry_is_first)
                                                   ? 
                                                  (0x10000000U 
                                                   | (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                                       << 0x1dU) 
                                                      | __VdfgTmp_hecff3acc__0))
                                                   : 
                                                  ((0x60000000U 
                                                    & vlSelf->__PVT__res_table_last_rd_reg) 
                                                   | __VdfgTmp_h1fad0f50__0))));
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__alloc_wg_slot_id_i));
            } else {
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
            }
            __PVT___GEN_92 = 0U;
        }
    }
    __VdfgTmp_hda0062ea__0 = ((IData)(__PVT___T_46) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
    __VdfgTmp_h54771c51__0 = ((0x3fffU & ((IData)(0x1000U) 
                                          - (IData)(__PVT___T_52))) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
    if ((8U == (IData)(vlSelf->__PVT__f_state))) {
        vlSelf->__PVT___GEN_213 = 1U;
        vlSelf->__PVT___GEN_210 = (0x3fffU & ((IData)(__VdfgTmp_h54771c51__0)
                                               ? ((IData)(0x1000U) 
                                                  - (IData)(__PVT___T_52))
                                               : (IData)(vlSelf->__PVT__res_table_max_size)));
    } else {
        vlSelf->__PVT___GEN_213 = vlSelf->__PVT__f_state;
        vlSelf->__PVT___GEN_210 = (0x3fffU & (IData)(vlSelf->__PVT__res_table_max_size));
    }
    if (vlSelf->__PVT___T_24) {
        vlSelf->__PVT___GEN_116 = vlSelf->__PVT__rem_entry_is_last;
        vlSelf->__PVT___GEN_115 = vlSelf->__PVT__rem_entry_is_first;
    } else {
        vlSelf->__PVT___GEN_116 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                 >> 0x1bU)))
                                    ? (IData)(vlSelf->__PVT__rem_entry_is_last)
                                    : ((3U == (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU))) 
                                       | (IData)(vlSelf->__PVT__rem_entry_is_last)));
        vlSelf->__PVT___GEN_115 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                 >> 0x1bU))) 
                                   | (IData)(vlSelf->__PVT__rem_entry_is_first));
    }
    if (vlSelf->__VdfgTmp_h945ab87b__0) {
        vlSelf->__PVT___GEN_55 = vlSelf->__PVT__new_entry_is_last;
        vlSelf->__PVT___GEN_51 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1bU))) 
                                  | (IData)(vlSelf->__PVT__new_entry_is_first));
    } else {
        vlSelf->__PVT___GEN_55 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU))) 
                                  | (IData)(vlSelf->__PVT__new_entry_is_last));
        vlSelf->__PVT___GEN_51 = vlSelf->__PVT__new_entry_is_first;
    }
    vlSelf->__PVT___GEN_94 = ((1U != (IData)(vlSelf->__PVT__a_state)) 
                              & ((2U == (IData)(vlSelf->__PVT__a_state))
                                  ? ((IData)(vlSelf->__PVT__res_table_rd_valid) 
                                     & ((IData)(vlSelf->__VdfgTmp_h945ab87b__0) 
                                        | (3U == (3U 
                                                  & (vlSelf->__PVT__res_table_rd_reg 
                                                     >> 0x1dU)))))
                                  : ((4U == (IData)(vlSelf->__PVT__a_state)) 
                                     | (8U == (IData)(vlSelf->__PVT__a_state)))));
    if ((8U == (IData)(vlSelf->__PVT__d_state))) {
        vlSelf->__PVT___GEN_147 = 0x10U;
        if (vlSelf->__PVT__rem_entry_is_first) {
            vlSelf->__PVT___GEN_149 = (1U & (IData)(vlSelf->__PVT___GEN_94));
            vlSelf->__PVT___GEN_150 = vlSelf->__PVT___GEN_95;
        } else {
            vlSelf->__PVT___GEN_149 = (1U & ((~ (IData)(vlSelf->__PVT__rem_entry_is_last)) 
                                             | (IData)(vlSelf->__PVT___GEN_94)));
            vlSelf->__PVT___GEN_150 = ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                        ? vlSelf->__PVT___GEN_95
                                        : (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                            << 0x1dU) 
                                           | (0x1fffffffU 
                                              & vlSelf->__PVT__res_table_rd_reg)));
        }
    } else {
        if ((0x10U == (IData)(vlSelf->__PVT__d_state))) {
            vlSelf->__PVT___GEN_147 = 1U;
            vlSelf->__PVT___GEN_150 = ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                        ? (0x10000000U 
                                           | (0x67ffffffU 
                                              & vlSelf->__PVT__res_table_rd_reg))
                                        : ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                            ? (0x60000000U 
                                               | (0x1fffffffU 
                                                  & vlSelf->__PVT__res_table_rd_reg))
                                            : ((0x60000000U 
                                                & vlSelf->__PVT__res_table_rd_reg) 
                                               | (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & vlSelf->__PVT__res_table_rd_reg)))));
        } else {
            vlSelf->__PVT___GEN_147 = vlSelf->__PVT__d_state;
            vlSelf->__PVT___GEN_150 = vlSelf->__PVT___GEN_95;
        }
        vlSelf->__PVT___GEN_149 = (1U & ((0x10U == (IData)(vlSelf->__PVT__d_state)) 
                                         | (IData)(vlSelf->__PVT___GEN_94)));
    }
    vlSelf->__PVT__m_state = __Vdly__m_state;
    vlSelf->__PVT___GEN_158 = ((4U == (IData)(vlSelf->__PVT__d_state))
                                ? (IData)(vlSelf->__PVT___GEN_96)
                                : ((8U == (IData)(vlSelf->__PVT__d_state))
                                    ? (IData)(vlSelf->__PVT___GEN_96)
                                    : ((0x10U == (IData)(vlSelf->__PVT__d_state))
                                        ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                            ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                            : (IData)(vlSelf->__PVT___GEN_96))
                                        : (IData)(vlSelf->__PVT___GEN_96))));
    vlSelf->__PVT___GEN_221 = ((2U == (IData)(vlSelf->__PVT__f_state))
                                ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : ((4U == (IData)(vlSelf->__PVT__f_state))
                                    ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                        ? ((IData)(__VdfgTmp_hda0062ea__0)
                                            ? (IData)(__PVT___T_44)
                                            : (IData)(vlSelf->__PVT__res_table_max_start))
                                        : (IData)(vlSelf->__PVT__res_table_max_start))
                                    : ((8U == (IData)(vlSelf->__PVT__f_state))
                                        ? ((IData)(__VdfgTmp_h54771c51__0)
                                            ? (IData)(__PVT___T_52)
                                            : (IData)(vlSelf->__PVT__res_table_max_start))
                                        : (IData)(vlSelf->__PVT__res_table_max_start))));
    vlSelf->__PVT___GEN_238 = (1U & ((~ (IData)(vlSelf->__PVT__res_addr_cu_id)) 
                                     | (IData)(vlSelf->__PVT__cu_initialized_0)));
    vlSelf->__PVT___GEN_239 = ((IData)(vlSelf->__PVT__cu_initialized_1) 
                               | (IData)(vlSelf->__PVT__res_addr_cu_id));
    vlSelf->__PVT___res_table_rd_reg_T_2 = (0xfU & 
                                            (((IData)(vlSelf->__PVT__res_addr_cu_id) 
                                              << 2U) 
                                             + (IData)(vlSelf->__PVT__res_addr_wg_slot)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__dealloc_done)
                               ? 8U : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_20 = ((8U == (IData)(vlSelf->__PVT__m_state))
                               ? ((IData)(vlSelf->__PVT__find_max_done)
                                   ? 1U : (IData)(vlSelf->__PVT__m_state))
                               : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_21 = ((4U == (IData)(vlSelf->__PVT__m_state)) 
                              & (IData)(vlSelf->__PVT__dealloc_done));
    vlSelf->__PVT__dealloc_res_en_i = ((~ (IData)(vlSymsp->TOP.reset)) 
                                       & (IData)(vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1));
    vlSelf->__PVT__alloc_res_en_i = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & (IData)(vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1));
    if ((1U == (IData)(vlSelf->__PVT__d_state))) {
        vlSelf->__PVT___GEN_171 = ((IData)(vlSelf->__PVT__dealloc_start) 
                                   | (IData)(__PVT___GEN_92));
        vlSelf->__PVT___GEN_172 = (3U & ((IData)(vlSelf->__PVT__dealloc_start)
                                          ? (IData)(vlSelf->__PVT__dealloc_wg_slot_id_i)
                                          : (IData)(__PVT___GEN_93)));
    } else if ((2U == (IData)(vlSelf->__PVT__d_state))) {
        if (vlSelf->__PVT__res_table_rd_valid) {
            if (vlSelf->__PVT___T_24) {
                vlSelf->__PVT___GEN_171 = __PVT___GEN_92;
                vlSelf->__PVT___GEN_172 = (3U & (IData)(__PVT___GEN_93));
            } else {
                vlSelf->__PVT___GEN_171 = (IData)((
                                                   (0x10000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSelf->__PVT__res_table_rd_reg)) 
                                                   | (IData)(__PVT___GEN_92)));
                vlSelf->__PVT___GEN_172 = (3U & ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__res_table_rd_reg 
                                                      >> 0x1bU)))
                                                  ? (IData)(__PVT___GEN_93)
                                                  : 
                                                 (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1bU)));
            }
        } else {
            vlSelf->__PVT___GEN_171 = __PVT___GEN_92;
            vlSelf->__PVT___GEN_172 = (3U & (IData)(__PVT___GEN_93));
        }
    } else {
        vlSelf->__PVT___GEN_171 = ((4U == (IData)(vlSelf->__PVT__d_state)) 
                                   | (IData)(__PVT___GEN_92));
        vlSelf->__PVT___GEN_172 = (3U & ((4U == (IData)(vlSelf->__PVT__d_state))
                                          ? (vlSelf->__PVT__res_table_rd_reg 
                                             >> 0x1dU)
                                          : ((8U == (IData)(vlSelf->__PVT__d_state))
                                              ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                                  ? (IData)(__PVT___GEN_93)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                                   ? (IData)(__PVT___GEN_93)
                                                   : 
                                                  (vlSelf->__PVT__res_table_last_rd_reg 
                                                   >> 0x1bU)))
                                              : ((0x10U 
                                                  == (IData)(vlSelf->__PVT__d_state))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                                   ? (IData)(__PVT___GEN_93)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                                    ? (IData)(__PVT___GEN_93)
                                                    : 
                                                   (vlSelf->__PVT__res_table_wr_reg 
                                                    >> 0x1dU)))
                                                  : (IData)(__PVT___GEN_93)))));
    }
    if (vlSelf->__PVT__res_table_rd_valid) {
        if ((3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                          >> 0x1dU)))) {
            vlSelf->__PVT___GEN_205 = vlSelf->__PVT__f_state;
            vlSelf->__PVT___GEN_196 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                             >> 0x1dU));
        } else {
            vlSelf->__PVT___GEN_205 = 8U;
            vlSelf->__PVT___GEN_196 = (3U & (IData)(vlSelf->__PVT___GEN_172));
        }
        vlSelf->__PVT___GEN_206 = ((IData)(__VdfgTmp_hda0062ea__0)
                                    ? (IData)(__PVT___T_46)
                                    : (IData)(vlSelf->__PVT__res_table_max_size));
        vlSelf->__PVT___GEN_195 = (IData)(((0x60000000U 
                                            != (0x60000000U 
                                                & vlSelf->__PVT__res_table_rd_reg)) 
                                           | (IData)(vlSelf->__PVT___GEN_171)));
    } else {
        vlSelf->__PVT___GEN_205 = vlSelf->__PVT__f_state;
        vlSelf->__PVT___GEN_206 = vlSelf->__PVT__res_table_max_size;
        vlSelf->__PVT___GEN_195 = vlSelf->__PVT___GEN_171;
        vlSelf->__PVT___GEN_196 = (3U & (IData)(vlSelf->__PVT___GEN_172));
    }
    vlSelf->__PVT___GEN_257 = ((7U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                ? vlSelf->__PVT__resource_table_ram_7
                                : ((6U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                    ? vlSelf->__PVT__resource_table_ram_6
                                    : ((5U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                        ? vlSelf->__PVT__resource_table_ram_5
                                        : ((4U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                            ? vlSelf->__PVT__resource_table_ram_4
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                ? vlSelf->__PVT__resource_table_ram_3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                    ? vlSelf->__PVT__resource_table_ram_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                     ? vlSelf->__PVT__resource_table_ram_1
                                                     : vlSelf->__PVT__resource_table_ram_0)))))));
}

VL_INLINE_OPT void VVentus_resource_table___nba_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl__0(VVentus_resource_table* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_resource_table___nba_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_92;
    CData/*1:0*/ __PVT___GEN_93;
    SData/*13:0*/ __PVT___T_44;
    SData/*13:0*/ __PVT___T_46;
    SData/*13:0*/ __PVT___T_52;
    IData/*26:0*/ __VdfgTmp_hecff3acc__0;
    IData/*28:0*/ __VdfgTmp_h1fad0f50__0;
    CData/*0:0*/ __VdfgTmp_hda0062ea__0;
    CData/*0:0*/ __VdfgTmp_h54771c51__0;
    CData/*0:0*/ __Vdly__res_table_rd_valid;
    IData/*30:0*/ __Vdly__res_table_rd_reg;
    CData/*1:0*/ __Vdly__table_head_pointer_0;
    CData/*1:0*/ __Vdly__table_head_pointer_1;
    CData/*1:0*/ __Vdly__table_head_pointer_i;
    CData/*3:0*/ __Vdly__m_state;
    CData/*3:0*/ __Vdly__a_state;
    CData/*4:0*/ __Vdly__d_state;
    CData/*3:0*/ __Vdly__f_state;
    CData/*0:0*/ __Vdly__alloc_done;
    CData/*0:0*/ __Vdly__dealloc_done;
    // Body
    __Vdly__alloc_done = vlSelf->__PVT__alloc_done;
    __Vdly__table_head_pointer_1 = vlSelf->__PVT__table_head_pointer_1;
    __Vdly__table_head_pointer_0 = vlSelf->__PVT__table_head_pointer_0;
    __Vdly__dealloc_done = vlSelf->__PVT__dealloc_done;
    __Vdly__m_state = vlSelf->__PVT__m_state;
    __Vdly__f_state = vlSelf->__PVT__f_state;
    __Vdly__d_state = vlSelf->__PVT__d_state;
    __Vdly__a_state = vlSelf->__PVT__a_state;
    __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_i;
    __Vdly__res_table_rd_valid = vlSelf->__PVT__res_table_rd_valid;
    __Vdly__res_table_rd_reg = vlSelf->__PVT__res_table_rd_reg;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__dealloc_wg_slot_id_i = 0U;
        vlSelf->__PVT__alloc_res_start_i = 0U;
        vlSelf->__PVT__alloc_wg_slot_id_i = 0U;
        vlSelf->__PVT__resource_table_ram_0 = 0U;
        vlSelf->__PVT__resource_table_ram_1 = 0U;
        vlSelf->__PVT__resource_table_ram_2 = 0U;
        vlSelf->__PVT__resource_table_ram_3 = 0U;
        vlSelf->__PVT__resource_table_ram_4 = 0U;
        vlSelf->__PVT__resource_table_ram_5 = 0U;
        vlSelf->__PVT__resource_table_ram_6 = 0U;
        vlSelf->__PVT__resource_table_ram_7 = 0U;
        vlSelf->__PVT__res_table_last_rd_reg = 0U;
        __Vdly__res_table_rd_reg = 0U;
        vlSelf->__PVT__resource_table_ram_8 = 0U;
        vlSelf->__PVT__resource_table_ram_9 = 0U;
        vlSelf->__PVT__alloc_res_size_i = 0U;
        vlSelf->__PVT__res_table_max_start = 0U;
        __Vdly__table_head_pointer_0 = 0U;
        __Vdly__table_head_pointer_1 = 0U;
        __Vdly__table_head_pointer_i = 0U;
        __Vdly__m_state = 1U;
        __Vdly__a_state = 1U;
        __Vdly__d_state = 1U;
        __Vdly__f_state = 1U;
        vlSelf->__PVT__res_table_wr_reg = 0U;
        vlSelf->__PVT__cu_initialized_i = 0U;
        vlSelf->__PVT__res_addr_wg_slot = 0U;
        vlSelf->__PVT__res_table_max_size = 0U;
        vlSelf->__PVT__new_entry_is_last = 0U;
        vlSelf->__PVT__new_entry_is_first = 0U;
        vlSelf->__PVT__rem_entry_is_last = 0U;
        vlSelf->__PVT__rem_entry_is_first = 0U;
        vlSelf->__PVT__cu_initialized_0 = 0U;
        vlSelf->__PVT__cu_initialized_1 = 0U;
        vlSelf->__PVT__res_addr_cu_id = 0U;
    } else {
        if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            vlSelf->__PVT__alloc_res_start_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start1;
            vlSelf->__PVT__alloc_wg_slot_id_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i;
            vlSelf->__PVT__alloc_res_size_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size1;
        }
        if (vlSelf->__PVT__res_table_rd_en) {
            vlSelf->__PVT__res_table_last_rd_reg = vlSelf->__PVT__res_table_rd_reg;
            __Vdly__res_table_rd_reg = ((9U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                         ? vlSelf->__PVT__resource_table_ram_9
                                         : ((8U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                             ? vlSelf->__PVT__resource_table_ram_8
                                             : vlSelf->__PVT___GEN_257));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__res_table_rd_en)))) {
            if (vlSelf->__PVT__res_table_wr_en) {
                if ((0U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_0 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((1U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_1 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((2U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_2 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((3U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_3 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((4U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_4 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((5U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_5 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((6U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_6 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((7U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_7 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((8U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_8 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((9U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_9 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__f_state))) {
            vlSelf->__PVT__res_table_max_start = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT___GEN_186));
            if (vlSelf->__PVT__find_max_start) {
                if ((1U & (~ (IData)(vlSelf->__PVT___T_5)))) {
                    __Vdly__f_state = 2U;
                }
                vlSelf->__PVT__res_addr_wg_slot = ((IData)(vlSelf->__PVT___T_5)
                                                    ? (IData)(vlSelf->__PVT___GEN_172)
                                                    : (IData)(vlSelf->__PVT__table_head_pointer_i));
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_179;
            } else {
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_172;
            }
        } else {
            vlSelf->__PVT__res_table_max_start = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT___GEN_221));
            if ((2U == (IData)(vlSelf->__PVT__f_state))) {
                if (vlSelf->__PVT__res_table_rd_valid) {
                    __Vdly__f_state = ((3U != (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU)))
                                        ? 4U : 8U);
                    vlSelf->__PVT__res_table_max_size 
                        = (0x1fffU & vlSelf->__PVT__res_table_rd_reg);
                }
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_196;
            } else if ((4U == (IData)(vlSelf->__PVT__f_state))) {
                __Vdly__f_state = vlSelf->__PVT___GEN_205;
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_196;
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_206;
            } else {
                __Vdly__f_state = vlSelf->__PVT___GEN_213;
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_172;
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_210;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__m_state))) {
            if (vlSelf->__PVT__alloc_res_en_i) {
                __Vdly__m_state = 2U;
            } else if (vlSelf->__PVT__dealloc_res_en_i) {
                __Vdly__m_state = 4U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__m_state))) {
            if (vlSelf->__PVT__alloc_done) {
                __Vdly__m_state = 8U;
            }
        } else {
            __Vdly__m_state = ((4U == (IData)(vlSelf->__PVT__m_state))
                                ? (IData)(vlSelf->__PVT___GEN_16)
                                : (IData)(vlSelf->__PVT___GEN_20));
        }
        if ((1U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__alloc_start) {
                __Vdly__a_state = ((1U & ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i)) 
                                          | (~ (IData)(vlSelf->__PVT__cu_initialized_i))))
                                    ? 8U : 2U);
                vlSelf->__PVT__new_entry_is_last = vlSelf->__PVT___T_7;
                vlSelf->__PVT__new_entry_is_first = vlSelf->__PVT___T_7;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __Vdly__a_state = ((IData)(vlSelf->__VdfgTmp_h945ab87b__0)
                                    ? ((2U == (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1bU)))
                                        ? 8U : 4U) : (IData)(vlSelf->__PVT___GEN_48));
                vlSelf->__PVT__new_entry_is_last = vlSelf->__PVT___GEN_55;
                vlSelf->__PVT__new_entry_is_first = vlSelf->__PVT___GEN_51;
            }
        } else {
            __Vdly__a_state = ((4U == (IData)(vlSelf->__PVT__a_state))
                                ? 8U : (IData)(vlSelf->__PVT___GEN_73));
        }
        if (((IData)(vlSelf->__PVT__alloc_res_en_i) 
             | (IData)(vlSelf->__PVT__dealloc_res_en_i))) {
            if (vlSelf->__PVT__res_addr_cu_id) {
                __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_1;
                vlSelf->__PVT__cu_initialized_i = vlSelf->__PVT__cu_initialized_1;
            } else {
                __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_0;
                vlSelf->__PVT__cu_initialized_i = vlSelf->__PVT__cu_initialized_0;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__d_state))) {
            if ((1U != (IData)(vlSelf->__PVT__a_state))) {
                __Vdly__table_head_pointer_i = vlSelf->__PVT___GEN_87;
            }
        } else {
            __Vdly__table_head_pointer_i = ((2U == (IData)(vlSelf->__PVT__d_state))
                                             ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                                 ? 
                                                ((IData)(vlSelf->__PVT___T_24)
                                                  ? 3U
                                                  : (IData)(vlSelf->__PVT___GEN_96))
                                                 : (IData)(vlSelf->__PVT___GEN_96))
                                             : (IData)(vlSelf->__PVT___GEN_158));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__alloc_res_en_i) 
                      | (IData)(vlSelf->__PVT__dealloc_res_en_i))))) {
            if (((IData)(vlSelf->__PVT__alloc_done) 
                 | (IData)(vlSelf->__PVT__dealloc_done))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__res_addr_cu_id)))) {
                    __Vdly__table_head_pointer_0 = vlSelf->__PVT__table_head_pointer_i;
                }
                if (vlSelf->__PVT__res_addr_cu_id) {
                    __Vdly__table_head_pointer_1 = vlSelf->__PVT__table_head_pointer_i;
                }
            }
        }
        if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1) {
            vlSelf->__PVT__dealloc_wg_slot_id_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i;
            vlSelf->__PVT__res_addr_cu_id = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        } else if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            vlSelf->__PVT__res_addr_cu_id = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__alloc_res_en_i) 
                      | (IData)(vlSelf->__PVT__dealloc_res_en_i))))) {
            if (((IData)(vlSelf->__PVT__alloc_done) 
                 | (IData)(vlSelf->__PVT__dealloc_done))) {
                vlSelf->__PVT__cu_initialized_0 = vlSelf->__PVT___GEN_238;
                vlSelf->__PVT__cu_initialized_1 = vlSelf->__PVT___GEN_239;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__d_state))) {
            if (vlSelf->__PVT__dealloc_start) {
                __Vdly__d_state = 2U;
                vlSelf->__PVT__rem_entry_is_last = 0U;
                vlSelf->__PVT__rem_entry_is_first = 0U;
            }
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else if ((2U == (IData)(vlSelf->__PVT__d_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __Vdly__d_state = ((IData)(vlSelf->__PVT___T_24)
                                    ? 1U : ((2U == 
                                             (3U & 
                                              (vlSelf->__PVT__res_table_rd_reg 
                                               >> 0x1bU)))
                                             ? 4U : 
                                            ((3U == 
                                              (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU)))
                                              ? 8U : 4U)));
                vlSelf->__PVT__rem_entry_is_last = vlSelf->__PVT___GEN_116;
                vlSelf->__PVT__rem_entry_is_first = vlSelf->__PVT___GEN_115;
            }
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else if ((4U == (IData)(vlSelf->__PVT__d_state))) {
            __Vdly__d_state = 8U;
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else {
            __Vdly__d_state = vlSelf->__PVT___GEN_147;
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_150;
        }
    }
    __Vdly__res_table_rd_valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSelf->__PVT__res_table_rd_en));
    __PVT___T_44 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_last_rd_reg) 
                               + (vlSelf->__PVT__res_table_last_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT__res_table_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((1U != (IData)(vlSelf->__PVT__m_state)) 
                                        & ((2U != (IData)(vlSelf->__PVT__m_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__m_state)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->__PVT__m_state)) 
                                                 & (IData)(vlSelf->__PVT__find_max_done))))));
    vlSelf->__PVT__res_table_rd_en = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                            & ((1U 
                                                == (IData)(vlSelf->__PVT__f_state))
                                                ? ((IData)(vlSelf->__PVT__find_max_start)
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT___T_5)) 
                                                    | (IData)(vlSelf->__PVT___GEN_171))
                                                    : (IData)(vlSelf->__PVT___GEN_171))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__f_state))
                                                    ? (IData)(vlSelf->__PVT___GEN_195)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__f_state))
                                                     ? (IData)(vlSelf->__PVT___GEN_195)
                                                     : (IData)(vlSelf->__PVT___GEN_171))))));
    vlSelf->__PVT__res_table_wr_en = ((~ (IData)(vlSymsp->TOP.reset)) 
                                      & ((1U == (IData)(vlSelf->__PVT__d_state))
                                          ? (IData)(vlSelf->__PVT___GEN_94)
                                          : ((2U == (IData)(vlSelf->__PVT__d_state))
                                              ? (IData)(vlSelf->__PVT___GEN_94)
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__d_state))
                                                  ? (IData)(vlSelf->__PVT___GEN_94)
                                                  : (IData)(vlSelf->__PVT___GEN_149)))));
    vlSelf->__PVT__find_max_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((1U != (IData)(vlSelf->__PVT__m_state)) 
                                        & ((2U == (IData)(vlSelf->__PVT__m_state))
                                            ? (IData)(vlSelf->__PVT__alloc_done)
                                            : (IData)(vlSelf->__PVT___GEN_21))));
    __Vdly__alloc_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                          & ((1U != (IData)(vlSelf->__PVT__a_state)) 
                             & ((2U != (IData)(vlSelf->__PVT__a_state)) 
                                & ((4U != (IData)(vlSelf->__PVT__a_state)) 
                                   & (8U == (IData)(vlSelf->__PVT__a_state))))));
    __Vdly__dealloc_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((1U != (IData)(vlSelf->__PVT__d_state)) 
                               & ((2U == (IData)(vlSelf->__PVT__d_state))
                                   ? ((IData)(vlSelf->__PVT__res_table_rd_valid) 
                                      & (IData)(vlSelf->__PVT___T_24))
                                   : ((4U != (IData)(vlSelf->__PVT__d_state)) 
                                      & (IData)(vlSelf->__PVT___GEN_152)))));
    vlSelf->__PVT__find_max_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((1U == (IData)(vlSelf->__PVT__f_state))
                                        ? (IData)(vlSelf->__PVT___GEN_185)
                                        : ((2U != (IData)(vlSelf->__PVT__f_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__f_state)) 
                                              & (8U 
                                                 == (IData)(vlSelf->__PVT__f_state))))));
    __VdfgTmp_hecff3acc__0 = (((IData)(vlSelf->__PVT__alloc_res_size_i) 
                               << 0xdU) | (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT__table_head_pointer_0 = __Vdly__table_head_pointer_0;
    vlSelf->__PVT__table_head_pointer_1 = __Vdly__table_head_pointer_1;
    vlSelf->__PVT__alloc_done = __Vdly__alloc_done;
    vlSelf->__PVT__dealloc_done = __Vdly__dealloc_done;
    vlSelf->__PVT__f_state = __Vdly__f_state;
    vlSelf->__PVT__d_state = __Vdly__d_state;
    vlSelf->__PVT__a_state = __Vdly__a_state;
    vlSelf->__PVT__table_head_pointer_i = __Vdly__table_head_pointer_i;
    vlSelf->__PVT__res_table_rd_valid = __Vdly__res_table_rd_valid;
    vlSelf->__PVT__res_table_rd_reg = __Vdly__res_table_rd_reg;
    vlSelf->__PVT___GEN_152 = ((8U != (IData)(vlSelf->__PVT__d_state)) 
                               & (0x10U == (IData)(vlSelf->__PVT__d_state)));
    __VdfgTmp_h1fad0f50__0 = (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                               << 0x1bU) | __VdfgTmp_hecff3acc__0);
    vlSelf->__PVT___GEN_73 = ((8U == (IData)(vlSelf->__PVT__a_state))
                               ? 1U : (IData)(vlSelf->__PVT__a_state));
    if ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))) {
        vlSelf->__PVT___T_5 = 1U;
        vlSelf->__PVT___GEN_179 = 0x1000U;
        vlSelf->__PVT___GEN_185 = vlSelf->__PVT__find_max_start;
    } else {
        vlSelf->__PVT___T_5 = 0U;
        vlSelf->__PVT___GEN_179 = 0U;
        vlSelf->__PVT___GEN_185 = 0U;
    }
    vlSelf->__PVT___GEN_186 = ((IData)(vlSelf->__PVT__find_max_start)
                                ? ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : (IData)(vlSelf->__PVT__res_table_max_start));
    vlSelf->__PVT___GEN_87 = ((2U == (IData)(vlSelf->__PVT__a_state))
                               ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                               : ((4U == (IData)(vlSelf->__PVT__a_state))
                                   ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                                   : ((8U == (IData)(vlSelf->__PVT__a_state))
                                       ? ((IData)(vlSelf->__PVT__new_entry_is_first)
                                           ? (IData)(vlSelf->__PVT__alloc_wg_slot_id_i)
                                           : (IData)(vlSelf->__PVT__table_head_pointer_i))
                                       : (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__PVT___T_7 = (1U & ((~ (IData)(vlSelf->__PVT__cu_initialized_i)) 
                                 | (3U == (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__PVT___GEN_48 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU)))
                               ? 8U : (IData)(vlSelf->__PVT__a_state));
    __PVT___T_46 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               - (IData)(__PVT___T_44)));
    __PVT___T_52 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               + (vlSelf->__PVT__res_table_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT___T_24 = (IData)((0x70000000U == 
                                    (0x78000000U & vlSelf->__PVT__res_table_rd_reg)));
    vlSelf->__VdfgTmp_h945ab87b__0 = ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                      > (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT__alloc_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & ((1U == (IData)(vlSelf->__PVT__m_state)) 
                                     & (IData)(vlSelf->__PVT__alloc_res_en_i)));
    vlSelf->__PVT__dealloc_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((1U == (IData)(vlSelf->__PVT__m_state)) 
                                       & ((~ (IData)(vlSelf->__PVT__alloc_res_en_i)) 
                                          & (IData)(vlSelf->__PVT__dealloc_res_en_i))));
    if ((1U == (IData)(vlSelf->__PVT__a_state))) {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT__table_head_pointer_i;
        vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
        if (vlSelf->__PVT__alloc_start) {
            __PVT___GEN_92 = (1U & (~ (IData)(vlSelf->__PVT___T_7)));
            __PVT___GEN_93 = (3U & ((IData)(vlSelf->__PVT___T_7)
                                     ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                     : (IData)(vlSelf->__PVT__table_head_pointer_i)));
        } else {
            __PVT___GEN_92 = 0U;
            __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
        }
    } else {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT___GEN_87;
        if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                if (vlSelf->__VdfgTmp_h945ab87b__0) {
                    vlSelf->__PVT___GEN_95 = ((0x60000000U 
                                               & vlSelf->__PVT__res_table_rd_reg) 
                                              | (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                                  << 0x1bU) 
                                                 | (0x7ffffffU 
                                                    & vlSelf->__PVT__res_table_rd_reg)));
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                } else if ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                         >> 0x1dU)))) {
                    vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                               << 0x1dU) 
                                              | (0x1fffffffU 
                                                 & vlSelf->__PVT__res_table_rd_reg));
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                } else {
                    vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                    __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU));
                }
                __PVT___GEN_92 = (((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                   <= (IData)(vlSelf->__PVT__alloc_res_start_i)) 
                                  & (3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1dU))));
            } else {
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                __PVT___GEN_92 = 0U;
            }
        } else {
            if ((4U == (IData)(vlSelf->__PVT__a_state))) {
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                           << 0x1dU) 
                                          | (0x1fffffffU 
                                             & vlSelf->__PVT__res_table_last_rd_reg));
                __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                        >> 0x1bU));
            } else if ((8U == (IData)(vlSelf->__PVT__a_state))) {
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__new_entry_is_first) 
                                           & (IData)(vlSelf->__PVT__new_entry_is_last))
                                           ? (0x70000000U 
                                              | __VdfgTmp_hecff3acc__0)
                                           : ((IData)(vlSelf->__PVT__new_entry_is_last)
                                               ? (0x60000000U 
                                                  | __VdfgTmp_h1fad0f50__0)
                                               : ((IData)(vlSelf->__PVT__new_entry_is_first)
                                                   ? 
                                                  (0x10000000U 
                                                   | (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                                       << 0x1dU) 
                                                      | __VdfgTmp_hecff3acc__0))
                                                   : 
                                                  ((0x60000000U 
                                                    & vlSelf->__PVT__res_table_last_rd_reg) 
                                                   | __VdfgTmp_h1fad0f50__0))));
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__alloc_wg_slot_id_i));
            } else {
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
            }
            __PVT___GEN_92 = 0U;
        }
    }
    __VdfgTmp_hda0062ea__0 = ((IData)(__PVT___T_46) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
    __VdfgTmp_h54771c51__0 = ((0x3fffU & ((IData)(0x1000U) 
                                          - (IData)(__PVT___T_52))) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
    if ((8U == (IData)(vlSelf->__PVT__f_state))) {
        vlSelf->__PVT___GEN_213 = 1U;
        vlSelf->__PVT___GEN_210 = (0x3fffU & ((IData)(__VdfgTmp_h54771c51__0)
                                               ? ((IData)(0x1000U) 
                                                  - (IData)(__PVT___T_52))
                                               : (IData)(vlSelf->__PVT__res_table_max_size)));
    } else {
        vlSelf->__PVT___GEN_213 = vlSelf->__PVT__f_state;
        vlSelf->__PVT___GEN_210 = (0x3fffU & (IData)(vlSelf->__PVT__res_table_max_size));
    }
    if (vlSelf->__PVT___T_24) {
        vlSelf->__PVT___GEN_116 = vlSelf->__PVT__rem_entry_is_last;
        vlSelf->__PVT___GEN_115 = vlSelf->__PVT__rem_entry_is_first;
    } else {
        vlSelf->__PVT___GEN_116 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                 >> 0x1bU)))
                                    ? (IData)(vlSelf->__PVT__rem_entry_is_last)
                                    : ((3U == (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU))) 
                                       | (IData)(vlSelf->__PVT__rem_entry_is_last)));
        vlSelf->__PVT___GEN_115 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                 >> 0x1bU))) 
                                   | (IData)(vlSelf->__PVT__rem_entry_is_first));
    }
    if (vlSelf->__VdfgTmp_h945ab87b__0) {
        vlSelf->__PVT___GEN_55 = vlSelf->__PVT__new_entry_is_last;
        vlSelf->__PVT___GEN_51 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1bU))) 
                                  | (IData)(vlSelf->__PVT__new_entry_is_first));
    } else {
        vlSelf->__PVT___GEN_55 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU))) 
                                  | (IData)(vlSelf->__PVT__new_entry_is_last));
        vlSelf->__PVT___GEN_51 = vlSelf->__PVT__new_entry_is_first;
    }
    vlSelf->__PVT___GEN_94 = ((1U != (IData)(vlSelf->__PVT__a_state)) 
                              & ((2U == (IData)(vlSelf->__PVT__a_state))
                                  ? ((IData)(vlSelf->__PVT__res_table_rd_valid) 
                                     & ((IData)(vlSelf->__VdfgTmp_h945ab87b__0) 
                                        | (3U == (3U 
                                                  & (vlSelf->__PVT__res_table_rd_reg 
                                                     >> 0x1dU)))))
                                  : ((4U == (IData)(vlSelf->__PVT__a_state)) 
                                     | (8U == (IData)(vlSelf->__PVT__a_state)))));
    if ((8U == (IData)(vlSelf->__PVT__d_state))) {
        vlSelf->__PVT___GEN_147 = 0x10U;
        if (vlSelf->__PVT__rem_entry_is_first) {
            vlSelf->__PVT___GEN_149 = (1U & (IData)(vlSelf->__PVT___GEN_94));
            vlSelf->__PVT___GEN_150 = vlSelf->__PVT___GEN_95;
        } else {
            vlSelf->__PVT___GEN_149 = (1U & ((~ (IData)(vlSelf->__PVT__rem_entry_is_last)) 
                                             | (IData)(vlSelf->__PVT___GEN_94)));
            vlSelf->__PVT___GEN_150 = ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                        ? vlSelf->__PVT___GEN_95
                                        : (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                            << 0x1dU) 
                                           | (0x1fffffffU 
                                              & vlSelf->__PVT__res_table_rd_reg)));
        }
    } else {
        if ((0x10U == (IData)(vlSelf->__PVT__d_state))) {
            vlSelf->__PVT___GEN_147 = 1U;
            vlSelf->__PVT___GEN_150 = ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                        ? (0x10000000U 
                                           | (0x67ffffffU 
                                              & vlSelf->__PVT__res_table_rd_reg))
                                        : ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                            ? (0x60000000U 
                                               | (0x1fffffffU 
                                                  & vlSelf->__PVT__res_table_rd_reg))
                                            : ((0x60000000U 
                                                & vlSelf->__PVT__res_table_rd_reg) 
                                               | (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & vlSelf->__PVT__res_table_rd_reg)))));
        } else {
            vlSelf->__PVT___GEN_147 = vlSelf->__PVT__d_state;
            vlSelf->__PVT___GEN_150 = vlSelf->__PVT___GEN_95;
        }
        vlSelf->__PVT___GEN_149 = (1U & ((0x10U == (IData)(vlSelf->__PVT__d_state)) 
                                         | (IData)(vlSelf->__PVT___GEN_94)));
    }
    vlSelf->__PVT__m_state = __Vdly__m_state;
    vlSelf->__PVT___GEN_158 = ((4U == (IData)(vlSelf->__PVT__d_state))
                                ? (IData)(vlSelf->__PVT___GEN_96)
                                : ((8U == (IData)(vlSelf->__PVT__d_state))
                                    ? (IData)(vlSelf->__PVT___GEN_96)
                                    : ((0x10U == (IData)(vlSelf->__PVT__d_state))
                                        ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                            ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                            : (IData)(vlSelf->__PVT___GEN_96))
                                        : (IData)(vlSelf->__PVT___GEN_96))));
    vlSelf->__PVT___GEN_221 = ((2U == (IData)(vlSelf->__PVT__f_state))
                                ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : ((4U == (IData)(vlSelf->__PVT__f_state))
                                    ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                        ? ((IData)(__VdfgTmp_hda0062ea__0)
                                            ? (IData)(__PVT___T_44)
                                            : (IData)(vlSelf->__PVT__res_table_max_start))
                                        : (IData)(vlSelf->__PVT__res_table_max_start))
                                    : ((8U == (IData)(vlSelf->__PVT__f_state))
                                        ? ((IData)(__VdfgTmp_h54771c51__0)
                                            ? (IData)(__PVT___T_52)
                                            : (IData)(vlSelf->__PVT__res_table_max_start))
                                        : (IData)(vlSelf->__PVT__res_table_max_start))));
    vlSelf->__PVT___GEN_238 = (1U & ((~ (IData)(vlSelf->__PVT__res_addr_cu_id)) 
                                     | (IData)(vlSelf->__PVT__cu_initialized_0)));
    vlSelf->__PVT___GEN_239 = ((IData)(vlSelf->__PVT__cu_initialized_1) 
                               | (IData)(vlSelf->__PVT__res_addr_cu_id));
    vlSelf->__PVT___res_table_rd_reg_T_2 = (0xfU & 
                                            (((IData)(vlSelf->__PVT__res_addr_cu_id) 
                                              << 2U) 
                                             + (IData)(vlSelf->__PVT__res_addr_wg_slot)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__dealloc_done)
                               ? 8U : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_20 = ((8U == (IData)(vlSelf->__PVT__m_state))
                               ? ((IData)(vlSelf->__PVT__find_max_done)
                                   ? 1U : (IData)(vlSelf->__PVT__m_state))
                               : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_21 = ((4U == (IData)(vlSelf->__PVT__m_state)) 
                              & (IData)(vlSelf->__PVT__dealloc_done));
    vlSelf->__PVT__dealloc_res_en_i = ((~ (IData)(vlSymsp->TOP.reset)) 
                                       & (IData)(vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1));
    vlSelf->__PVT__alloc_res_en_i = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & (IData)(vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1));
    if ((1U == (IData)(vlSelf->__PVT__d_state))) {
        vlSelf->__PVT___GEN_171 = ((IData)(vlSelf->__PVT__dealloc_start) 
                                   | (IData)(__PVT___GEN_92));
        vlSelf->__PVT___GEN_172 = (3U & ((IData)(vlSelf->__PVT__dealloc_start)
                                          ? (IData)(vlSelf->__PVT__dealloc_wg_slot_id_i)
                                          : (IData)(__PVT___GEN_93)));
    } else if ((2U == (IData)(vlSelf->__PVT__d_state))) {
        if (vlSelf->__PVT__res_table_rd_valid) {
            if (vlSelf->__PVT___T_24) {
                vlSelf->__PVT___GEN_171 = __PVT___GEN_92;
                vlSelf->__PVT___GEN_172 = (3U & (IData)(__PVT___GEN_93));
            } else {
                vlSelf->__PVT___GEN_171 = (IData)((
                                                   (0x10000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSelf->__PVT__res_table_rd_reg)) 
                                                   | (IData)(__PVT___GEN_92)));
                vlSelf->__PVT___GEN_172 = (3U & ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__res_table_rd_reg 
                                                      >> 0x1bU)))
                                                  ? (IData)(__PVT___GEN_93)
                                                  : 
                                                 (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1bU)));
            }
        } else {
            vlSelf->__PVT___GEN_171 = __PVT___GEN_92;
            vlSelf->__PVT___GEN_172 = (3U & (IData)(__PVT___GEN_93));
        }
    } else {
        vlSelf->__PVT___GEN_171 = ((4U == (IData)(vlSelf->__PVT__d_state)) 
                                   | (IData)(__PVT___GEN_92));
        vlSelf->__PVT___GEN_172 = (3U & ((4U == (IData)(vlSelf->__PVT__d_state))
                                          ? (vlSelf->__PVT__res_table_rd_reg 
                                             >> 0x1dU)
                                          : ((8U == (IData)(vlSelf->__PVT__d_state))
                                              ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                                  ? (IData)(__PVT___GEN_93)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                                   ? (IData)(__PVT___GEN_93)
                                                   : 
                                                  (vlSelf->__PVT__res_table_last_rd_reg 
                                                   >> 0x1bU)))
                                              : ((0x10U 
                                                  == (IData)(vlSelf->__PVT__d_state))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                                   ? (IData)(__PVT___GEN_93)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                                    ? (IData)(__PVT___GEN_93)
                                                    : 
                                                   (vlSelf->__PVT__res_table_wr_reg 
                                                    >> 0x1dU)))
                                                  : (IData)(__PVT___GEN_93)))));
    }
    if (vlSelf->__PVT__res_table_rd_valid) {
        if ((3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                          >> 0x1dU)))) {
            vlSelf->__PVT___GEN_205 = vlSelf->__PVT__f_state;
            vlSelf->__PVT___GEN_196 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                             >> 0x1dU));
        } else {
            vlSelf->__PVT___GEN_205 = 8U;
            vlSelf->__PVT___GEN_196 = (3U & (IData)(vlSelf->__PVT___GEN_172));
        }
        vlSelf->__PVT___GEN_206 = ((IData)(__VdfgTmp_hda0062ea__0)
                                    ? (IData)(__PVT___T_46)
                                    : (IData)(vlSelf->__PVT__res_table_max_size));
        vlSelf->__PVT___GEN_195 = (IData)(((0x60000000U 
                                            != (0x60000000U 
                                                & vlSelf->__PVT__res_table_rd_reg)) 
                                           | (IData)(vlSelf->__PVT___GEN_171)));
    } else {
        vlSelf->__PVT___GEN_205 = vlSelf->__PVT__f_state;
        vlSelf->__PVT___GEN_206 = vlSelf->__PVT__res_table_max_size;
        vlSelf->__PVT___GEN_195 = vlSelf->__PVT___GEN_171;
        vlSelf->__PVT___GEN_196 = (3U & (IData)(vlSelf->__PVT___GEN_172));
    }
    vlSelf->__PVT___GEN_257 = ((7U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                ? vlSelf->__PVT__resource_table_ram_7
                                : ((6U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                    ? vlSelf->__PVT__resource_table_ram_6
                                    : ((5U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                        ? vlSelf->__PVT__resource_table_ram_5
                                        : ((4U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                            ? vlSelf->__PVT__resource_table_ram_4
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                ? vlSelf->__PVT__resource_table_ram_3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                    ? vlSelf->__PVT__resource_table_ram_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                     ? vlSelf->__PVT__resource_table_ram_1
                                                     : vlSelf->__PVT__resource_table_ram_0)))))));
}

VL_INLINE_OPT void VVentus_resource_table___nba_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl__0(VVentus_resource_table* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_resource_table___nba_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_92;
    CData/*1:0*/ __PVT___GEN_93;
    SData/*13:0*/ __PVT___T_44;
    SData/*13:0*/ __PVT___T_46;
    SData/*13:0*/ __PVT___T_52;
    IData/*26:0*/ __VdfgTmp_hecff3acc__0;
    IData/*28:0*/ __VdfgTmp_h1fad0f50__0;
    CData/*0:0*/ __VdfgTmp_hda0062ea__0;
    CData/*0:0*/ __VdfgTmp_h54771c51__0;
    CData/*0:0*/ __Vdly__res_table_rd_valid;
    IData/*30:0*/ __Vdly__res_table_rd_reg;
    CData/*1:0*/ __Vdly__table_head_pointer_0;
    CData/*1:0*/ __Vdly__table_head_pointer_1;
    CData/*1:0*/ __Vdly__table_head_pointer_i;
    CData/*3:0*/ __Vdly__m_state;
    CData/*3:0*/ __Vdly__a_state;
    CData/*4:0*/ __Vdly__d_state;
    CData/*3:0*/ __Vdly__f_state;
    CData/*0:0*/ __Vdly__alloc_done;
    CData/*0:0*/ __Vdly__dealloc_done;
    // Body
    __Vdly__alloc_done = vlSelf->__PVT__alloc_done;
    __Vdly__table_head_pointer_1 = vlSelf->__PVT__table_head_pointer_1;
    __Vdly__table_head_pointer_0 = vlSelf->__PVT__table_head_pointer_0;
    __Vdly__dealloc_done = vlSelf->__PVT__dealloc_done;
    __Vdly__m_state = vlSelf->__PVT__m_state;
    __Vdly__f_state = vlSelf->__PVT__f_state;
    __Vdly__d_state = vlSelf->__PVT__d_state;
    __Vdly__a_state = vlSelf->__PVT__a_state;
    __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_i;
    __Vdly__res_table_rd_valid = vlSelf->__PVT__res_table_rd_valid;
    __Vdly__res_table_rd_reg = vlSelf->__PVT__res_table_rd_reg;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__dealloc_wg_slot_id_i = 0U;
        vlSelf->__PVT__alloc_res_start_i = 0U;
        vlSelf->__PVT__alloc_wg_slot_id_i = 0U;
        vlSelf->__PVT__resource_table_ram_0 = 0U;
        vlSelf->__PVT__resource_table_ram_1 = 0U;
        vlSelf->__PVT__resource_table_ram_2 = 0U;
        vlSelf->__PVT__resource_table_ram_3 = 0U;
        vlSelf->__PVT__resource_table_ram_4 = 0U;
        vlSelf->__PVT__resource_table_ram_5 = 0U;
        vlSelf->__PVT__resource_table_ram_6 = 0U;
        vlSelf->__PVT__resource_table_ram_7 = 0U;
        vlSelf->__PVT__res_table_last_rd_reg = 0U;
        __Vdly__res_table_rd_reg = 0U;
        vlSelf->__PVT__resource_table_ram_8 = 0U;
        vlSelf->__PVT__resource_table_ram_9 = 0U;
        vlSelf->__PVT__alloc_res_size_i = 0U;
        vlSelf->__PVT__res_table_max_start = 0U;
        __Vdly__table_head_pointer_0 = 0U;
        __Vdly__table_head_pointer_1 = 0U;
        __Vdly__table_head_pointer_i = 0U;
        __Vdly__m_state = 1U;
        __Vdly__a_state = 1U;
        __Vdly__d_state = 1U;
        __Vdly__f_state = 1U;
        vlSelf->__PVT__res_table_wr_reg = 0U;
        vlSelf->__PVT__cu_initialized_i = 0U;
        vlSelf->__PVT__res_addr_wg_slot = 0U;
        vlSelf->__PVT__res_table_max_size = 0U;
        vlSelf->__PVT__new_entry_is_last = 0U;
        vlSelf->__PVT__new_entry_is_first = 0U;
        vlSelf->__PVT__rem_entry_is_last = 0U;
        vlSelf->__PVT__rem_entry_is_first = 0U;
        vlSelf->__PVT__cu_initialized_0 = 0U;
        vlSelf->__PVT__cu_initialized_1 = 0U;
        vlSelf->__PVT__res_addr_cu_id = 0U;
    } else {
        if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            vlSelf->__PVT__alloc_res_start_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start1;
            vlSelf->__PVT__alloc_wg_slot_id_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i;
            vlSelf->__PVT__alloc_res_size_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size1;
        }
        if (vlSelf->__PVT__res_table_rd_en) {
            vlSelf->__PVT__res_table_last_rd_reg = vlSelf->__PVT__res_table_rd_reg;
            __Vdly__res_table_rd_reg = ((9U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                         ? vlSelf->__PVT__resource_table_ram_9
                                         : ((8U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                             ? vlSelf->__PVT__resource_table_ram_8
                                             : vlSelf->__PVT___GEN_257));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__res_table_rd_en)))) {
            if (vlSelf->__PVT__res_table_wr_en) {
                if ((0U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_0 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((1U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_1 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((2U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_2 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((3U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_3 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((4U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_4 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((5U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_5 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((6U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_6 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((7U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_7 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((8U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_8 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
                if ((9U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))) {
                    vlSelf->__PVT__resource_table_ram_9 
                        = vlSelf->__PVT__res_table_wr_reg;
                }
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__f_state))) {
            vlSelf->__PVT__res_table_max_start = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT___GEN_186));
            if (vlSelf->__PVT__find_max_start) {
                if ((1U & (~ (IData)(vlSelf->__PVT___T_5)))) {
                    __Vdly__f_state = 2U;
                }
                vlSelf->__PVT__res_addr_wg_slot = ((IData)(vlSelf->__PVT___T_5)
                                                    ? (IData)(vlSelf->__PVT___GEN_172)
                                                    : (IData)(vlSelf->__PVT__table_head_pointer_i));
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_179;
            } else {
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_172;
            }
        } else {
            vlSelf->__PVT__res_table_max_start = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT___GEN_221));
            if ((2U == (IData)(vlSelf->__PVT__f_state))) {
                if (vlSelf->__PVT__res_table_rd_valid) {
                    __Vdly__f_state = ((3U != (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU)))
                                        ? 4U : 8U);
                    vlSelf->__PVT__res_table_max_size 
                        = (0x1fffU & vlSelf->__PVT__res_table_rd_reg);
                }
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_196;
            } else if ((4U == (IData)(vlSelf->__PVT__f_state))) {
                __Vdly__f_state = vlSelf->__PVT___GEN_205;
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_196;
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_206;
            } else {
                __Vdly__f_state = vlSelf->__PVT___GEN_213;
                vlSelf->__PVT__res_addr_wg_slot = vlSelf->__PVT___GEN_172;
                vlSelf->__PVT__res_table_max_size = vlSelf->__PVT___GEN_210;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__m_state))) {
            if (vlSelf->__PVT__alloc_res_en_i) {
                __Vdly__m_state = 2U;
            } else if (vlSelf->__PVT__dealloc_res_en_i) {
                __Vdly__m_state = 4U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__m_state))) {
            if (vlSelf->__PVT__alloc_done) {
                __Vdly__m_state = 8U;
            }
        } else {
            __Vdly__m_state = ((4U == (IData)(vlSelf->__PVT__m_state))
                                ? (IData)(vlSelf->__PVT___GEN_16)
                                : (IData)(vlSelf->__PVT___GEN_20));
        }
        if ((1U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__alloc_start) {
                __Vdly__a_state = ((1U & ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i)) 
                                          | (~ (IData)(vlSelf->__PVT__cu_initialized_i))))
                                    ? 8U : 2U);
                vlSelf->__PVT__new_entry_is_last = vlSelf->__PVT___T_7;
                vlSelf->__PVT__new_entry_is_first = vlSelf->__PVT___T_7;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __Vdly__a_state = ((IData)(vlSelf->__VdfgTmp_h945ab87b__0)
                                    ? ((2U == (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1bU)))
                                        ? 8U : 4U) : (IData)(vlSelf->__PVT___GEN_48));
                vlSelf->__PVT__new_entry_is_last = vlSelf->__PVT___GEN_55;
                vlSelf->__PVT__new_entry_is_first = vlSelf->__PVT___GEN_51;
            }
        } else {
            __Vdly__a_state = ((4U == (IData)(vlSelf->__PVT__a_state))
                                ? 8U : (IData)(vlSelf->__PVT___GEN_73));
        }
        if (((IData)(vlSelf->__PVT__alloc_res_en_i) 
             | (IData)(vlSelf->__PVT__dealloc_res_en_i))) {
            if (vlSelf->__PVT__res_addr_cu_id) {
                __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_1;
                vlSelf->__PVT__cu_initialized_i = vlSelf->__PVT__cu_initialized_1;
            } else {
                __Vdly__table_head_pointer_i = vlSelf->__PVT__table_head_pointer_0;
                vlSelf->__PVT__cu_initialized_i = vlSelf->__PVT__cu_initialized_0;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__d_state))) {
            if ((1U != (IData)(vlSelf->__PVT__a_state))) {
                __Vdly__table_head_pointer_i = vlSelf->__PVT___GEN_87;
            }
        } else {
            __Vdly__table_head_pointer_i = ((2U == (IData)(vlSelf->__PVT__d_state))
                                             ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                                 ? 
                                                ((IData)(vlSelf->__PVT___T_24)
                                                  ? 3U
                                                  : (IData)(vlSelf->__PVT___GEN_96))
                                                 : (IData)(vlSelf->__PVT___GEN_96))
                                             : (IData)(vlSelf->__PVT___GEN_158));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__alloc_res_en_i) 
                      | (IData)(vlSelf->__PVT__dealloc_res_en_i))))) {
            if (((IData)(vlSelf->__PVT__alloc_done) 
                 | (IData)(vlSelf->__PVT__dealloc_done))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__res_addr_cu_id)))) {
                    __Vdly__table_head_pointer_0 = vlSelf->__PVT__table_head_pointer_i;
                }
                if (vlSelf->__PVT__res_addr_cu_id) {
                    __Vdly__table_head_pointer_1 = vlSelf->__PVT__table_head_pointer_i;
                }
            }
        }
        if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1) {
            vlSelf->__PVT__dealloc_wg_slot_id_i = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i;
            vlSelf->__PVT__res_addr_cu_id = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        } else if (vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            vlSelf->__PVT__res_addr_cu_id = vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__alloc_res_en_i) 
                      | (IData)(vlSelf->__PVT__dealloc_res_en_i))))) {
            if (((IData)(vlSelf->__PVT__alloc_done) 
                 | (IData)(vlSelf->__PVT__dealloc_done))) {
                vlSelf->__PVT__cu_initialized_0 = vlSelf->__PVT___GEN_238;
                vlSelf->__PVT__cu_initialized_1 = vlSelf->__PVT___GEN_239;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__d_state))) {
            if (vlSelf->__PVT__dealloc_start) {
                __Vdly__d_state = 2U;
                vlSelf->__PVT__rem_entry_is_last = 0U;
                vlSelf->__PVT__rem_entry_is_first = 0U;
            }
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else if ((2U == (IData)(vlSelf->__PVT__d_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __Vdly__d_state = ((IData)(vlSelf->__PVT___T_24)
                                    ? 1U : ((2U == 
                                             (3U & 
                                              (vlSelf->__PVT__res_table_rd_reg 
                                               >> 0x1bU)))
                                             ? 4U : 
                                            ((3U == 
                                              (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU)))
                                              ? 8U : 4U)));
                vlSelf->__PVT__rem_entry_is_last = vlSelf->__PVT___GEN_116;
                vlSelf->__PVT__rem_entry_is_first = vlSelf->__PVT___GEN_115;
            }
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else if ((4U == (IData)(vlSelf->__PVT__d_state))) {
            __Vdly__d_state = 8U;
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_95;
        } else {
            __Vdly__d_state = vlSelf->__PVT___GEN_147;
            vlSelf->__PVT__res_table_wr_reg = vlSelf->__PVT___GEN_150;
        }
    }
    __Vdly__res_table_rd_valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSelf->__PVT__res_table_rd_en));
    __PVT___T_44 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_last_rd_reg) 
                               + (vlSelf->__PVT__res_table_last_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT__res_table_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((1U != (IData)(vlSelf->__PVT__m_state)) 
                                        & ((2U != (IData)(vlSelf->__PVT__m_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__m_state)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->__PVT__m_state)) 
                                                 & (IData)(vlSelf->__PVT__find_max_done))))));
    vlSelf->__PVT__res_table_rd_en = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                            & ((1U 
                                                == (IData)(vlSelf->__PVT__f_state))
                                                ? ((IData)(vlSelf->__PVT__find_max_start)
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT___T_5)) 
                                                    | (IData)(vlSelf->__PVT___GEN_171))
                                                    : (IData)(vlSelf->__PVT___GEN_171))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__f_state))
                                                    ? (IData)(vlSelf->__PVT___GEN_195)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__f_state))
                                                     ? (IData)(vlSelf->__PVT___GEN_195)
                                                     : (IData)(vlSelf->__PVT___GEN_171))))));
    vlSelf->__PVT__res_table_wr_en = ((~ (IData)(vlSymsp->TOP.reset)) 
                                      & ((1U == (IData)(vlSelf->__PVT__d_state))
                                          ? (IData)(vlSelf->__PVT___GEN_94)
                                          : ((2U == (IData)(vlSelf->__PVT__d_state))
                                              ? (IData)(vlSelf->__PVT___GEN_94)
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__d_state))
                                                  ? (IData)(vlSelf->__PVT___GEN_94)
                                                  : (IData)(vlSelf->__PVT___GEN_149)))));
    vlSelf->__PVT__find_max_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((1U != (IData)(vlSelf->__PVT__m_state)) 
                                        & ((2U == (IData)(vlSelf->__PVT__m_state))
                                            ? (IData)(vlSelf->__PVT__alloc_done)
                                            : (IData)(vlSelf->__PVT___GEN_21))));
    __Vdly__alloc_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                          & ((1U != (IData)(vlSelf->__PVT__a_state)) 
                             & ((2U != (IData)(vlSelf->__PVT__a_state)) 
                                & ((4U != (IData)(vlSelf->__PVT__a_state)) 
                                   & (8U == (IData)(vlSelf->__PVT__a_state))))));
    __Vdly__dealloc_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((1U != (IData)(vlSelf->__PVT__d_state)) 
                               & ((2U == (IData)(vlSelf->__PVT__d_state))
                                   ? ((IData)(vlSelf->__PVT__res_table_rd_valid) 
                                      & (IData)(vlSelf->__PVT___T_24))
                                   : ((4U != (IData)(vlSelf->__PVT__d_state)) 
                                      & (IData)(vlSelf->__PVT___GEN_152)))));
    vlSelf->__PVT__find_max_done = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((1U == (IData)(vlSelf->__PVT__f_state))
                                        ? (IData)(vlSelf->__PVT___GEN_185)
                                        : ((2U != (IData)(vlSelf->__PVT__f_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__f_state)) 
                                              & (8U 
                                                 == (IData)(vlSelf->__PVT__f_state))))));
    __VdfgTmp_hecff3acc__0 = (((IData)(vlSelf->__PVT__alloc_res_size_i) 
                               << 0xdU) | (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT__table_head_pointer_0 = __Vdly__table_head_pointer_0;
    vlSelf->__PVT__table_head_pointer_1 = __Vdly__table_head_pointer_1;
    vlSelf->__PVT__alloc_done = __Vdly__alloc_done;
    vlSelf->__PVT__dealloc_done = __Vdly__dealloc_done;
    vlSelf->__PVT__f_state = __Vdly__f_state;
    vlSelf->__PVT__d_state = __Vdly__d_state;
    vlSelf->__PVT__a_state = __Vdly__a_state;
    vlSelf->__PVT__table_head_pointer_i = __Vdly__table_head_pointer_i;
    vlSelf->__PVT__res_table_rd_valid = __Vdly__res_table_rd_valid;
    vlSelf->__PVT__res_table_rd_reg = __Vdly__res_table_rd_reg;
    vlSelf->__PVT___GEN_152 = ((8U != (IData)(vlSelf->__PVT__d_state)) 
                               & (0x10U == (IData)(vlSelf->__PVT__d_state)));
    __VdfgTmp_h1fad0f50__0 = (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                               << 0x1bU) | __VdfgTmp_hecff3acc__0);
    vlSelf->__PVT___GEN_73 = ((8U == (IData)(vlSelf->__PVT__a_state))
                               ? 1U : (IData)(vlSelf->__PVT__a_state));
    if ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))) {
        vlSelf->__PVT___T_5 = 1U;
        vlSelf->__PVT___GEN_179 = 0x1000U;
        vlSelf->__PVT___GEN_185 = vlSelf->__PVT__find_max_start;
    } else {
        vlSelf->__PVT___T_5 = 0U;
        vlSelf->__PVT___GEN_179 = 0U;
        vlSelf->__PVT___GEN_185 = 0U;
    }
    vlSelf->__PVT___GEN_186 = ((IData)(vlSelf->__PVT__find_max_start)
                                ? ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : (IData)(vlSelf->__PVT__res_table_max_start));
    vlSelf->__PVT___GEN_87 = ((2U == (IData)(vlSelf->__PVT__a_state))
                               ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                               : ((4U == (IData)(vlSelf->__PVT__a_state))
                                   ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                                   : ((8U == (IData)(vlSelf->__PVT__a_state))
                                       ? ((IData)(vlSelf->__PVT__new_entry_is_first)
                                           ? (IData)(vlSelf->__PVT__alloc_wg_slot_id_i)
                                           : (IData)(vlSelf->__PVT__table_head_pointer_i))
                                       : (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__PVT___T_7 = (1U & ((~ (IData)(vlSelf->__PVT__cu_initialized_i)) 
                                 | (3U == (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__PVT___GEN_48 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU)))
                               ? 8U : (IData)(vlSelf->__PVT__a_state));
    __PVT___T_46 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               - (IData)(__PVT___T_44)));
    __PVT___T_52 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               + (vlSelf->__PVT__res_table_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT___T_24 = (IData)((0x70000000U == 
                                    (0x78000000U & vlSelf->__PVT__res_table_rd_reg)));
    vlSelf->__VdfgTmp_h945ab87b__0 = ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                      > (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT__alloc_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & ((1U == (IData)(vlSelf->__PVT__m_state)) 
                                     & (IData)(vlSelf->__PVT__alloc_res_en_i)));
    vlSelf->__PVT__dealloc_start = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((1U == (IData)(vlSelf->__PVT__m_state)) 
                                       & ((~ (IData)(vlSelf->__PVT__alloc_res_en_i)) 
                                          & (IData)(vlSelf->__PVT__dealloc_res_en_i))));
    if ((1U == (IData)(vlSelf->__PVT__a_state))) {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT__table_head_pointer_i;
        vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
        if (vlSelf->__PVT__alloc_start) {
            __PVT___GEN_92 = (1U & (~ (IData)(vlSelf->__PVT___T_7)));
            __PVT___GEN_93 = (3U & ((IData)(vlSelf->__PVT___T_7)
                                     ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                     : (IData)(vlSelf->__PVT__table_head_pointer_i)));
        } else {
            __PVT___GEN_92 = 0U;
            __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
        }
    } else {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT___GEN_87;
        if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                if (vlSelf->__VdfgTmp_h945ab87b__0) {
                    vlSelf->__PVT___GEN_95 = ((0x60000000U 
                                               & vlSelf->__PVT__res_table_rd_reg) 
                                              | (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                                  << 0x1bU) 
                                                 | (0x7ffffffU 
                                                    & vlSelf->__PVT__res_table_rd_reg)));
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                } else if ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                         >> 0x1dU)))) {
                    vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                               << 0x1dU) 
                                              | (0x1fffffffU 
                                                 & vlSelf->__PVT__res_table_rd_reg));
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                } else {
                    vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                    __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU));
                }
                __PVT___GEN_92 = (((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                   <= (IData)(vlSelf->__PVT__alloc_res_start_i)) 
                                  & (3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1dU))));
            } else {
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                __PVT___GEN_92 = 0U;
            }
        } else {
            if ((4U == (IData)(vlSelf->__PVT__a_state))) {
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                           << 0x1dU) 
                                          | (0x1fffffffU 
                                             & vlSelf->__PVT__res_table_last_rd_reg));
                __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                        >> 0x1bU));
            } else if ((8U == (IData)(vlSelf->__PVT__a_state))) {
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__new_entry_is_first) 
                                           & (IData)(vlSelf->__PVT__new_entry_is_last))
                                           ? (0x70000000U 
                                              | __VdfgTmp_hecff3acc__0)
                                           : ((IData)(vlSelf->__PVT__new_entry_is_last)
                                               ? (0x60000000U 
                                                  | __VdfgTmp_h1fad0f50__0)
                                               : ((IData)(vlSelf->__PVT__new_entry_is_first)
                                                   ? 
                                                  (0x10000000U 
                                                   | (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                                       << 0x1dU) 
                                                      | __VdfgTmp_hecff3acc__0))
                                                   : 
                                                  ((0x60000000U 
                                                    & vlSelf->__PVT__res_table_last_rd_reg) 
                                                   | __VdfgTmp_h1fad0f50__0))));
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__alloc_wg_slot_id_i));
            } else {
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
            }
            __PVT___GEN_92 = 0U;
        }
    }
    __VdfgTmp_hda0062ea__0 = ((IData)(__PVT___T_46) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
    __VdfgTmp_h54771c51__0 = ((0x3fffU & ((IData)(0x1000U) 
                                          - (IData)(__PVT___T_52))) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
    if ((8U == (IData)(vlSelf->__PVT__f_state))) {
        vlSelf->__PVT___GEN_213 = 1U;
        vlSelf->__PVT___GEN_210 = (0x3fffU & ((IData)(__VdfgTmp_h54771c51__0)
                                               ? ((IData)(0x1000U) 
                                                  - (IData)(__PVT___T_52))
                                               : (IData)(vlSelf->__PVT__res_table_max_size)));
    } else {
        vlSelf->__PVT___GEN_213 = vlSelf->__PVT__f_state;
        vlSelf->__PVT___GEN_210 = (0x3fffU & (IData)(vlSelf->__PVT__res_table_max_size));
    }
    if (vlSelf->__PVT___T_24) {
        vlSelf->__PVT___GEN_116 = vlSelf->__PVT__rem_entry_is_last;
        vlSelf->__PVT___GEN_115 = vlSelf->__PVT__rem_entry_is_first;
    } else {
        vlSelf->__PVT___GEN_116 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                 >> 0x1bU)))
                                    ? (IData)(vlSelf->__PVT__rem_entry_is_last)
                                    : ((3U == (3U & 
                                               (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU))) 
                                       | (IData)(vlSelf->__PVT__rem_entry_is_last)));
        vlSelf->__PVT___GEN_115 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                 >> 0x1bU))) 
                                   | (IData)(vlSelf->__PVT__rem_entry_is_first));
    }
    if (vlSelf->__VdfgTmp_h945ab87b__0) {
        vlSelf->__PVT___GEN_55 = vlSelf->__PVT__new_entry_is_last;
        vlSelf->__PVT___GEN_51 = ((2U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1bU))) 
                                  | (IData)(vlSelf->__PVT__new_entry_is_first));
    } else {
        vlSelf->__PVT___GEN_55 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                >> 0x1dU))) 
                                  | (IData)(vlSelf->__PVT__new_entry_is_last));
        vlSelf->__PVT___GEN_51 = vlSelf->__PVT__new_entry_is_first;
    }
    vlSelf->__PVT___GEN_94 = ((1U != (IData)(vlSelf->__PVT__a_state)) 
                              & ((2U == (IData)(vlSelf->__PVT__a_state))
                                  ? ((IData)(vlSelf->__PVT__res_table_rd_valid) 
                                     & ((IData)(vlSelf->__VdfgTmp_h945ab87b__0) 
                                        | (3U == (3U 
                                                  & (vlSelf->__PVT__res_table_rd_reg 
                                                     >> 0x1dU)))))
                                  : ((4U == (IData)(vlSelf->__PVT__a_state)) 
                                     | (8U == (IData)(vlSelf->__PVT__a_state)))));
    if ((8U == (IData)(vlSelf->__PVT__d_state))) {
        vlSelf->__PVT___GEN_147 = 0x10U;
        if (vlSelf->__PVT__rem_entry_is_first) {
            vlSelf->__PVT___GEN_149 = (1U & (IData)(vlSelf->__PVT___GEN_94));
            vlSelf->__PVT___GEN_150 = vlSelf->__PVT___GEN_95;
        } else {
            vlSelf->__PVT___GEN_149 = (1U & ((~ (IData)(vlSelf->__PVT__rem_entry_is_last)) 
                                             | (IData)(vlSelf->__PVT___GEN_94)));
            vlSelf->__PVT___GEN_150 = ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                        ? vlSelf->__PVT___GEN_95
                                        : (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                            << 0x1dU) 
                                           | (0x1fffffffU 
                                              & vlSelf->__PVT__res_table_rd_reg)));
        }
    } else {
        if ((0x10U == (IData)(vlSelf->__PVT__d_state))) {
            vlSelf->__PVT___GEN_147 = 1U;
            vlSelf->__PVT___GEN_150 = ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                        ? (0x10000000U 
                                           | (0x67ffffffU 
                                              & vlSelf->__PVT__res_table_rd_reg))
                                        : ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                            ? (0x60000000U 
                                               | (0x1fffffffU 
                                                  & vlSelf->__PVT__res_table_rd_reg))
                                            : ((0x60000000U 
                                                & vlSelf->__PVT__res_table_rd_reg) 
                                               | (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & vlSelf->__PVT__res_table_rd_reg)))));
        } else {
            vlSelf->__PVT___GEN_147 = vlSelf->__PVT__d_state;
            vlSelf->__PVT___GEN_150 = vlSelf->__PVT___GEN_95;
        }
        vlSelf->__PVT___GEN_149 = (1U & ((0x10U == (IData)(vlSelf->__PVT__d_state)) 
                                         | (IData)(vlSelf->__PVT___GEN_94)));
    }
    vlSelf->__PVT__m_state = __Vdly__m_state;
    vlSelf->__PVT___GEN_158 = ((4U == (IData)(vlSelf->__PVT__d_state))
                                ? (IData)(vlSelf->__PVT___GEN_96)
                                : ((8U == (IData)(vlSelf->__PVT__d_state))
                                    ? (IData)(vlSelf->__PVT___GEN_96)
                                    : ((0x10U == (IData)(vlSelf->__PVT__d_state))
                                        ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                            ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                            : (IData)(vlSelf->__PVT___GEN_96))
                                        : (IData)(vlSelf->__PVT___GEN_96))));
    vlSelf->__PVT___GEN_221 = ((2U == (IData)(vlSelf->__PVT__f_state))
                                ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : ((4U == (IData)(vlSelf->__PVT__f_state))
                                    ? ((IData)(vlSelf->__PVT__res_table_rd_valid)
                                        ? ((IData)(__VdfgTmp_hda0062ea__0)
                                            ? (IData)(__PVT___T_44)
                                            : (IData)(vlSelf->__PVT__res_table_max_start))
                                        : (IData)(vlSelf->__PVT__res_table_max_start))
                                    : ((8U == (IData)(vlSelf->__PVT__f_state))
                                        ? ((IData)(__VdfgTmp_h54771c51__0)
                                            ? (IData)(__PVT___T_52)
                                            : (IData)(vlSelf->__PVT__res_table_max_start))
                                        : (IData)(vlSelf->__PVT__res_table_max_start))));
    vlSelf->__PVT___GEN_238 = (1U & ((~ (IData)(vlSelf->__PVT__res_addr_cu_id)) 
                                     | (IData)(vlSelf->__PVT__cu_initialized_0)));
    vlSelf->__PVT___GEN_239 = ((IData)(vlSelf->__PVT__cu_initialized_1) 
                               | (IData)(vlSelf->__PVT__res_addr_cu_id));
    vlSelf->__PVT___res_table_rd_reg_T_2 = (0xfU & 
                                            (((IData)(vlSelf->__PVT__res_addr_cu_id) 
                                              << 2U) 
                                             + (IData)(vlSelf->__PVT__res_addr_wg_slot)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__dealloc_done)
                               ? 8U : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_20 = ((8U == (IData)(vlSelf->__PVT__m_state))
                               ? ((IData)(vlSelf->__PVT__find_max_done)
                                   ? 1U : (IData)(vlSelf->__PVT__m_state))
                               : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_21 = ((4U == (IData)(vlSelf->__PVT__m_state)) 
                              & (IData)(vlSelf->__PVT__dealloc_done));
    vlSelf->__PVT__dealloc_res_en_i = ((~ (IData)(vlSymsp->TOP.reset)) 
                                       & (IData)(vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1));
    vlSelf->__PVT__alloc_res_en_i = ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & (IData)(vlSymsp->TOP.GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1));
    if ((1U == (IData)(vlSelf->__PVT__d_state))) {
        vlSelf->__PVT___GEN_171 = ((IData)(vlSelf->__PVT__dealloc_start) 
                                   | (IData)(__PVT___GEN_92));
        vlSelf->__PVT___GEN_172 = (3U & ((IData)(vlSelf->__PVT__dealloc_start)
                                          ? (IData)(vlSelf->__PVT__dealloc_wg_slot_id_i)
                                          : (IData)(__PVT___GEN_93)));
    } else if ((2U == (IData)(vlSelf->__PVT__d_state))) {
        if (vlSelf->__PVT__res_table_rd_valid) {
            if (vlSelf->__PVT___T_24) {
                vlSelf->__PVT___GEN_171 = __PVT___GEN_92;
                vlSelf->__PVT___GEN_172 = (3U & (IData)(__PVT___GEN_93));
            } else {
                vlSelf->__PVT___GEN_171 = (IData)((
                                                   (0x10000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSelf->__PVT__res_table_rd_reg)) 
                                                   | (IData)(__PVT___GEN_92)));
                vlSelf->__PVT___GEN_172 = (3U & ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__res_table_rd_reg 
                                                      >> 0x1bU)))
                                                  ? (IData)(__PVT___GEN_93)
                                                  : 
                                                 (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1bU)));
            }
        } else {
            vlSelf->__PVT___GEN_171 = __PVT___GEN_92;
            vlSelf->__PVT___GEN_172 = (3U & (IData)(__PVT___GEN_93));
        }
    } else {
        vlSelf->__PVT___GEN_171 = ((4U == (IData)(vlSelf->__PVT__d_state)) 
                                   | (IData)(__PVT___GEN_92));
        vlSelf->__PVT___GEN_172 = (3U & ((4U == (IData)(vlSelf->__PVT__d_state))
                                          ? (vlSelf->__PVT__res_table_rd_reg 
                                             >> 0x1dU)
                                          : ((8U == (IData)(vlSelf->__PVT__d_state))
                                              ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                                  ? (IData)(__PVT___GEN_93)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                                   ? (IData)(__PVT___GEN_93)
                                                   : 
                                                  (vlSelf->__PVT__res_table_last_rd_reg 
                                                   >> 0x1bU)))
                                              : ((0x10U 
                                                  == (IData)(vlSelf->__PVT__d_state))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                                   ? (IData)(__PVT___GEN_93)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__rem_entry_is_last)
                                                    ? (IData)(__PVT___GEN_93)
                                                    : 
                                                   (vlSelf->__PVT__res_table_wr_reg 
                                                    >> 0x1dU)))
                                                  : (IData)(__PVT___GEN_93)))));
    }
    if (vlSelf->__PVT__res_table_rd_valid) {
        if ((3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                          >> 0x1dU)))) {
            vlSelf->__PVT___GEN_205 = vlSelf->__PVT__f_state;
            vlSelf->__PVT___GEN_196 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                             >> 0x1dU));
        } else {
            vlSelf->__PVT___GEN_205 = 8U;
            vlSelf->__PVT___GEN_196 = (3U & (IData)(vlSelf->__PVT___GEN_172));
        }
        vlSelf->__PVT___GEN_206 = ((IData)(__VdfgTmp_hda0062ea__0)
                                    ? (IData)(__PVT___T_46)
                                    : (IData)(vlSelf->__PVT__res_table_max_size));
        vlSelf->__PVT___GEN_195 = (IData)(((0x60000000U 
                                            != (0x60000000U 
                                                & vlSelf->__PVT__res_table_rd_reg)) 
                                           | (IData)(vlSelf->__PVT___GEN_171)));
    } else {
        vlSelf->__PVT___GEN_205 = vlSelf->__PVT__f_state;
        vlSelf->__PVT___GEN_206 = vlSelf->__PVT__res_table_max_size;
        vlSelf->__PVT___GEN_195 = vlSelf->__PVT___GEN_171;
        vlSelf->__PVT___GEN_196 = (3U & (IData)(vlSelf->__PVT___GEN_172));
    }
    vlSelf->__PVT___GEN_257 = ((7U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                ? vlSelf->__PVT__resource_table_ram_7
                                : ((6U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                    ? vlSelf->__PVT__resource_table_ram_6
                                    : ((5U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                        ? vlSelf->__PVT__resource_table_ram_5
                                        : ((4U == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                            ? vlSelf->__PVT__resource_table_ram_4
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                ? vlSelf->__PVT__resource_table_ram_3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                    ? vlSelf->__PVT__resource_table_ram_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT___res_table_rd_reg_T_2))
                                                     ? vlSelf->__PVT__resource_table_ram_1
                                                     : vlSelf->__PVT__resource_table_ram_0)))))));
}
