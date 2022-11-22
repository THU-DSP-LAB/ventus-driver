// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_resource_table.h"

VL_ATTR_COLD void VVentus_resource_table___stl_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl__0(VVentus_resource_table* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_resource_table___stl_sequent__TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl__0\n"); );
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
    // Body
    vlSelf->__PVT___GEN_73 = ((8U == (IData)(vlSelf->__PVT__a_state))
                               ? 1U : (IData)(vlSelf->__PVT__a_state));
    if ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))) {
        vlSelf->__PVT___T_5 = 1U;
        vlSelf->__PVT___GEN_179 = 0x1000U;
    } else {
        vlSelf->__PVT___T_5 = 0U;
        vlSelf->__PVT___GEN_179 = 0U;
    }
    vlSelf->__PVT___GEN_152 = ((8U != (IData)(vlSelf->__PVT__d_state)) 
                               & (0x10U == (IData)(vlSelf->__PVT__d_state)));
    vlSelf->__PVT___GEN_185 = ((IData)(vlSelf->__PVT__find_max_start) 
                               & (3U == (IData)(vlSelf->__PVT__table_head_pointer_i)));
    vlSelf->__PVT___GEN_238 = (1U & ((~ (IData)(vlSelf->__PVT__res_addr_cu_id)) 
                                     | (IData)(vlSelf->__PVT__cu_initialized_0)));
    vlSelf->__PVT___GEN_239 = ((IData)(vlSelf->__PVT__cu_initialized_1) 
                               | (IData)(vlSelf->__PVT__res_addr_cu_id));
    vlSelf->__PVT___GEN_48 = ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU)))
                               ? 8U : (IData)(vlSelf->__PVT__a_state));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__dealloc_done)
                               ? 8U : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_20 = ((8U == (IData)(vlSelf->__PVT__m_state))
                               ? ((IData)(vlSelf->__PVT__find_max_done)
                                   ? 1U : (IData)(vlSelf->__PVT__m_state))
                               : (IData)(vlSelf->__PVT__m_state));
    vlSelf->__PVT___GEN_21 = ((4U == (IData)(vlSelf->__PVT__m_state)) 
                              & (IData)(vlSelf->__PVT__dealloc_done));
    vlSelf->__PVT___GEN_186 = ((IData)(vlSelf->__PVT__find_max_start)
                                ? ((3U == (IData)(vlSelf->__PVT__table_head_pointer_i))
                                    ? 0U : (IData)(vlSelf->__PVT__res_table_max_start))
                                : (IData)(vlSelf->__PVT__res_table_max_start));
    vlSelf->__PVT___res_table_rd_reg_T_2 = (0xfU & 
                                            (((IData)(vlSelf->__PVT__res_addr_cu_id) 
                                              << 2U) 
                                             + (IData)(vlSelf->__PVT__res_addr_wg_slot)));
    vlSelf->__PVT___GEN_87 = ((2U == (IData)(vlSelf->__PVT__a_state))
                               ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                               : ((4U == (IData)(vlSelf->__PVT__a_state))
                                   ? (IData)(vlSelf->__PVT__table_head_pointer_i)
                                   : ((8U == (IData)(vlSelf->__PVT__a_state))
                                       ? ((IData)(vlSelf->__PVT__new_entry_is_first)
                                           ? (IData)(vlSelf->__PVT__alloc_wg_slot_id_i)
                                           : (IData)(vlSelf->__PVT__table_head_pointer_i))
                                       : (IData)(vlSelf->__PVT__table_head_pointer_i))));
    __PVT___T_52 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               + (vlSelf->__PVT__res_table_rd_reg 
                                  >> 0xdU)));
    __PVT___T_44 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_last_rd_reg) 
                               + (vlSelf->__PVT__res_table_last_rd_reg 
                                  >> 0xdU)));
    vlSelf->__PVT___T_24 = (IData)((0x70000000U == 
                                    (0x78000000U & vlSelf->__PVT__res_table_rd_reg)));
    __VdfgTmp_hecff3acc__0 = (((IData)(vlSelf->__PVT__alloc_res_size_i) 
                               << 0xdU) | (IData)(vlSelf->__PVT__alloc_res_start_i));
    vlSelf->__PVT___T_7 = (1U & ((~ (IData)(vlSelf->__PVT__cu_initialized_i)) 
                                 | (3U == (IData)(vlSelf->__PVT__table_head_pointer_i))));
    vlSelf->__VdfgTmp_h945ab87b__0 = ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                      > (IData)(vlSelf->__PVT__alloc_res_start_i));
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
    __PVT___T_46 = (0x3fffU & ((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                               - (IData)(__PVT___T_44)));
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
    __VdfgTmp_h1fad0f50__0 = (((IData)(vlSelf->__PVT__res_addr_wg_slot) 
                               << 0x1bU) | __VdfgTmp_hecff3acc__0);
    if ((1U == (IData)(vlSelf->__PVT__a_state))) {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT__table_head_pointer_i;
        if (vlSelf->__PVT__alloc_start) {
            __PVT___GEN_92 = (1U & (~ (IData)(vlSelf->__PVT___T_7)));
            __PVT___GEN_93 = (3U & ((IData)(vlSelf->__PVT___T_7)
                                     ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                     : (IData)(vlSelf->__PVT__table_head_pointer_i)));
        } else {
            __PVT___GEN_92 = 0U;
            __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
        }
        vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
    } else {
        vlSelf->__PVT___GEN_96 = vlSelf->__PVT___GEN_87;
        if ((2U == (IData)(vlSelf->__PVT__a_state))) {
            if (vlSelf->__PVT__res_table_rd_valid) {
                __PVT___GEN_92 = (((0x1fffU & vlSelf->__PVT__res_table_rd_reg) 
                                   <= (IData)(vlSelf->__PVT__alloc_res_start_i)) 
                                  & (3U != (3U & (vlSelf->__PVT__res_table_rd_reg 
                                                  >> 0x1dU))));
                if (vlSelf->__VdfgTmp_h945ab87b__0) {
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                    vlSelf->__PVT___GEN_95 = ((0x60000000U 
                                               & vlSelf->__PVT__res_table_rd_reg) 
                                              | (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                                  << 0x1bU) 
                                                 | (0x7ffffffU 
                                                    & vlSelf->__PVT__res_table_rd_reg)));
                } else if ((3U == (3U & (vlSelf->__PVT__res_table_rd_reg 
                                         >> 0x1dU)))) {
                    __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                    vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                               << 0x1dU) 
                                              | (0x1fffffffU 
                                                 & vlSelf->__PVT__res_table_rd_reg));
                } else {
                    __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                            >> 0x1dU));
                    vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
                }
            } else {
                __PVT___GEN_92 = 0U;
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
            }
        } else {
            __PVT___GEN_92 = 0U;
            if ((4U == (IData)(vlSelf->__PVT__a_state))) {
                __PVT___GEN_93 = (3U & (vlSelf->__PVT__res_table_rd_reg 
                                        >> 0x1bU));
                vlSelf->__PVT___GEN_95 = (((IData)(vlSelf->__PVT__alloc_wg_slot_id_i) 
                                           << 0x1dU) 
                                          | (0x1fffffffU 
                                             & vlSelf->__PVT__res_table_last_rd_reg));
            } else if ((8U == (IData)(vlSelf->__PVT__a_state))) {
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__alloc_wg_slot_id_i));
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
            } else {
                __PVT___GEN_93 = (3U & (IData)(vlSelf->__PVT__res_addr_wg_slot));
                vlSelf->__PVT___GEN_95 = vlSelf->__PVT__res_table_wr_reg;
            }
        }
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
    vlSelf->__PVT___GEN_158 = ((4U == (IData)(vlSelf->__PVT__d_state))
                                ? (IData)(vlSelf->__PVT___GEN_96)
                                : ((8U == (IData)(vlSelf->__PVT__d_state))
                                    ? (IData)(vlSelf->__PVT___GEN_96)
                                    : ((0x10U == (IData)(vlSelf->__PVT__d_state))
                                        ? ((IData)(vlSelf->__PVT__rem_entry_is_first)
                                            ? (IData)(vlSelf->__PVT__res_addr_wg_slot)
                                            : (IData)(vlSelf->__PVT___GEN_96))
                                        : (IData)(vlSelf->__PVT___GEN_96))));
    __VdfgTmp_hda0062ea__0 = ((IData)(__PVT___T_46) 
                              > (IData)(vlSelf->__PVT__res_table_max_size));
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
}

VL_ATTR_COLD void VVentus_resource_table___ctor_var_reset(VVentus_resource_table* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_resource_table___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_res_table_done_o = VL_RAND_RESET_I(1);
    vlSelf->io_cam_biggest_space_size = VL_RAND_RESET_I(14);
    vlSelf->io_cam_biggest_space_addr = VL_RAND_RESET_I(13);
    vlSelf->io_alloc_res_en = VL_RAND_RESET_I(1);
    vlSelf->io_dealloc_res_en = VL_RAND_RESET_I(1);
    vlSelf->io_alloc_cu_id = VL_RAND_RESET_I(1);
    vlSelf->io_dealloc_cu_id = VL_RAND_RESET_I(1);
    vlSelf->io_alloc_wg_slot_id = VL_RAND_RESET_I(2);
    vlSelf->io_dealloc_wg_slot_id = VL_RAND_RESET_I(2);
    vlSelf->io_alloc_res_size = VL_RAND_RESET_I(14);
    vlSelf->io_alloc_res_start = VL_RAND_RESET_I(13);
    vlSelf->__PVT__res_table_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alloc_res_en_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dealloc_res_en_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alloc_wg_slot_id_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dealloc_wg_slot_id_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__alloc_res_size_i = VL_RAND_RESET_I(14);
    vlSelf->__PVT__alloc_res_start_i = VL_RAND_RESET_I(13);
    vlSelf->__PVT__resource_table_ram_0 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_1 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_2 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_3 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_4 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_5 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_6 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_7 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_8 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__resource_table_ram_9 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__table_head_pointer_0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__table_head_pointer_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__table_head_pointer_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__m_state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_state = VL_RAND_RESET_I(5);
    vlSelf->__PVT__f_state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__res_table_wr_reg = VL_RAND_RESET_I(31);
    vlSelf->__PVT__res_table_rd_reg = VL_RAND_RESET_I(31);
    vlSelf->__PVT__res_table_last_rd_reg = VL_RAND_RESET_I(31);
    vlSelf->__PVT__res_addr_cu_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res_addr_wg_slot = VL_RAND_RESET_I(2);
    vlSelf->__PVT__res_table_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res_table_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res_table_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res_table_max_size = VL_RAND_RESET_I(14);
    vlSelf->__PVT__res_table_max_start = VL_RAND_RESET_I(13);
    vlSelf->__PVT__alloc_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dealloc_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__find_max_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alloc_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dealloc_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__find_max_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_entry_is_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_entry_is_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rem_entry_is_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rem_entry_is_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cu_initialized_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cu_initialized_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cu_initialized_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_16 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_20 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_48 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_73 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_87 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___GEN_94 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_95 = VL_RAND_RESET_I(31);
    vlSelf->__PVT___GEN_96 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___T_24 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_115 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_116 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_147 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___GEN_149 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_150 = VL_RAND_RESET_I(31);
    vlSelf->__PVT___GEN_152 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_158 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___GEN_171 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_172 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___GEN_179 = VL_RAND_RESET_I(13);
    vlSelf->__PVT___GEN_185 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_186 = VL_RAND_RESET_I(13);
    vlSelf->__PVT___GEN_195 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_196 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___GEN_205 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_206 = VL_RAND_RESET_I(14);
    vlSelf->__PVT___GEN_210 = VL_RAND_RESET_I(14);
    vlSelf->__PVT___GEN_213 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_221 = VL_RAND_RESET_I(14);
    vlSelf->__PVT___GEN_238 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___res_table_rd_reg_T_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_257 = VL_RAND_RESET_I(31);
    vlSelf->__VdfgTmp_h945ab87b__0 = 0;
}
