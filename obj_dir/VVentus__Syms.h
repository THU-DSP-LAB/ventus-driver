// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVENTUS__SYMS_H_
#define VERILATED_VVENTUS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VVentus.h"

// INCLUDE MODULE CLASSES
#include "VVentus___024root.h"
#include "VVentus_SM_wrapper.h"
#include "VVentus_L1TagAccess.h"
#include "VVentus_collectorUnit.h"
#include "VVentus_ArrayMultiplier.h"
#include "VVentus_Queue_19.h"
#include "VVentus_resource_table.h"
#include "VVentus_ScalarFPU_1.h"
#include "VVentus_FCMA_ADD_s1.h"

// SYMS CLASS (contains all model state)
class VVentus__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VVentus* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VVentus___024root              TOP;
    VVentus_SM_wrapper             TOP__GPGPU_top__DOT__SM_wrapper;
    VVentus_L1TagAccess            TOP__GPGPU_top__DOT__SM_wrapper__dcache__DOT__TagAccess;
    VVentus_L1TagAccess            TOP__GPGPU_top__DOT__SM_wrapper__icache__DOT__tagAccess;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1;
    VVentus_ScalarFPU_1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1;
    VVentus_ScalarFPU_1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1;
    VVentus_ScalarFPU_1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_1;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_2;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__mul__DOT__ArrayMultiplier_3;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_1;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_2;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__operand_collector__DOT__collectorUnit_3;
    VVentus_SM_wrapper             TOP__GPGPU_top__DOT__SM_wrapper_1;
    VVentus_L1TagAccess            TOP__GPGPU_top__DOT__SM_wrapper_1__dcache__DOT__TagAccess;
    VVentus_L1TagAccess            TOP__GPGPU_top__DOT__SM_wrapper_1__icache__DOT__tagAccess;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1;
    VVentus_ScalarFPU_1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__FMA__DOT__addPipe__DOT__s1;
    VVentus_ScalarFPU_1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__FMA__DOT__addPipe__DOT__s1;
    VVentus_ScalarFPU_1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3;
    VVentus_FCMA_ADD_s1            TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2;
    VVentus_Queue_19               TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_1;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_2;
    VVentus_ArrayMultiplier        TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_3;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2;
    VVentus_collectorUnit          TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3;
    VVentus_resource_table         TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl;
    VVentus_resource_table         TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl;
    VVentus_resource_table         TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl;

    // SCOPE NAMES
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper_1__dcache__MshrAccess;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper_1__dcache__TagAccess__iTagChecker;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper_1__dcache__WriteDataBuf;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper_1__icache__mshrAccess;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper_1__icache__tagAccess__iTagChecker;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper__dcache__MshrAccess;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper__dcache__TagAccess__iTagChecker;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper__dcache__WriteDataBuf;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper__icache__mshrAccess;
    VerilatedScope __Vscope_GPGPU_top__SM_wrapper__icache__tagAccess__iTagChecker;
    VerilatedScope __Vscope_GPGPU_top__l2cache__requests;
    VerilatedScope __Vscope_GPGPU_top__l2cache__sinkA__putbuffer;

    // CONSTRUCTORS
    VVentus__Syms(VerilatedContext* contextp, const char* namep, VVentus* modelp);
    ~VVentus__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
