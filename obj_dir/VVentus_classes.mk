# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VVentus.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VVentus \
	VVentus___024root__DepSet_h418609f7__0 \
	VVentus___024root__DepSet_h418609f7__1 \
	VVentus___024root__DepSet_hf7133f77__0 \
	VVentus_SM_wrapper__DepSet_ha4efd9bd__0 \
	VVentus_SM_wrapper__DepSet_h60d69b72__0 \
	VVentus_SM_wrapper__DepSet_h60d69b72__1 \
	VVentus_SM_wrapper__DepSet_ha852630b__0 \
	VVentus_SM_wrapper__DepSet_h0bb8b449__0 \
	VVentus_SM_wrapper__DepSet_h744d7c47__0 \
	VVentus_SM_wrapper__DepSet_hbc932c94__0 \
	VVentus_L1TagAccess__DepSet_h7ba4154a__0 \
	VVentus_collectorUnit__DepSet_h947db270__0 \
	VVentus_collectorUnit__DepSet_h947db270__1 \
	VVentus_ArrayMultiplier__DepSet_hd197263b__0 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__0 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__1 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__2 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__3 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__4 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__5 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__6 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__7 \
	VVentus_ArrayMultiplier__DepSet_hf5627313__8 \
	VVentus_Queue_19__DepSet_h567442e4__0 \
	VVentus_resource_table__DepSet_hbb58da1f__0 \
	VVentus_ScalarFPU_1__DepSet_ha05db02f__0 \
	VVentus_ScalarFPU_1__DepSet_h101ef5f6__0 \
	VVentus_ScalarFPU_1__DepSet_h101ef5f6__1 \
	VVentus_FCMA_ADD_s1__DepSet_h56045b7b__0 \
	VVentus_FCMA_ADD_s1__DepSet_h56045b7b__1 \
	VVentus_FCMA_ADD_s1__DepSet_h56045b7b__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VVentus__ConstPool_0 \
	VVentus___024root__Slow \
	VVentus___024root__DepSet_h418609f7__0__Slow \
	VVentus___024root__DepSet_hf7133f77__0__Slow \
	VVentus_SM_wrapper__Slow \
	VVentus_SM_wrapper__DepSet_h60d69b72__0__Slow \
	VVentus_SM_wrapper__DepSet_hd37b64b0__0__Slow \
	VVentus_SM_wrapper__DepSet_h68bcea3d__0__Slow \
	VVentus_SM_wrapper__DepSet_h68bcea3d__1__Slow \
	VVentus_SM_wrapper__DepSet_h68bcea3d__2__Slow \
	VVentus_SM_wrapper__DepSet_h22e4a58d__0__Slow \
	VVentus_SM_wrapper__DepSet_h22e4a58d__1__Slow \
	VVentus_SM_wrapper__DepSet_hfb4d88fe__0__Slow \
	VVentus_L1TagAccess__Slow \
	VVentus_L1TagAccess__DepSet_h1770cac0__0__Slow \
	VVentus_L1TagAccess__DepSet_h7ba4154a__0__Slow \
	VVentus_collectorUnit__Slow \
	VVentus_collectorUnit__DepSet_h947db270__0__Slow \
	VVentus_collectorUnit__DepSet_h947db270__1__Slow \
	VVentus_collectorUnit__DepSet_h4a8798f4__0__Slow \
	VVentus_ArrayMultiplier__Slow \
	VVentus_ArrayMultiplier__DepSet_hd197263b__0__Slow \
	VVentus_ArrayMultiplier__DepSet_hf5627313__0__Slow \
	VVentus_ArrayMultiplier__DepSet_hf5627313__1__Slow \
	VVentus_ArrayMultiplier__DepSet_hf5627313__2__Slow \
	VVentus_ArrayMultiplier__DepSet_hf5627313__3__Slow \
	VVentus_Queue_19__Slow \
	VVentus_Queue_19__DepSet_ha1116b48__0__Slow \
	VVentus_Queue_19__DepSet_h567442e4__0__Slow \
	VVentus_resource_table__Slow \
	VVentus_resource_table__DepSet_h5d6c710f__0__Slow \
	VVentus_ScalarFPU_1__Slow \
	VVentus_ScalarFPU_1__DepSet_h2688b88a__0__Slow \
	VVentus_ScalarFPU_1__DepSet_h101ef5f6__0__Slow \
	VVentus_ScalarFPU_1__DepSet_h101ef5f6__1__Slow \
	VVentus_FCMA_ADD_s1__Slow \
	VVentus_FCMA_ADD_s1__DepSet_h4df6bcee__0__Slow \
	VVentus_FCMA_ADD_s1__DepSet_h56045b7b__0__Slow \
	VVentus_FCMA_ADD_s1__DepSet_h56045b7b__1__Slow \
	VVentus_FCMA_ADD_s1__DepSet_h56045b7b__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VVentus__Trace__0 \
	VVentus__Trace__1 \
	VVentus__Trace__2 \
	VVentus__Trace__3 \
	VVentus__Trace__4 \
	VVentus__Trace__5 \
	VVentus__Trace__6 \
	VVentus__Trace__7 \
	VVentus__Trace__8 \
	VVentus__Trace__9 \
	VVentus__Trace__10 \
	VVentus__Trace__11 \
	VVentus__Trace__12 \
	VVentus__Trace__13 \
	VVentus__Trace__14 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VVentus__Syms \
	VVentus__Trace__0__Slow \
	VVentus__Trace__1__Slow \
	VVentus__Trace__2__Slow \
	VVentus__Trace__3__Slow \
	VVentus__Trace__4__Slow \
	VVentus__Trace__5__Slow \
	VVentus__Trace__6__Slow \
	VVentus__Trace__7__Slow \
	VVentus__Trace__8__Slow \
	VVentus__Trace__9__Slow \
	VVentus__Trace__10__Slow \
	VVentus__Trace__11__Slow \
	VVentus__Trace__12__Slow \
	VVentus__Trace__13__Slow \
	VVentus__Trace__14__Slow \
	VVentus__Trace__15__Slow \
	VVentus__Trace__16__Slow \
	VVentus__Trace__17__Slow \
	VVentus__Trace__18__Slow \
	VVentus__Trace__19__Slow \
	VVentus__Trace__20__Slow \
	VVentus__Trace__21__Slow \
	VVentus__Trace__22__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
