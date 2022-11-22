// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVENTUS_H_
#define VERILATED_VVENTUS_H_  // guard

#include "verilated.h"

class VVentus__Syms;
class VVentus___024root;
class VerilatedVcdC;
class VVentus_SM_wrapper;
class VVentus_resource_table;


// This class is the main interface to the Verilated model
class VVentus VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VVentus__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_host_req_ready,0,0);
    VL_IN8(&io_host_req_valid,0,0);
    VL_IN8(&io_host_req_bits_host_wg_id,4,0);
    VL_IN8(&io_host_req_bits_host_num_wf,2,0);
    VL_IN8(&io_host_rsp_ready,0,0);
    VL_OUT8(&io_host_rsp_valid,0,0);
    VL_OUT8(&io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id,4,0);
    VL_IN8(&io_out_a_ready,0,0);
    VL_OUT8(&io_out_a_valid,0,0);
    VL_OUT8(&io_out_a_bits_opcode,2,0);
    VL_OUT8(&io_out_a_bits_size,3,0);
    VL_OUT8(&io_out_a_bits_source,3,0);
    VL_OUT8(&io_out_a_bits_mask,3,0);
    VL_OUT8(&io_out_d_ready,0,0);
    VL_IN8(&io_out_d_valid,0,0);
    VL_IN8(&io_out_d_bits_opcode,2,0);
    VL_IN8(&io_out_d_bits_size,3,0);
    VL_IN8(&io_out_d_bits_source,3,0);
    VL_IN16(&io_host_req_bits_host_wf_size,9,0);
    VL_IN16(&io_host_req_bits_host_vgpr_size_total,12,0);
    VL_IN16(&io_host_req_bits_host_sgpr_size_total,12,0);
    VL_IN16(&io_host_req_bits_host_lds_size_total,12,0);
    VL_IN16(&io_host_req_bits_host_gds_size_total,10,0);
    VL_IN16(&io_host_req_bits_host_vgpr_size_per_wf,12,0);
    VL_IN16(&io_host_req_bits_host_sgpr_size_per_wf,12,0);
    VL_IN(&io_host_req_bits_host_start_pc,31,0);
    VL_IN(&io_host_req_bits_host_gds_baseaddr,31,0);
    VL_OUT(&io_out_a_bits_address,31,0);
    VL_OUTW(&io_out_a_bits_data,127,0,4);
    VL_INW(&io_out_d_bits_data,127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VVentus_SM_wrapper* const __PVT__GPGPU_top__DOT__SM_wrapper;
    VVentus_SM_wrapper* const __PVT__GPGPU_top__DOT__SM_wrapper_1;
    VVentus_resource_table* const __PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl;
    VVentus_resource_table* const __PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl;
    VVentus_resource_table* const __PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VVentus___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VVentus(VerilatedContext* contextp, const char* name = "TOP");
    explicit VVentus(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VVentus();
  private:
    VL_UNCOPYABLE(VVentus);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
