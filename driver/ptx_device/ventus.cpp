// PTX-backed Ventus driver (vecadd-only)
//
// This backend implements the vt_* driver ABI (ventus.h) by mapping Ventus 32-bit
// device addresses into a single CUDA device heap and launching a PTX kernel.
//
// Current scope: only the PoCL vecadd example.

#include "ventus.h"

#include "loadelf.hpp"

#include <cuda.h>

#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <mutex>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <string>
#include <vector>

namespace {

// Ventus device pointers are 32-bit in this PoCL flow (see POCL_DEVICE_ADDRESS_BITS=32).
// We model the "device address space" as an offset into a single CUDA device heap.
static constexpr uint32_t kVentusBase = 0x90000000u;
static constexpr size_t kHeapSizeBytes = 256ull * 1024 * 1024; // plenty for vecadd

static std::shared_ptr<spdlog::logger> logger;

// PTX wrapper kernel for the OpenCL "vecadd" sample.
// It consumes Ventus ABI metadata+arg-buffer from device memory and performs:
//   c[gid] = a[gid] + b[gid]
//
// Params:
// - heap_base: CUDA device pointer to the heap.
// - knl_addr:  Ventus u32 address of the 64B kernel metadata buffer (CSR_KNL).
static const char kVecaddPtx[] = R"PTX(
.version 6.0
.target sm_52
.address_size 64

.visible .entry ventus_start(
    .param .u64 heap_base,
    .param .u32 knl_addr
)
{
    .reg .pred  %p<4>;
    .reg .b32   %r<32>;
    .reg .b64   %rd<17>;
    .reg .f32   %f<3>;

    // Load params
    ld.param.u64 %rd0, [heap_base];
    ld.param.u32 %r0,  [knl_addr];

    // Constants
    mov.u32 %r1, 0x90000000;        // VENTUS_BASE

    // Convert knl_addr (u32 Ventus) -> knl_ptr (u64 CUDA global)
    sub.u32 %r2, %r0, %r1;          // knl_offset
    cvt.u64.u32 %rd1, %r2;
    add.u64 %rd2, %rd0, %rd1;       // knl_ptr

    // Load metadata fields (all u32)
    // KNL_ARG_BASE @ +4
    add.u64 %rd3, %rd2, 4;
    ld.global.u32 %r3, [%rd3];      // arg_base_u32

    // KNL_GL_SIZE_X @ +12
    add.u64 %rd4, %rd2, 12;
    ld.global.u32 %r4, [%rd4];      // global_size_x (N)

    // KNL_GL_OFFSET_X @ +36
    add.u64 %rd6, %rd2, 36;
    ld.global.u32 %r6, [%rd6];      // global_offset_x

    // Compute linear_tid = ctaid.x * ntid.x + tid.x
    mov.u32 %r7, %ctaid.x;
    mov.u32 %r8, %ntid.x;
    mov.u32 %r9, %tid.x;
    mad.lo.u32 %r10, %r7, %r8, %r9; // linear_tid

    // Guard: if linear_tid >= global_size_x return
    setp.ge.u32 %p0, %r10, %r4;
    @%p0 bra DONE;

    // gid = linear_tid + global_offset_x
    add.u32 %r11, %r10, %r6;

    // Arg base pointer: arg_base_u32 -> arg_base_ptr
    sub.u32 %r12, %r3, %r1;         // arg_base_offset
    cvt.u64.u32 %rd7, %r12;
    add.u64 %rd8, %rd0, %rd7;       // arg_base_ptr

    // Load a/b/c Ventus pointers (u32) from arg buffer
    ld.global.u32 %r13, [%rd8];     // a_ptr_u32
    add.u64 %rd9, %rd8, 4;
    ld.global.u32 %r14, [%rd9];     // b_ptr_u32
    add.u64 %rd10, %rd8, 8;
    ld.global.u32 %r15, [%rd10];    // c_ptr_u32

    // byte_off = gid << 2
    shl.b32 %r16, %r11, 2;

    // a_ptr = heap_base + (a_ptr_u32 - VENTUS_BASE) + byte_off
    sub.u32 %r17, %r13, %r1;
    add.u32 %r18, %r17, %r16;
    cvt.u64.u32 %rd11, %r18;
    add.u64 %rd12, %rd0, %rd11;

    // b_ptr
    sub.u32 %r19, %r14, %r1;
    add.u32 %r20, %r19, %r16;
    cvt.u64.u32 %rd13, %r20;
    add.u64 %rd14, %rd0, %rd13;

    // c_ptr
    sub.u32 %r21, %r15, %r1;
    add.u32 %r22, %r21, %r16;
    cvt.u64.u32 %rd15, %r22;
    add.u64 %rd16, %rd0, %rd15;

    // Load, add, store
    ld.global.f32 %f0, [%rd12];
    ld.global.f32 %f1, [%rd14];
    add.rn.f32 %f2, %f0, %f1;
    st.global.f32 [%rd16], %f2;

DONE:
    ret;
}
)PTX";

// Convert CUDA Driver API errors to a readable string for logging.
static std::string cu_err(CUresult r) {
    const char *name = nullptr;
    const char *str = nullptr;
    cuGetErrorName(r, &name);
    cuGetErrorString(r, &str);
    std::string out;
    out += (name ? name : "CUDA_ERROR");
    out += ": ";
    out += (str ? str : "");
    return out;
}

// Minimal allocator helper: align size up for bump allocation.
static uint64_t align_up_u64(uint64_t x, uint64_t a) {
    return (x + (a - 1)) & ~(a - 1);
}

// Per-process device state.
//
// Notes:
// - We use the CUDA primary context for device 0.
// - All Ventus allocations are virtual (u32) addresses into a single CUDA heap.
struct PtxDevice {
    CUdevice cu_dev{};
    CUcontext cu_ctx{};
    CUmodule cu_mod{};
    CUfunction cu_fun_vecadd{};

    CUdeviceptr heap_base{};
    size_t heap_size{};

    uint32_t next_vaddr = kVentusBase;

    // Optional: track allocations for debugging.
    std::vector<std::pair<uint32_t, uint32_t>> allocs;

    std::mutex mu;
};

// Map a Ventus 32-bit virtual address to an offset into heap_base.
static uint32_t vaddr_to_offset(uint64_t vaddr) {
    return static_cast<uint32_t>(vaddr) - kVentusBase;
}

} // namespace

// Initialize CUDA and allocate a single device heap for all subsequent vt_buf_alloc.
// The heap is zeroed to keep behavior deterministic for ABI buffers.
extern "C" int vt_dev_open(vt_device_h *hdevice) {
    if (hdevice == nullptr) return -1;

    if (!logger) {
        logger = spdlog::stdout_color_mt("ventus");
        logger->set_level(spdlog::level::debug);
    }

    auto dev = std::make_unique<PtxDevice>();

    CUresult r = cuInit(0);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuInit failed: {}", cu_err(r));
        return -1;
    }

    r = cuDeviceGet(&dev->cu_dev, 0);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuDeviceGet failed: {}", cu_err(r));
        return -1;
    }

    r = cuDevicePrimaryCtxRetain(&dev->cu_ctx, dev->cu_dev);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuDevicePrimaryCtxRetain failed: {}", cu_err(r));
        return -1;
    }

    r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    dev->heap_size = kHeapSizeBytes;
    r = cuMemAlloc(&dev->heap_base, dev->heap_size);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemAlloc failed: {}", cu_err(r));
        return -1;
    }

    r = cuMemsetD8(dev->heap_base, 0, dev->heap_size);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemsetD8 failed: {}", cu_err(r));
        return -1;
    }

    r = cuModuleLoadDataEx(&dev->cu_mod, kVecaddPtx, 0, nullptr, nullptr);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuModuleLoadDataEx failed: {}", cu_err(r));
        return -1;
    }

    r = cuModuleGetFunction(&dev->cu_fun_vecadd, dev->cu_mod, "ventus_start");
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuModuleGetFunction failed: {}", cu_err(r));
        return -1;
    }

    *hdevice = dev.release();
    SPDLOG_LOGGER_INFO(logger, "ptx_device opened (heap_size={} bytes)", kHeapSizeBytes);
    return 0;
}

// Release CUDA resources.
extern "C" int vt_dev_close(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);

    cuCtxSetCurrent(dev->cu_ctx);

    if (dev->cu_mod) {
        cuModuleUnload(dev->cu_mod);
        dev->cu_mod = nullptr;
    }

    if (dev->heap_base) {
        cuMemFree(dev->heap_base);
        dev->heap_base = 0;
    }

    if (dev->cu_ctx) {
        cuDevicePrimaryCtxRelease(dev->cu_dev);
        dev->cu_ctx = nullptr;
    }

    delete dev;
    return 0;
}

// Query device capabilities.
// PoCL may call this with hdevice==nullptr during initialization.
extern "C" int vt_dev_caps(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value) {
    (void)hdevice;
    if (value == nullptr) return -1;

    switch (caps_id) {
    case VT_CAPS_MAX_WARPS:
        *value = 8;
        return 0;
    case VT_CAPS_MAX_THREADS:
        *value = 32;
        return 0;
    default:
        return -1;
    }
}

extern "C" int vt_root_mem_alloc(vt_device_h hdevice, int taskID) {
    (void)hdevice;
    (void)taskID;
    // No VM in this backend.
    return 0;
}

extern "C" int vt_root_mem_free(vt_device_h hdevice, int taskID) {
    (void)hdevice;
    (void)taskID;
    return 0;
}

// Allocate a Ventus "device pointer".
//
// For this backend we return a 32-bit virtual address in [kVentusBase, kVentusBase+heap_size)
// and back it with bytes inside `heap_base`.
extern "C" int vt_buf_alloc(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID,
    uint64_t kernelID
) {
    (void)BUF_TYPE;
    (void)taskID;
    (void)kernelID;

    if (hdevice == nullptr || vaddr == nullptr || size == 0) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);

    std::lock_guard<std::mutex> lock(dev->mu);

    uint64_t aligned = align_up_u64(size, 16);
    uint64_t v = dev->next_vaddr;
    uint64_t next = v + aligned;

    // Offset must fit into the heap and 32-bit space.
    uint64_t off = static_cast<uint32_t>(v) - kVentusBase;
    if (off + aligned > dev->heap_size) {
        SPDLOG_LOGGER_ERROR(logger, "vt_buf_alloc out of heap: size=0x{:x}", size);
        return -1;
    }

    dev->next_vaddr = static_cast<uint32_t>(next);
    dev->allocs.emplace_back(static_cast<uint32_t>(v), static_cast<uint32_t>(aligned));

    *vaddr = v;
    return 0;
}

extern "C" int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    (void)hdevice;
    (void)size;
    (void)vaddr;
    (void)taskID;
    (void)kernelID;
    // No-op for now.
    return 0;
}

extern "C" int vt_one_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    return vt_buf_free(hdevice, size, vaddr, taskID, kernelID);
}

// Copy from host to the CUDA heap at (heap_base + (dev_vaddr - kVentusBase)).
extern "C" int vt_copy_to_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, const void *src_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    (void)taskID;
    (void)kernelID;

    if (hdevice == nullptr || src_addr == nullptr || size == 0) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    uint32_t off = vaddr_to_offset(dev_vaddr);
    if (static_cast<uint64_t>(off) + size > dev->heap_size) return -1;

    r = cuMemcpyHtoD(dev->heap_base + off, src_addr, size);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemcpyHtoD failed: {}", cu_err(r));
        return -1;
    }

    return 0;
}

// Copy from the CUDA heap at (heap_base + (dev_vaddr - kVentusBase)) back to host.
extern "C" int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    (void)taskID;
    (void)kernelID;

    if (hdevice == nullptr || dst_addr == nullptr || size == 0) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    uint32_t off = vaddr_to_offset(dev_vaddr);
    if (static_cast<uint64_t>(off) + size > dev->heap_size) return -1;

    r = cuMemcpyDtoH(dst_addr, dev->heap_base + off, size);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemcpyDtoH failed: {}", cu_err(r));
        return -1;
    }

    return 0;
}

extern "C" int vt_upload_kernel_bytes(vt_device_h device, const void *content, uint64_t size, int taskID) {
    (void)device;
    (void)content;
    (void)size;
    (void)taskID;
    // Not used by PoCL Ventus device today.
    return -1;
}

// Upload a Ventus kernel image (RISC-V ELF) into the heap.
//
// Even though this backend does not execute the ELF today (vecadd is executed via PTX),
// keeping the PT_LOAD copy semantics helps future bring-up and debugging.
extern "C" int vt_upload_kernel_file(vt_device_h hdevice, const char *filename, int kernelID) {
    (void)kernelID;
    if (hdevice == nullptr || filename == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);

    // Keep ABI-compatible ELF loading semantics: PT_LOAD segments are copied to vaddr.
    auto blocks = get_data_from_elf(filename, logger);
    if (blocks.empty()) {
        SPDLOG_LOGGER_WARN(logger, "vt_upload_kernel_file: no PT_LOAD blocks loaded from {} (ignored for vecadd-only)", filename);
        return 0;
    }

    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    for (const auto &b : blocks) {
        if (b.memsz == 0) continue;
        if (b.vaddr < kVentusBase) {
            // This backend only supports data addresses in the heap-mapped region.
            SPDLOG_LOGGER_WARN(logger, "ELF segment vaddr 0x{:x} below VENTUS_BASE, skipping", b.vaddr);
            continue;
        }
        uint32_t off = static_cast<uint32_t>(b.vaddr) - kVentusBase;
        if (static_cast<uint64_t>(off) + b.memsz > dev->heap_size) {
            SPDLOG_LOGGER_ERROR(logger, "ELF segment out of heap: vaddr=0x{:x} memsz=0x{:x}", b.vaddr, b.memsz);
            return -1;
        }

        if (!b.data.empty()) {
            r = cuMemcpyHtoD(dev->heap_base + off, b.data.data(), b.data.size());
            if (r != CUDA_SUCCESS) {
                SPDLOG_LOGGER_ERROR(logger, "cuMemcpyHtoD(elf) failed: {}", cu_err(r));
                return -1;
            }
        }
        if (b.memsz > b.data.size()) {
            size_t zlen = b.memsz - b.data.size();
            r = cuMemsetD8(dev->heap_base + off + b.data.size(), 0, zlen);
            if (r != CUDA_SUCCESS) {
                SPDLOG_LOGGER_ERROR(logger, "cuMemsetD8(elf) failed: {}", cu_err(r));
                return -1;
            }
        }
    }

    return 0;
}

// Launch the PTX wrapper kernel.
//
// PoCL passes a driver-level `vt_kernel_metadata_t` which includes:
// - kernel_size[]: number of work-groups (maps to CUDA grid dim)
// - num_thread_local[]: local size (maps to CUDA block dim)
// - metaDataBaseAddr: Ventus u32 address of the 64B "hardware metadata buffer" (CSR_KNL)
extern "C" int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *metaData, uint64_t taskID) {
    (void)taskID;

    if (hdevice == nullptr || metaData == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);

    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    // vecadd-only scope
    if (metaData->kernel_name && std::string(metaData->kernel_name) != "vecadd") {
        SPDLOG_LOGGER_ERROR(logger, "ptx_device only supports kernel vecadd (got '{}')", metaData->kernel_name);
        return -1;
    }

    uint32_t knl_addr = static_cast<uint32_t>(metaData->metaDataBaseAddr);

    unsigned grid_x = static_cast<unsigned>(metaData->kernel_size[0]);
    unsigned grid_y = static_cast<unsigned>(metaData->kernel_size[1]);
    unsigned grid_z = static_cast<unsigned>(metaData->kernel_size[2]);

    unsigned block_x = static_cast<unsigned>(metaData->num_thread_local[0]);
    unsigned block_y = static_cast<unsigned>(metaData->num_thread_local[1]);
    unsigned block_z = static_cast<unsigned>(metaData->num_thread_local[2]);

    void *params[] = {&dev->heap_base, &knl_addr};

    r = cuLaunchKernel(
        dev->cu_fun_vecadd,
        grid_x, grid_y, grid_z,
        block_x, block_y, block_z,
        0, nullptr,
        params, nullptr
    );
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuLaunchKernel failed: {}", cu_err(r));
        return -1;
    }

    return 0;
}

// Wait for kernel completion (simple cuCtxSynchronize for now).
extern "C" int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    (void)timeout;
    if (hdevice == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    r = cuCtxSynchronize();
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSynchronize failed: {}", cu_err(r));
        return -1;
    }

    return 0;
}

extern "C" int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    (void)hdevice;
    (void)finished_kernel_list;
    return 0;
}

extern "C" int vt_dump_perf(vt_device_h device, FILE *stream) {
    (void)device;
    (void)stream;
    return -1;
}
