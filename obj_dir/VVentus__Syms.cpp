// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVentus__Syms.h"
#include "VVentus.h"
#include "VVentus___024root.h"
#include "VVentus_SM_wrapper.h"
#include "VVentus_L1TagAccess.h"
#include "VVentus_collectorUnit.h"
#include "VVentus_ArrayMultiplier.h"
#include "VVentus_Queue_19.h"
#include "VVentus_resource_table.h"
#include "VVentus_ScalarFPU_1.h"
#include "VVentus_FCMA_ADD_s1.h"

// FUNCTIONS
VVentus__Syms::~VVentus__Syms()
{
}

VVentus__Syms::VVentus__Syms(VerilatedContext* contextp, const char* namep, VVentus* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__GPGPU_top__DOT__SM_wrapper{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper")}
    , TOP__GPGPU_top__DOT__SM_wrapper__dcache__DOT__TagAccess{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.dcache.TagAccess")}
    , TOP__GPGPU_top__DOT__SM_wrapper__icache__DOT__tagAccess{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.icache.tagAccess")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_0.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_1.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_2.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.fpu.fpu.FPUArray_3.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.ibuffer.fifo_0")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.ibuffer.fifo_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.ibuffer.fifo_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.ibuffer.fifo_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.mul.ArrayMultiplier")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.mul.ArrayMultiplier_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.mul.ArrayMultiplier_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.mul.ArrayMultiplier_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.operand_collector.collectorUnit")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.operand_collector.collectorUnit_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.operand_collector.collectorUnit_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper.pipe.operand_collector.collectorUnit_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__dcache__DOT__TagAccess{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.dcache.TagAccess")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__icache__DOT__tagAccess{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.icache.tagAccess")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_0.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_1.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_2.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.fpu.fpu.FPUArray_3.FMA.addPipe.s1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.ibuffer.fifo_0")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.ibuffer.fifo_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.ibuffer.fifo_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.ibuffer.fifo_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.mul.ArrayMultiplier")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.mul.ArrayMultiplier_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.mul.ArrayMultiplier_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.mul.ArrayMultiplier_3")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.operand_collector.collectorUnit")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.operand_collector.collectorUnit_1")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.operand_collector.collectorUnit_2")}
    , TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3{this, Verilated::catName(namep, "GPGPU_top.SM_wrapper_1.pipe.operand_collector.collectorUnit_3")}
    , TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl{this, Verilated::catName(namep, "GPGPU_top.cta.cta_sche.top_resource_table_i.rt_group.lds_res_tbl")}
    , TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl{this, Verilated::catName(namep, "GPGPU_top.cta.cta_sche.top_resource_table_i.rt_group.sgpr_res_tbl")}
    , TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl{this, Verilated::catName(namep, "GPGPU_top.cta.cta_sche.top_resource_table_i.rt_group.vgpr_res_tbl")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__GPGPU_top__DOT__SM_wrapper = &TOP__GPGPU_top__DOT__SM_wrapper;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__TagAccess = &TOP__GPGPU_top__DOT__SM_wrapper__dcache__DOT__TagAccess;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__tagAccess = &TOP__GPGPU_top__DOT__SM_wrapper__icache__DOT__tagAccess;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1;
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1.__PVT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2;
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2.__PVT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3;
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_2 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_3 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_2 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_2;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_3 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_3;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_1;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_2;
    TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3 = &TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_3;
    TOP.__PVT__GPGPU_top__DOT__SM_wrapper_1 = &TOP__GPGPU_top__DOT__SM_wrapper_1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__TagAccess = &TOP__GPGPU_top__DOT__SM_wrapper_1__dcache__DOT__TagAccess;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__tagAccess = &TOP__GPGPU_top__DOT__SM_wrapper_1__icache__DOT__tagAccess;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1;
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1.__PVT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2;
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2.__PVT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3;
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_2 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_3 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_2 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_2;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_3 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_3;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2;
    TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3 = &TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3;
    TOP.__PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl = &TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl;
    TOP.__PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl = &TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl;
    TOP.__PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl = &TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__dcache__DOT__TagAccess.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__icache__DOT__tagAccess.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit.__Vconfigure(true);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__dcache__DOT__TagAccess.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__icache__DOT__tagAccess.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2.__Vconfigure(false);
    TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3.__Vconfigure(false);
    TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__Vconfigure(true);
    TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__Vconfigure(false);
    TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__Vconfigure(false);
    // Setup scopes
    __Vscope_GPGPU_top__SM_wrapper_1__dcache__MshrAccess.configure(this, name(), "GPGPU_top.SM_wrapper_1.dcache.MshrAccess", "MshrAccess", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper_1__dcache__TagAccess__iTagChecker.configure(this, name(), "GPGPU_top.SM_wrapper_1.dcache.TagAccess.iTagChecker", "iTagChecker", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper_1__dcache__WriteDataBuf.configure(this, name(), "GPGPU_top.SM_wrapper_1.dcache.WriteDataBuf", "WriteDataBuf", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper_1__icache__mshrAccess.configure(this, name(), "GPGPU_top.SM_wrapper_1.icache.mshrAccess", "mshrAccess", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper_1__icache__tagAccess__iTagChecker.configure(this, name(), "GPGPU_top.SM_wrapper_1.icache.tagAccess.iTagChecker", "iTagChecker", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper__dcache__MshrAccess.configure(this, name(), "GPGPU_top.SM_wrapper.dcache.MshrAccess", "MshrAccess", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper__dcache__TagAccess__iTagChecker.configure(this, name(), "GPGPU_top.SM_wrapper.dcache.TagAccess.iTagChecker", "iTagChecker", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper__dcache__WriteDataBuf.configure(this, name(), "GPGPU_top.SM_wrapper.dcache.WriteDataBuf", "WriteDataBuf", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper__icache__mshrAccess.configure(this, name(), "GPGPU_top.SM_wrapper.icache.mshrAccess", "mshrAccess", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__SM_wrapper__icache__tagAccess__iTagChecker.configure(this, name(), "GPGPU_top.SM_wrapper.icache.tagAccess.iTagChecker", "iTagChecker", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__l2cache__requests.configure(this, name(), "GPGPU_top.l2cache.requests", "requests", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_GPGPU_top__l2cache__sinkA__putbuffer.configure(this, name(), "GPGPU_top.l2cache.sinkA.putbuffer", "putbuffer", -12, VerilatedScope::SCOPE_OTHER);
}
