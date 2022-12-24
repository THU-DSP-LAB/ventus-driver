// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMMUTEST_H_
#define VERILATED_VMMUTEST_H_  // guard

#include "verilated.h"

class VMMUtest__Syms;
class VMMUtest___024root;

// This class is the main interface to the Verilated model
class VMMUtest VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VMMUtest__Syms* const vlSymsp;

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
    VL_OUT8(&io_out_a_bits_size,2,0);
    VL_OUT8(&io_out_a_bits_source,3,0);
    VL_OUT8(&io_out_a_bits_mask,1,0);
    VL_OUT8(&io_out_d_ready,0,0);
    VL_IN8(&io_out_d_valid,0,0);
    VL_IN8(&io_out_d_bits_opcode,2,0);
    VL_IN8(&io_out_d_bits_size,2,0);
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
    VL_OUT64(&io_out_a_bits_data,63,0);
    VL_IN64(&io_out_d_bits_data,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VMMUtest___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VMMUtest(VerilatedContext* contextp, const char* name = "TOP");
    explicit VMMUtest(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VMMUtest();
  private:
    VL_UNCOPYABLE(VMMUtest);  ///< Copying not allowed

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
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
