// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVentus.h for the primary calling header

#ifndef VERILATED_VVENTUS_RESOURCE_TABLE_H_
#define VERILATED_VVENTUS_RESOURCE_TABLE_H_  // guard

#include "verilated.h"

class VVentus__Syms;

class VVentus_resource_table final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_res_table_done_o,0,0);
        VL_IN8(io_alloc_res_en,0,0);
        VL_IN8(io_dealloc_res_en,0,0);
        VL_IN8(io_alloc_cu_id,0,0);
        VL_IN8(io_dealloc_cu_id,0,0);
        VL_IN8(io_alloc_wg_slot_id,1,0);
        VL_IN8(io_dealloc_wg_slot_id,1,0);
        CData/*0:0*/ __PVT__res_table_done;
        CData/*0:0*/ __PVT__alloc_res_en_i;
        CData/*0:0*/ __PVT__dealloc_res_en_i;
        CData/*1:0*/ __PVT__alloc_wg_slot_id_i;
        CData/*1:0*/ __PVT__dealloc_wg_slot_id_i;
        CData/*1:0*/ __PVT__table_head_pointer_0;
        CData/*1:0*/ __PVT__table_head_pointer_1;
        CData/*1:0*/ __PVT__table_head_pointer_i;
        CData/*3:0*/ __PVT__m_state;
        CData/*3:0*/ __PVT__a_state;
        CData/*4:0*/ __PVT__d_state;
        CData/*3:0*/ __PVT__f_state;
        CData/*0:0*/ __PVT__res_addr_cu_id;
        CData/*1:0*/ __PVT__res_addr_wg_slot;
        CData/*0:0*/ __PVT__res_table_rd_en;
        CData/*0:0*/ __PVT__res_table_wr_en;
        CData/*0:0*/ __PVT__res_table_rd_valid;
        CData/*0:0*/ __PVT__alloc_start;
        CData/*0:0*/ __PVT__dealloc_start;
        CData/*0:0*/ __PVT__find_max_start;
        CData/*0:0*/ __PVT__alloc_done;
        CData/*0:0*/ __PVT__dealloc_done;
        CData/*0:0*/ __PVT__find_max_done;
        CData/*0:0*/ __PVT__new_entry_is_last;
        CData/*0:0*/ __PVT__new_entry_is_first;
        CData/*0:0*/ __PVT__rem_entry_is_last;
        CData/*0:0*/ __PVT__rem_entry_is_first;
        CData/*0:0*/ __PVT__cu_initialized_0;
        CData/*0:0*/ __PVT__cu_initialized_1;
        CData/*0:0*/ __PVT__cu_initialized_i;
        CData/*3:0*/ __PVT___GEN_16;
        CData/*3:0*/ __PVT___GEN_20;
        CData/*0:0*/ __PVT___GEN_21;
        CData/*0:0*/ __PVT___T_5;
        CData/*0:0*/ __PVT___T_7;
        CData/*3:0*/ __PVT___GEN_48;
        CData/*0:0*/ __PVT___GEN_51;
        CData/*0:0*/ __PVT___GEN_55;
        CData/*3:0*/ __PVT___GEN_73;
        CData/*1:0*/ __PVT___GEN_87;
        CData/*0:0*/ __PVT___GEN_94;
        CData/*1:0*/ __PVT___GEN_96;
        CData/*0:0*/ __PVT___T_24;
        CData/*0:0*/ __PVT___GEN_115;
        CData/*0:0*/ __PVT___GEN_116;
        CData/*4:0*/ __PVT___GEN_147;
        CData/*0:0*/ __PVT___GEN_149;
        CData/*0:0*/ __PVT___GEN_152;
        CData/*1:0*/ __PVT___GEN_158;
        CData/*0:0*/ __PVT___GEN_171;
        CData/*1:0*/ __PVT___GEN_172;
        CData/*0:0*/ __PVT___GEN_185;
        CData/*0:0*/ __PVT___GEN_195;
        CData/*1:0*/ __PVT___GEN_196;
        CData/*3:0*/ __PVT___GEN_205;
    };
    struct {
        CData/*3:0*/ __PVT___GEN_213;
        CData/*0:0*/ __PVT___GEN_238;
        CData/*0:0*/ __PVT___GEN_239;
        CData/*3:0*/ __PVT___res_table_rd_reg_T_2;
        CData/*0:0*/ __VdfgTmp_h945ab87b__0;
        VL_OUT16(io_cam_biggest_space_size,13,0);
        VL_OUT16(io_cam_biggest_space_addr,12,0);
        VL_IN16(io_alloc_res_size,13,0);
        VL_IN16(io_alloc_res_start,12,0);
        SData/*13:0*/ __PVT__alloc_res_size_i;
        SData/*12:0*/ __PVT__alloc_res_start_i;
        SData/*13:0*/ __PVT__res_table_max_size;
        SData/*12:0*/ __PVT__res_table_max_start;
        SData/*12:0*/ __PVT___GEN_179;
        SData/*12:0*/ __PVT___GEN_186;
        SData/*13:0*/ __PVT___GEN_206;
        SData/*13:0*/ __PVT___GEN_210;
        SData/*13:0*/ __PVT___GEN_221;
        IData/*30:0*/ __PVT__resource_table_ram_0;
        IData/*30:0*/ __PVT__resource_table_ram_1;
        IData/*30:0*/ __PVT__resource_table_ram_2;
        IData/*30:0*/ __PVT__resource_table_ram_3;
        IData/*30:0*/ __PVT__resource_table_ram_4;
        IData/*30:0*/ __PVT__resource_table_ram_5;
        IData/*30:0*/ __PVT__resource_table_ram_6;
        IData/*30:0*/ __PVT__resource_table_ram_7;
        IData/*30:0*/ __PVT__resource_table_ram_8;
        IData/*30:0*/ __PVT__resource_table_ram_9;
        IData/*30:0*/ __PVT__res_table_wr_reg;
        IData/*30:0*/ __PVT__res_table_rd_reg;
        IData/*30:0*/ __PVT__res_table_last_rd_reg;
        IData/*30:0*/ __PVT___GEN_95;
        IData/*30:0*/ __PVT___GEN_150;
        IData/*30:0*/ __PVT___GEN_257;
    };

    // INTERNAL VARIABLES
    VVentus__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVentus_resource_table(VVentus__Syms* symsp, const char* name);
    ~VVentus_resource_table();
    VL_UNCOPYABLE(VVentus_resource_table);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
