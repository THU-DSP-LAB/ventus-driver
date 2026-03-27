// PTX-backed Ventus driver (SBT prototype)
//
// This backend implements the vt_* driver ABI (ventus.h) by:
// - loading Ventus RISC-V ELF PT_LOAD segments into device memory
// - invoking `sbt_ptx` to translate a kernel function into PTX
// - JIT-loading the PTX via CUDA Driver API and launching it
//
// Current scope: Rodinia bring-up (fail-fast on unsupported inputs).

#include "ventus.h"

#include "loadelf.hpp"
#include "ventus_perf_recorder.hpp"
#include "ventus_perf_scope.hpp"

#include <cuda.h>

#include <dlfcn.h>

#include <algorithm>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <sstream>
#include <stdexcept>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <string>
#include <string_view>
#include <sys/wait.h>
#include <unordered_map>
#include <vector>

namespace {

// Ventus device pointers are 32-bit in this PoCL flow (see POCL_DEVICE_ADDRESS_BITS=32).
// Runtime-visible non-shared memory is one logical Global region starting at 0x8000_0000.
// Driver-side runtime allocations still begin at 0x9000_0000 as an internal placement policy.
static constexpr uint32_t kVentusGlobalBase = 0x80000000u;
static constexpr uint32_t kVentusHeapBase = 0x90000000u;
static constexpr size_t kGlobalSizeBytes = (0x1'0000'0000ull - kVentusGlobalBase);
static constexpr size_t kMaxHeapSizeBytes = (0x1'0000'0000ull - kVentusHeapBase);
// Default to the full 32-bit heap window to avoid OOM on large PDS pool allocations.
static constexpr size_t kDefaultHeapSizeBytes = kMaxHeapSizeBytes;

static constexpr uint32_t kPerWarpWctxBytes = 1024u;  // must match sbt::ptx emitter
static constexpr uint32_t kPerWarpStackBytes = 1024u; // must match sbt::ptx emitter

// PTX backend models the Ventus execution shape (not raw CUDA hardware attributes).
// Keep these values consistent with PoCL's pool sizing expectation and PTX bitmap logic.
static constexpr uint64_t kPtxCapsMaxCores = 1;
static constexpr uint64_t kPtxCapsMaxWarpsPerCore = 8;
static constexpr uint64_t kPtxCapsMaxThreadsPerWarp = 32;
static constexpr uint64_t kPtxCapsMaxWgSlotsPerCore = 8;
static uint64_t g_ptx_caps_max_cores = kPtxCapsMaxCores;

static std::shared_ptr<spdlog::logger> logger;

namespace fs = std::filesystem;

struct PtxDevice;
static std::unique_ptr<vtperf::ScopedEvent> make_scoped_event(
    PtxDevice *dev, const std::string &event_type
);

static std::optional<std::string> getenv_str(const char *name) {
    if (name == nullptr) return std::nullopt;
    const char *v = std::getenv(name);
    if (v == nullptr || v[0] == '\0') return std::nullopt;
    return std::string(v);
}

static std::string shell_quote(const std::string &s) {
    std::string out;
    out.reserve(s.size() + 2);
    out.push_back('\'');
    for (char c : s) {
        if (c == '\'') out += "'\\''";
        else out.push_back(c);
    }
    out.push_back('\'');
    return out;
}

static int run_cmd_capture(const std::string &cmd, std::string *out) {
    if (out) out->clear();
    FILE *fp = popen((cmd + " 2>&1").c_str(), "r");
    if (fp == nullptr) return -1;
    char buf[4096];
    while (std::fgets(buf, sizeof(buf), fp)) {
        if (out) out->append(buf);
    }
    const int st = pclose(fp);
    if (WIFEXITED(st)) return WEXITSTATUS(st);
    return -1;
}

static std::optional<fs::path> self_so_path() {
    Dl_info info;
    if (dladdr(reinterpret_cast<void *>(reinterpret_cast<uintptr_t>(&self_so_path)), &info) == 0) return std::nullopt;
    if (info.dli_fname == nullptr || info.dli_fname[0] == '\0') return std::nullopt;
    try {
        return fs::weakly_canonical(fs::path(info.dli_fname));
    } catch (...) {
        return fs::path(info.dli_fname);
    }
}

static std::optional<fs::path> resolve_install_prefix() {
    if (const auto v = getenv_str("VENTUS_INSTALL_PREFIX")) return fs::path(*v);
    const auto so = self_so_path();
    if (!so) return std::nullopt;
    const fs::path libdir = so->parent_path();
    if (!libdir.has_parent_path()) return std::nullopt;
    // Expected install layout:
    //   <prefix>/lib/libptx_driver.so
    //   <prefix>/bin/sbt_ptx
    return libdir.parent_path();
}

static size_t parse_size_mb(const char *env_name, size_t fallback_mb) {
    const auto v = getenv_str(env_name);
    if (!v) return fallback_mb;
    try {
        return static_cast<size_t>(std::stoull(*v));
    } catch (...) {
        return fallback_mb;
    }
}

static size_t heap_size_bytes() {
    size_t mb = parse_size_mb("VENTUS_PTX_HEAP_MB", kDefaultHeapSizeBytes / (1024ull * 1024ull));
    mb = parse_size_mb("VENTUS_HEAP_MB", mb);
    size_t bytes = mb * 1024ull * 1024ull;
    if (bytes > kMaxHeapSizeBytes) bytes = kMaxHeapSizeBytes;
    if (bytes == 0) bytes = 256ull * 1024 * 1024;
    return bytes;
}

static int parse_int_env(const char *name, int fallback) {
    const auto v = getenv_str(name);
    if (!v) return fallback;
    try {
        return std::stoi(*v);
    } catch (...) {
        return fallback;
    }
}

static uint64_t file_mtime_u64(const fs::path &p) {
    try {
        const auto t = fs::last_write_time(p);
        return static_cast<uint64_t>(t.time_since_epoch().count());
    } catch (...) {
        return 0;
    }
}

static uint64_t fnv1a64(std::string_view s) {
    uint64_t h = 1469598103934665603ull;
    for (unsigned char c : s) {
        h ^= static_cast<uint64_t>(c);
        h *= 1099511628211ull;
    }
    return h;
}

static std::string hex_u64(uint64_t x) {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "0x%016llx", static_cast<unsigned long long>(x));
    return std::string(buf);
}

static std::string sanitize_filename_component(const std::string &s) {
    std::string out;
    out.reserve(s.size());
    for (unsigned char c : s) {
        if (std::isalnum(c) || c == '_' || c == '-' || c == '.') out.push_back(static_cast<char>(c));
        else out.push_back('_');
    }
    if (out.empty()) out = "kernel";
    return out;
}

static std::string resolve_sbt_ptx_path() {
    if (const auto v = getenv_str("GPU_SBT_PTX")) return *v;
    if (const auto v = getenv_str("VENTUS_SBT_PTX")) return *v;

    const auto prefix = resolve_install_prefix();
    if (prefix) {
        const fs::path p = (*prefix) / "bin" / "sbt_ptx";
        if (fs::exists(p)) return p.string();
        if (logger) {
            SPDLOG_LOGGER_ERROR(logger, "cannot locate sbt_ptx under install prefix; expected: {} (set GPU_SBT_PTX/VENTUS_SBT_PTX to override)", p.string());
        }
        return p.string();
    }

    return "sbt_ptx";
}

static fs::path resolve_ptx_cache_dir() {
    if (const auto v = getenv_str("GPU_SBT_PTX_CACHE_DIR")) return fs::path(*v);
    return fs::path("/tmp/ventus_sbt_ptx");
}

static bool read_file_to_string(const fs::path &p, std::string *out) {
    if (out == nullptr) return false;
    std::ifstream f(p, std::ios::binary);
    if (!f) return false;
    std::ostringstream ss;
    ss << f.rdbuf();
    *out = ss.str();
    return true;
}

static bool generate_ptx_via_sbt(
    const fs::path &elf, const std::string &kernel, int sm, const fs::path &out_ptx,
    std::string *log, PtxDevice *dev
) {
    const auto perf_scope = make_scoped_event(dev, "generate_ptx_via_sbt");
    try {
        fs::create_directories(out_ptx.parent_path());
    } catch (...) {
        // ignore; will fail later if path is invalid.
    }

    const std::string sbt_ptx = resolve_sbt_ptx_path();

    std::ostringstream cmd;
    cmd << shell_quote(sbt_ptx) << " " << shell_quote(elf.string());
    cmd << " --func " << shell_quote(kernel);
    cmd << " --out " << shell_quote(out_ptx.string());
    cmd << " --sm " << sm;
    cmd << " --require-known";
    if (getenv_str("GPU_SBT_PTX_NO_COMMENTS")) cmd << " --no-comments";

    SPDLOG_LOGGER_DEBUG(logger, "run sbt_ptx: {}", cmd.str());
    const int rc = run_cmd_capture(cmd.str(), log);
    if (rc != 0) return false;
    return fs::exists(out_ptx);
}

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

static uint64_t align_down_u64(uint64_t x, uint64_t a) {
    return x & ~(a - 1);
}

// Per-process device state.
//
// Notes:
// - We use the CUDA primary context for device 0.
// - All Ventus allocations are virtual (u32) addresses into a single CUDA heap.
struct PtxDevice {
    CUdevice cu_dev{};
    CUcontext cu_ctx{};

    CUdeviceptr global_base{};
    size_t global_size{};
    size_t alloc_granularity{};
    size_t heap_size{};

    uint32_t next_vaddr = kVentusHeapBase;

    enum class GlobalPageUse {
        ElfImage,
        RuntimeAlloc,
    };

    struct GlobalPage final {
        CUmemGenericAllocationHandle handle{};
        uint32_t elf_refs = 0;
        uint32_t runtime_refs = 0;
    };

    struct AllocationRecord final {
        uint32_t base_vaddr = 0;
        uint32_t requested_size = 0;
        uint32_t mapped_base_vaddr = 0;
        uint32_t mapped_size = 0;
    };

    std::unordered_map<uint32_t, GlobalPage> global_pages;
    std::vector<AllocationRecord> allocs;

    // PTX backend internal PDS bitmap backing (u32 bitmap words in Ventus heap).
    uint32_t pds_bitmap_vaddr = 0;
    uint32_t pds_bitmap_size = 0;
    uint32_t pds_bitmap_pool_base = 0;
    uint32_t pds_bitmap_pool_blocks = 0;

    // Kernel image bookkeeping (PoCL currently passes kernel_id=0, but keep it generic).
    std::unordered_map<uint64_t, std::string> elf_path_by_kernel_id;
    std::string last_elf_path;

    // SBT PTX JIT cache: key = "<elf>|<kernel>|sm=<cc>"
    struct KernelJitEntry final {
        CUmodule mod{};
        CUfunction fun{};
        uint64_t elf_mtime = 0;
        std::string ptx_path;
    };
    std::unordered_map<std::string, KernelJitEntry> jit_cache;

    int sm = 75;

    std::mutex mu;
    std::unique_ptr<vtperf::Recorder> perf_recorder;
    vt_perf_context_t perf_context{};
    bool has_perf_context = false;
};

static std::unique_ptr<vtperf::Recorder> create_perf_recorder() {
    if (!vtperf::perf_requested_from_env()) return nullptr;
    return std::make_unique<vtperf::Recorder>(vtperf::recorder_config_from_env());
}

static void populate_perf_context_fields(vtperf::CompleteEvent &event, PtxDevice *dev) {
    if (dev == nullptr) return;
    vt_perf_context_t context{};
    bool has_context = false;
    {
        std::lock_guard<std::mutex> lock(dev->mu);
        if (dev->has_perf_context) {
            context = dev->perf_context;
            has_context = true;
        }
    }
    if (!has_context) return;
    event.launch_seq = context.launch_seq;
    event.kernel_occurrence = context.kernel_occurrence;
    event.kernel_signature_hash = context.kernel_signature_hash;
    event.kernel_name = vtperf::read_perf_context_string(context.kernel_name);
    event.scope_id = vtperf::read_perf_context_string(context.scope_id);
    event.parent_event_id = vtperf::read_perf_context_string(context.parent_event_id);
}

static std::unique_ptr<vtperf::ScopedEvent> make_scoped_event(
    PtxDevice *dev, const std::string &event_type
) {
    if (dev == nullptr || dev->perf_recorder == nullptr) return nullptr;
    if (!dev->perf_recorder->should_record_event("vt", event_type)) return nullptr;
    auto scoped = std::make_unique<vtperf::ScopedEvent>(*dev->perf_recorder, "vt", event_type);
    populate_perf_context_fields(scoped->event(), dev);
    return scoped;
}

static bool map_vaddr_to_devptr(PtxDevice *dev, uint64_t vaddr, uint64_t size, CUdeviceptr *out);
static bool map_vaddr_to_devptr_locked(PtxDevice *dev, uint64_t vaddr, uint64_t size, CUdeviceptr *out);
static bool release_alloc_record_locked(PtxDevice *dev, const PtxDevice::AllocationRecord &alloc);

static const char *global_page_use_name(PtxDevice::GlobalPageUse use) {
    switch (use) {
    case PtxDevice::GlobalPageUse::ElfImage:
        return "elf";
    case PtxDevice::GlobalPageUse::RuntimeAlloc:
        return "runtime";
    }
    return "unknown";
}

static bool global_page_has_live_refs(const PtxDevice::GlobalPage &page) {
    return page.elf_refs != 0 || page.runtime_refs != 0;
}

static uint32_t *global_page_ref_slot(PtxDevice::GlobalPage *page, PtxDevice::GlobalPageUse use) {
    if (page == nullptr) return nullptr;
    switch (use) {
    case PtxDevice::GlobalPageUse::ElfImage:
        return &page->elf_refs;
    case PtxDevice::GlobalPageUse::RuntimeAlloc:
        return &page->runtime_refs;
    }
    return nullptr;
}

static bool set_current_ctx(PtxDevice *dev) {
    if (dev == nullptr) return false;
    const CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return false;
    }
    return true;
}

static bool global_range_to_offset(
    const PtxDevice *dev, uint64_t vaddr, uint64_t size, uint64_t *offset_out
) {
    if (dev == nullptr || offset_out == nullptr || size == 0) return false;
    if (vaddr < kVentusGlobalBase) return false;
    const uint64_t offset = vaddr - kVentusGlobalBase;
    if (offset > dev->global_size || size > dev->global_size - offset) return false;
    *offset_out = offset;
    return true;
}

static bool claim_global_page_locked(PtxDevice *dev, uint32_t page_vaddr, PtxDevice::GlobalPageUse use) {
    if (dev == nullptr) return false;

    auto it = dev->global_pages.find(page_vaddr);
    if (it == dev->global_pages.end()) {
        uint64_t offset = 0;
        if (!global_range_to_offset(dev, page_vaddr, dev->alloc_granularity, &offset)) {
            SPDLOG_LOGGER_ERROR(
                logger,
                "global page out of range: vaddr=0x{:x} size=0x{:x}",
                page_vaddr,
                static_cast<unsigned long long>(dev->alloc_granularity)
            );
            return false;
        }

        CUmemAllocationProp prop{};
        prop.type = CU_MEM_ALLOCATION_TYPE_PINNED;
        prop.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
        prop.location.id = dev->cu_dev;
        prop.requestedHandleTypes = CU_MEM_HANDLE_TYPE_NONE;

        if (!set_current_ctx(dev)) return false;

        CUmemGenericAllocationHandle handle{};
        CUresult r = cuMemCreate(&handle, dev->alloc_granularity, &prop, 0);
        if (r != CUDA_SUCCESS) {
            SPDLOG_LOGGER_ERROR(logger, "cuMemCreate failed for page vaddr=0x{:x}: {}", page_vaddr, cu_err(r));
            return false;
        }

        const CUdeviceptr reserved = dev->global_base + offset;
        r = cuMemMap(reserved, dev->alloc_granularity, 0, handle, 0);
        if (r != CUDA_SUCCESS) {
            SPDLOG_LOGGER_ERROR(logger, "cuMemMap failed for page vaddr=0x{:x}: {}", page_vaddr, cu_err(r));
            cuMemRelease(handle);
            return false;
        }

        CUmemAccessDesc access{};
        access.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
        access.location.id = dev->cu_dev;
        access.flags = CU_MEM_ACCESS_FLAGS_PROT_READWRITE;
        r = cuMemSetAccess(reserved, dev->alloc_granularity, &access, 1);
        if (r != CUDA_SUCCESS) {
            SPDLOG_LOGGER_ERROR(logger, "cuMemSetAccess failed for page vaddr=0x{:x}: {}", page_vaddr, cu_err(r));
            cuMemUnmap(reserved, dev->alloc_granularity);
            cuMemRelease(handle);
            return false;
        }

        auto insert = dev->global_pages.emplace(page_vaddr, PtxDevice::GlobalPage{handle});
        it = insert.first;
    }

    uint32_t *refs = global_page_ref_slot(&it->second, use);
    if (refs == nullptr) return false;
    if (*refs == std::numeric_limits<uint32_t>::max()) {
        SPDLOG_LOGGER_ERROR(
            logger, "global page reference overflow: vaddr=0x{:x} use={}",
            page_vaddr, global_page_use_name(use)
        );
        return false;
    }
    ++(*refs);
    return true;
}

static bool release_global_page_locked(PtxDevice *dev, uint32_t page_vaddr) {
    if (dev == nullptr) return false;
    auto it = dev->global_pages.find(page_vaddr);
    if (it == dev->global_pages.end()) return true;
    if (!set_current_ctx(dev)) return false;

    uint64_t offset = 0;
    if (!global_range_to_offset(dev, page_vaddr, dev->alloc_granularity, &offset)) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "global page release out of range: vaddr=0x{:x} size=0x{:x}",
            page_vaddr,
            static_cast<unsigned long long>(dev->alloc_granularity)
        );
        return false;
    }

    const CUdeviceptr reserved = dev->global_base + offset;
    CUresult r = cuMemUnmap(reserved, dev->alloc_granularity);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemUnmap failed for page vaddr=0x{:x}: {}", page_vaddr, cu_err(r));
        return false;
    }
    r = cuMemRelease(it->second.handle);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemRelease failed for page vaddr=0x{:x}: {}", page_vaddr, cu_err(r));
        return false;
    }
    dev->global_pages.erase(it);
    return true;
}

static bool release_global_page_use_locked(
    PtxDevice *dev, uint32_t page_vaddr, PtxDevice::GlobalPageUse use
) {
    if (dev == nullptr) return false;
    auto it = dev->global_pages.find(page_vaddr);
    if (it == dev->global_pages.end()) {
        SPDLOG_LOGGER_ERROR(
            logger, "global page release missing mapping: vaddr=0x{:x} use={}",
            page_vaddr, global_page_use_name(use)
        );
        return false;
    }

    uint32_t *refs = global_page_ref_slot(&it->second, use);
    if (refs == nullptr) return false;
    if (*refs == 0) {
        SPDLOG_LOGGER_ERROR(
            logger, "global page release without matching claim: vaddr=0x{:x} use={}",
            page_vaddr, global_page_use_name(use)
        );
        return false;
    }
    --(*refs);
    return true;
}

static bool claim_global_range_locked(
    PtxDevice *dev, uint64_t vaddr, uint64_t size, PtxDevice::GlobalPageUse use
) {
    if (dev == nullptr || size == 0) return false;
    uint64_t offset = 0;
    if (!global_range_to_offset(dev, vaddr, size, &offset)) {
        SPDLOG_LOGGER_ERROR(logger, "global map out of range: vaddr=0x{:x} size=0x{:x}", vaddr, size);
        return false;
    }
    const uint64_t page_begin = align_down_u64(vaddr, dev->alloc_granularity);
    const uint64_t page_end = align_up_u64(vaddr + size, dev->alloc_granularity);
    std::vector<uint32_t> claimed_pages;
    claimed_pages.reserve(static_cast<size_t>((page_end - page_begin) / dev->alloc_granularity));
    for (uint64_t page = page_begin; page < page_end; page += dev->alloc_granularity) {
        if (!claim_global_page_locked(dev, static_cast<uint32_t>(page), use)) {
            for (auto it = claimed_pages.rbegin(); it != claimed_pages.rend(); ++it) {
                if (!release_global_page_use_locked(dev, *it, use)) break;
            }
            return false;
        }
        claimed_pages.push_back(static_cast<uint32_t>(page));
    }
    return true;
}

static bool release_global_range_locked(
    PtxDevice *dev, uint64_t vaddr, uint64_t size, PtxDevice::GlobalPageUse use
) {
    if (dev == nullptr || size == 0) return false;
    const uint64_t page_begin = align_down_u64(vaddr, dev->alloc_granularity);
    const uint64_t page_end = align_up_u64(vaddr + size, dev->alloc_granularity);
    for (uint64_t page = page_begin; page < page_end; page += dev->alloc_granularity) {
        if (!release_global_page_use_locked(dev, static_cast<uint32_t>(page), use)) return false;
    }
    return true;
}

static bool map_vaddr_to_devptr_locked(PtxDevice *dev, uint64_t vaddr, uint64_t size, CUdeviceptr *out) {
    if (dev == nullptr || out == nullptr || size == 0) return false;
    uint64_t offset = 0;
    if (!global_range_to_offset(dev, vaddr, size, &offset)) return false;

    const uint64_t page_begin = align_down_u64(vaddr, dev->alloc_granularity);
    const uint64_t page_end = align_up_u64(vaddr + size, dev->alloc_granularity);
    for (uint64_t page = page_begin; page < page_end; page += dev->alloc_granularity) {
        auto it = dev->global_pages.find(static_cast<uint32_t>(page));
        if (it == dev->global_pages.end()) return false;
        if (!global_page_has_live_refs(it->second)) return false;
    }
    *out = dev->global_base + offset;
    return true;
}

static bool map_vaddr_to_devptr(PtxDevice *dev, uint64_t vaddr, uint64_t size, CUdeviceptr *out) {
    if (dev == nullptr) return false;
    std::lock_guard<std::mutex> lock(dev->mu);
    return map_vaddr_to_devptr_locked(dev, vaddr, size, out);
}

static bool alloc_heap_region_locked(PtxDevice *dev, uint64_t size, uint32_t *vaddr_out) {
    if (dev == nullptr || vaddr_out == nullptr || size == 0) return false;

    const uint64_t requested = align_up_u64(size, 16);
    const uint64_t base = align_up_u64(dev->next_vaddr, 16);
    const uint64_t next = base + requested;
    const uint64_t off = base - kVentusHeapBase;
    if (off > dev->heap_size || requested > dev->heap_size - off) {
        SPDLOG_LOGGER_ERROR(logger, "heap alloc out of range: size=0x{:x}", size);
        return false;
    }
    const uint64_t mapped_base = align_down_u64(base, dev->alloc_granularity);
    const uint64_t mapped_end = align_up_u64(next, dev->alloc_granularity);
    const uint64_t mapped = mapped_end - mapped_base;
    if (mapped_base > std::numeric_limits<uint32_t>::max() || mapped > std::numeric_limits<uint32_t>::max()
        || requested > std::numeric_limits<uint32_t>::max()) {
        SPDLOG_LOGGER_ERROR(logger, "heap alloc too large: requested=0x{:x} mapped=0x{:x}", requested, mapped);
        return false;
    }
    if (!claim_global_range_locked(dev, base, requested, PtxDevice::GlobalPageUse::RuntimeAlloc)) return false;

    dev->next_vaddr = static_cast<uint32_t>(next);
    dev->allocs.push_back(PtxDevice::AllocationRecord{
        static_cast<uint32_t>(base),
        static_cast<uint32_t>(requested),
        static_cast<uint32_t>(mapped_base),
        static_cast<uint32_t>(mapped),
    });
    *vaddr_out = static_cast<uint32_t>(base);
    return true;
}

static bool find_alloc_size_locked(const PtxDevice *dev, uint32_t base_vaddr, uint32_t *size_out) {
    if (dev == nullptr || size_out == nullptr) return false;
    for (const auto &alloc : dev->allocs) {
        if (alloc.base_vaddr == base_vaddr) {
            *size_out = alloc.requested_size;
            return true;
        }
    }
    return false;
}

static bool ensure_pds_bitmap(
    PtxDevice *dev, uint32_t pool_base_vaddr, uint32_t pool_num_blocks, uint32_t *bitmap_vaddr_out
) {
    if (dev == nullptr || bitmap_vaddr_out == nullptr) return false;
    if (pool_num_blocks == 0) {
        *bitmap_vaddr_out = 0;
        return true;
    }

    const uint64_t bitmap_words = (static_cast<uint64_t>(pool_num_blocks) + 31ull) / 32ull;
    const uint64_t bitmap_bytes = bitmap_words * sizeof(uint32_t);
    if (bitmap_bytes > std::numeric_limits<uint32_t>::max()) {
        SPDLOG_LOGGER_ERROR(logger, "pds bitmap too large: {} bytes", bitmap_bytes);
        return false;
    }

    std::lock_guard<std::mutex> lock(dev->mu);
    if (dev->pds_bitmap_vaddr != 0 && dev->pds_bitmap_size < bitmap_bytes) {
        if (!dev->allocs.empty() && dev->allocs.back().base_vaddr == dev->pds_bitmap_vaddr) {
            const auto old_bitmap = dev->allocs.back();
            if (!release_alloc_record_locked(dev, old_bitmap)) return false;
            dev->allocs.pop_back();
            dev->next_vaddr = old_bitmap.base_vaddr;
        }
        dev->pds_bitmap_vaddr = 0;
        dev->pds_bitmap_size = 0;
    }
    if (dev->pds_bitmap_vaddr == 0 || dev->pds_bitmap_size < bitmap_bytes) {
        uint32_t new_vaddr = 0;
        if (!alloc_heap_region_locked(dev, bitmap_bytes, &new_vaddr)) return false;
        dev->pds_bitmap_vaddr = new_vaddr;
        dev->pds_bitmap_size = static_cast<uint32_t>(align_up_u64(bitmap_bytes, 16));
    }

    CUdeviceptr bitmap_dev_ptr = 0;
    if (!map_vaddr_to_devptr_locked(dev, dev->pds_bitmap_vaddr, dev->pds_bitmap_size, &bitmap_dev_ptr)) {
        SPDLOG_LOGGER_ERROR(
            logger, "cannot map pds bitmap vaddr=0x{:x} size=0x{:x}", dev->pds_bitmap_vaddr, dev->pds_bitmap_size
        );
        return false;
    }
    if (!set_current_ctx(dev)) return false;
    CUresult r = cuMemsetD8(bitmap_dev_ptr, 0, dev->pds_bitmap_size);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemsetD8(pds_bitmap) failed: {}", cu_err(r));
        return false;
    }

    dev->pds_bitmap_pool_base = pool_base_vaddr;
    dev->pds_bitmap_pool_blocks = pool_num_blocks;
    *bitmap_vaddr_out = dev->pds_bitmap_vaddr;
    return true;
}

static bool release_alloc_record_locked(PtxDevice *dev, const PtxDevice::AllocationRecord &alloc) {
    if (dev == nullptr) return false;
    return release_global_range_locked(
        dev, alloc.mapped_base_vaddr, alloc.mapped_size, PtxDevice::GlobalPageUse::RuntimeAlloc
    );
}

static bool get_or_jit_kernel(
    PtxDevice *dev, const fs::path &elf_path_in, const std::string &kernel, CUfunction *out_fun
) {
    if (dev == nullptr || out_fun == nullptr) return false;
    if (kernel.empty()) return false;

    fs::path elf_path = elf_path_in;
    try {
        elf_path = fs::weakly_canonical(elf_path_in);
    } catch (...) {
        // keep as-is
    }

    const uint64_t mtime = file_mtime_u64(elf_path);
    const std::string key = elf_path.string() + "|" + kernel + "|sm=" + std::to_string(dev->sm);

    {
        std::lock_guard<std::mutex> lock(dev->mu);
        auto it = dev->jit_cache.find(key);
        if (it != dev->jit_cache.end() && it->second.fun && it->second.elf_mtime == mtime) {
            SPDLOG_LOGGER_DEBUG(
                logger, "jit cache hit: kernel='{}' elf='{}' ptx='{}'",
                kernel, elf_path.string(), it->second.ptx_path
            );
            *out_fun = it->second.fun;
            return true;
        }
        if (it != dev->jit_cache.end()) {
            if (it->second.mod) cuModuleUnload(it->second.mod);
            dev->jit_cache.erase(it);
        }
    }

    const fs::path cache_dir = resolve_ptx_cache_dir();
    const std::string safe_kernel = sanitize_filename_component(kernel);
    const uint64_t h = fnv1a64(key + "|mtime=" + std::to_string(mtime));
    const fs::path out_ptx = cache_dir / (safe_kernel + ".sm" + std::to_string(dev->sm) + "." + hex_u64(h) + ".ptx");

    SPDLOG_LOGGER_INFO(logger, "jit translate: kernel='{}' elf='{}' -> {}", kernel, elf_path.string(), out_ptx.string());
    std::string gen_log;
    if (!generate_ptx_via_sbt(elf_path, kernel, dev->sm, out_ptx, &gen_log, dev)) {
        SPDLOG_LOGGER_ERROR(logger, "sbt_ptx failed for kernel='{}' elf='{}'\n{}", kernel, elf_path.string(), gen_log);
        return false;
    }

    const auto read_ptx_scope = make_scoped_event(dev, "read_generated_ptx");
    std::string ptx;
    if (!read_file_to_string(out_ptx, &ptx)) {
        SPDLOG_LOGGER_ERROR(logger, "failed to read generated PTX: {}", out_ptx.string());
        return false;
    }

    CUmodule mod{};
    char err_log[8192] = {0};
    char info_log[8192] = {0};
    CUjit_option opts[] = {
        CU_JIT_ERROR_LOG_BUFFER,
        CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
        CU_JIT_INFO_LOG_BUFFER,
        CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
        CU_JIT_LOG_VERBOSE,
        CU_JIT_TARGET_FROM_CUCONTEXT,
    };
    void *vals[] = {
        err_log,
        reinterpret_cast<void *>(static_cast<uintptr_t>(sizeof(err_log))),
        info_log,
        reinterpret_cast<void *>(static_cast<uintptr_t>(sizeof(info_log))),
        reinterpret_cast<void *>(1),
        reinterpret_cast<void *>(1),
    };
    static_assert(sizeof(opts) / sizeof(opts[0]) == sizeof(vals) / sizeof(vals[0]));

    const auto load_scope = make_scoped_event(dev, "cuModuleLoadDataEx");
    CUresult r = cuModuleLoadDataEx(
        &mod, ptx.c_str(), static_cast<unsigned>(sizeof(opts) / sizeof(opts[0])), opts, vals
    );
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuModuleLoadDataEx(JIT) failed: {}\ninfo:\n{}\nerror:\n{}", cu_err(r), info_log, err_log);
        return false;
    }
    if (getenv_str("VENTUS_PTX_JIT_INFO")) {
        SPDLOG_LOGGER_INFO(logger, "ptx jit info (kernel='{}'):\n{}", kernel, info_log);
    }

    const auto get_function_scope = make_scoped_event(dev, "cuModuleGetFunction");
    CUfunction fun{};
    r = cuModuleGetFunction(&fun, mod, kernel.c_str());
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuModuleGetFunction failed: {}", cu_err(r));
        cuModuleUnload(mod);
        return false;
    }

    PtxDevice::KernelJitEntry ent;
    ent.mod = mod;
    ent.fun = fun;
    ent.elf_mtime = mtime;
    ent.ptx_path = out_ptx.string();
    {
        std::lock_guard<std::mutex> lock(dev->mu);
        auto it = dev->jit_cache.find(key);
        if (it != dev->jit_cache.end()) {
            if (it->second.mod) cuModuleUnload(it->second.mod);
            it->second = ent;
        } else {
            dev->jit_cache.emplace(key, ent);
        }
    }

    *out_fun = fun;
    return true;
}

} // namespace

// Initialize CUDA and reserve one logical Global VA window for all subsequent mappings.
extern "C" int vt_dev_open(vt_device_h *hdevice) {
    if (hdevice == nullptr) return -1;

    if (!logger) {
        logger = spdlog::stdout_color_mt("ventus");
        logger->set_level(spdlog::level::debug);
    }

    auto dev = std::make_unique<PtxDevice>();
    vtperf::clear_perf_context(&dev->perf_context);
    try {
        dev->perf_recorder = create_perf_recorder();
    } catch (const std::exception &error) {
        SPDLOG_LOGGER_ERROR(logger, "perf recorder init failed: {}", error.what());
        return -1;
    }

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

    int cc_major = 0, cc_minor = 0;
    const CUresult rmaj = cuDeviceGetAttribute(&cc_major, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, dev->cu_dev);
    const CUresult rmin = cuDeviceGetAttribute(&cc_minor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, dev->cu_dev);
    if (rmaj != CUDA_SUCCESS || rmin != CUDA_SUCCESS) {
        SPDLOG_LOGGER_WARN(logger, "cuDeviceGetAttribute(CC) failed: major={} minor={} (fallback sm=75)", cu_err(rmaj), cu_err(rmin));
        dev->sm = 75;
    } else {
        const int device_sm = cc_major * 10 + cc_minor;
        // PTX emitter currently outputs ".version 7.0". Keep target conservative for compatibility.
        const int env_sm = parse_int_env("VENTUS_PTX_SM", parse_int_env("GPU_SBT_SM", 0));
        if (env_sm > 0) dev->sm = env_sm;
        else dev->sm = std::min(device_sm, 75);
    }

    int sm_count = 0;
    const CUresult rsm = cuDeviceGetAttribute(&sm_count, CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, dev->cu_dev);
    if (rsm == CUDA_SUCCESS && sm_count > 0) {
        g_ptx_caps_max_cores = static_cast<uint64_t>(sm_count);
    } else {
        g_ptx_caps_max_cores = kPtxCapsMaxCores;
        SPDLOG_LOGGER_WARN(logger, "cuDeviceGetAttribute(SM_COUNT) failed: {} (fallback max_cores={})", cu_err(rsm), g_ptx_caps_max_cores);
    }

    r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    int vmm_supported = 0;
    r = cuDeviceGetAttribute(&vmm_supported, CU_DEVICE_ATTRIBUTE_VIRTUAL_ADDRESS_MANAGEMENT_SUPPORTED, dev->cu_dev);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuDeviceGetAttribute(VMM_SUPPORTED) failed: {}", cu_err(r));
        return -1;
    }
    if (vmm_supported == 0) {
        SPDLOG_LOGGER_ERROR(logger, "ptx_device requires CUDA VMM support but the current device does not provide it");
        return -1;
    }

    CUmemAllocationProp prop{};
    prop.type = CU_MEM_ALLOCATION_TYPE_PINNED;
    prop.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    prop.location.id = dev->cu_dev;
    prop.requestedHandleTypes = CU_MEM_HANDLE_TYPE_NONE;

    r = cuMemGetAllocationGranularity(&dev->alloc_granularity, &prop, CU_MEM_ALLOC_GRANULARITY_MINIMUM);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemGetAllocationGranularity failed: {}", cu_err(r));
        return -1;
    }
    if (dev->alloc_granularity == 0) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemGetAllocationGranularity returned 0");
        return -1;
    }

    dev->global_size = kGlobalSizeBytes;
    r = cuMemAddressReserve(&dev->global_base, dev->global_size, 0, 0, 0);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemAddressReserve(global) failed: {}", cu_err(r));
        return -1;
    }

    dev->heap_size = heap_size_bytes();

    PtxDevice *raw = dev.release();
    *hdevice = raw;
    SPDLOG_LOGGER_INFO(
        logger,
        "ptx_device opened (sm={}, global_size={} bytes, heap_window={} bytes, vmm_granularity={} bytes)",
        static_cast<int>(raw->sm),
        static_cast<unsigned long long>(raw->global_size),
        static_cast<unsigned long long>(raw->heap_size),
        static_cast<unsigned long long>(raw->alloc_granularity)
    );
    return 0;
}

// Release CUDA resources.
extern "C" int vt_dev_close(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);

    cuCtxSetCurrent(dev->cu_ctx);

    for (auto &kv : dev->jit_cache) {
        if (kv.second.mod) cuModuleUnload(kv.second.mod);
        kv.second.mod = nullptr;
        kv.second.fun = nullptr;
    }
    dev->jit_cache.clear();

    dev->allocs.clear();

    std::vector<uint32_t> page_bases;
    page_bases.reserve(dev->global_pages.size());
    for (const auto &entry : dev->global_pages) page_bases.push_back(entry.first);
    std::sort(page_bases.begin(), page_bases.end(), [](uint32_t lhs, uint32_t rhs) { return lhs > rhs; });
    for (uint32_t page_vaddr : page_bases) {
        if (!release_global_page_locked(dev, page_vaddr)) {
            SPDLOG_LOGGER_ERROR(logger, "failed to release global page during close: vaddr=0x{:x}", page_vaddr);
        }
    }

    if (dev->global_base) {
        cuMemAddressFree(dev->global_base, dev->global_size);
        dev->global_base = 0;
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
    case VT_CAPS_MAX_CORES:
        *value = g_ptx_caps_max_cores;
        return 0;
    case VT_CAPS_MAX_WARPS:
        *value = kPtxCapsMaxWarpsPerCore;
        return 0;
    case VT_CAPS_MAX_THREADS:
        *value = kPtxCapsMaxThreadsPerWarp;
        return 0;
    case VT_CAPS_MAX_WG_SLOTS:
        *value = kPtxCapsMaxWgSlotsPerCore;
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
// For this backend we return a 32-bit virtual address in the logical Global region.
// Driver-side runtime allocations are still placed in [kVentusHeapBase, kVentusHeapBase+heap_size).
extern "C" int vt_buf_alloc(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID,
    uint64_t kernelID
) {
    (void)BUF_TYPE;
    (void)taskID;
    (void)kernelID;

    if (hdevice == nullptr || vaddr == nullptr || size == 0) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto perf_scope = make_scoped_event(dev, "vt_buf_alloc");

    std::lock_guard<std::mutex> lock(dev->mu);
    uint32_t allocated_vaddr = 0;
    if (!alloc_heap_region_locked(dev, size, &allocated_vaddr)) return -1;
    *vaddr = allocated_vaddr;
    return 0;
}

extern "C" int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    (void)taskID;
    (void)kernelID;
    if (hdevice == nullptr || vaddr == nullptr || *vaddr == 0 || size == 0) return 0;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto perf_scope = make_scoped_event(dev, "vt_buf_free");
    std::lock_guard<std::mutex> lock(dev->mu);

    const uint32_t va = static_cast<uint32_t>(*vaddr);
    const uint32_t aligned = static_cast<uint32_t>(align_up_u64(size, 16));

    // Internal scratch lifecycle contract:
    // pds_bitmap is internal memory associated with a specific PDS pool.
    // It should not leak into user-visible free semantics. When safe, we pop it before
    // processing user free requests:
    // 1) freeing the owning PDS pool, or
    // 2) freeing the allocation immediately below bitmap (common LIFO teardown path).
    if (dev->pds_bitmap_vaddr != 0 && !dev->allocs.empty() && dev->allocs.back().base_vaddr == dev->pds_bitmap_vaddr) {
        const bool free_is_pool = (va == dev->pds_bitmap_pool_base);
        bool free_is_below_bitmap = false;
        if (dev->allocs.size() >= 2) {
            const auto &below = dev->allocs[dev->allocs.size() - 2];
            free_is_below_bitmap = (below.base_vaddr == va && below.requested_size == aligned);
        }

        if (free_is_pool || free_is_below_bitmap) {
            const auto internal_alloc = dev->allocs.back();
            if (!release_alloc_record_locked(dev, internal_alloc)) return -1;
            dev->allocs.pop_back();
            dev->next_vaddr = internal_alloc.base_vaddr;
            dev->pds_bitmap_vaddr = 0;
            dev->pds_bitmap_size = 0;
            dev->pds_bitmap_pool_base = 0;
            dev->pds_bitmap_pool_blocks = 0;
        } else if (va == dev->pds_bitmap_vaddr) {
            SPDLOG_LOGGER_ERROR(
                logger,
                "vt_buf_free attempted to free internal pds bitmap directly (va=0x{:x} size=0x{:x})",
                va, static_cast<uint64_t>(size)
            );
            return -1;
        }
    }

    if (!dev->allocs.empty()) {
        const auto last_alloc = dev->allocs.back();
        if (last_alloc.base_vaddr == va && last_alloc.requested_size == aligned) {
            if (!release_alloc_record_locked(dev, last_alloc)) return -1;
            dev->allocs.pop_back();
            dev->next_vaddr = va;
            *vaddr = 0;
            return 0;
        }
    }

    SPDLOG_LOGGER_WARN(logger, "vt_buf_free non-LIFO (ignored): vaddr=0x{:x} size=0x{:x}", va, static_cast<uint64_t>(size));
    *vaddr = 0;
    return 0;
}

extern "C" int vt_one_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    return vt_buf_free(hdevice, size, vaddr, taskID, kernelID);
}

// Copy from host to a Ventus backing buffer at dev_vaddr.
extern "C" int vt_copy_to_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, const void *src_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    (void)taskID;
    (void)kernelID;

    if (hdevice == nullptr || src_addr == nullptr || size == 0) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto perf_scope = make_scoped_event(dev, "vt_copy_to_dev");
    if (!set_current_ctx(dev)) return -1;

    CUdeviceptr dst{};
    if (!map_vaddr_to_devptr(dev, dev_vaddr, size, &dst)) {
        SPDLOG_LOGGER_ERROR(logger, "vt_copy_to_dev unsupported vaddr=0x{:x} size=0x{:x}", dev_vaddr, size);
        return -1;
    }

    CUresult r = cuMemcpyHtoD(dst, src_addr, size);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuMemcpyHtoD failed: {}", cu_err(r));
        return -1;
    }

    return 0;
}

// Copy from a Ventus backing buffer at dev_vaddr back to host.
extern "C" int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    (void)taskID;
    (void)kernelID;

    if (hdevice == nullptr || dst_addr == nullptr || size == 0) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto perf_scope = make_scoped_event(dev, "vt_copy_from_dev");
    if (!set_current_ctx(dev)) return -1;

    CUdeviceptr src{};
    if (!map_vaddr_to_devptr(dev, dev_vaddr, size, &src)) {
        SPDLOG_LOGGER_ERROR(logger, "vt_copy_from_dev unsupported vaddr=0x{:x} size=0x{:x}", dev_vaddr, size);
        return -1;
    }

    CUresult r = cuMemcpyDtoH(dst_addr, src, size);
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

// Upload a Ventus kernel image (RISC-V ELF) into the Global space.
//
// We keep PT_LOAD copy semantics because translated PTX may read ELF globals/rodata.
extern "C" int vt_upload_kernel_file(vt_device_h hdevice, const char *filename, int kernelID) {
    if (hdevice == nullptr || filename == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto perf_scope = make_scoped_event(dev, "vt_upload_kernel_file");

    {
        std::lock_guard<std::mutex> lock(dev->mu);
        try {
            dev->last_elf_path = fs::weakly_canonical(fs::path(filename)).string();
        } catch (...) {
            dev->last_elf_path = filename;
        }
        dev->elf_path_by_kernel_id[static_cast<uint64_t>(kernelID)] = dev->last_elf_path;
    }

    // Keep ABI-compatible ELF loading semantics: PT_LOAD segments are copied to vaddr.
    auto blocks = get_data_from_elf(filename, logger);
    if (blocks.empty()) {
        SPDLOG_LOGGER_WARN(logger, "vt_upload_kernel_file: no PT_LOAD blocks loaded from {}", filename);
        return 0;
    }

    if (!set_current_ctx(dev)) return -1;

    for (const auto &b : blocks) {
        if (b.memsz == 0) continue;
        if (b.vaddr < kVentusGlobalBase) {
            SPDLOG_LOGGER_WARN(logger, "ELF segment vaddr 0x{:x} below GLOBAL_BASE, skipping", b.vaddr);
            continue;
        }

        CUdeviceptr dst{};
        {
            std::lock_guard<std::mutex> lock(dev->mu);
            if (!claim_global_range_locked(dev, b.vaddr, b.memsz, PtxDevice::GlobalPageUse::ElfImage)) return -1;
            if (!map_vaddr_to_devptr_locked(dev, b.vaddr, b.memsz, &dst)) {
                SPDLOG_LOGGER_ERROR(logger, "ELF segment cannot resolve mapped ptr: vaddr=0x{:x} memsz=0x{:x}", b.vaddr, b.memsz);
                return -1;
            }
            if (b.vaddr >= kVentusHeapBase) {
                const uint64_t heap_limit = static_cast<uint64_t>(kVentusHeapBase) + dev->heap_size;
                if (static_cast<uint64_t>(b.vaddr) < heap_limit) {
                    const uint64_t end = static_cast<uint64_t>(b.vaddr) + b.memsz;
                    const uint64_t covered_end = std::min<uint64_t>(end, heap_limit);
                    const uint64_t next = align_up_u64(covered_end, 16);
                    const uint32_t next_vaddr = next > std::numeric_limits<uint32_t>::max()
                        ? std::numeric_limits<uint32_t>::max()
                        : static_cast<uint32_t>(next);
                    if (next_vaddr > dev->next_vaddr) dev->next_vaddr = next_vaddr;
                }
            }
        }

        if (!b.data.empty()) {
            const CUresult r = cuMemcpyHtoD(dst, b.data.data(), b.data.size());
            if (r != CUDA_SUCCESS) {
                SPDLOG_LOGGER_ERROR(logger, "cuMemcpyHtoD(elf) failed: {}", cu_err(r));
                return -1;
            }
        }
        if (b.memsz > b.data.size()) {
            const size_t zlen = b.memsz - b.data.size();
            const CUresult r = cuMemsetD8(dst + b.data.size(), 0, zlen);
            if (r != CUDA_SUCCESS) {
                SPDLOG_LOGGER_ERROR(logger, "cuMemsetD8(global) failed: {}", cu_err(r));
                return -1;
            }
        }
    }

    return 0;
}

extern "C" int vt_set_perf_context(vt_device_h hdevice, const vt_perf_context_t *context) {
    if (hdevice == nullptr || context == nullptr) return -1;
    auto *dev = static_cast<PtxDevice *>(hdevice);
    std::lock_guard<std::mutex> lock(dev->mu);
    dev->perf_context = *context;
    dev->has_perf_context = true;
    return 0;
}

extern "C" int vt_clear_perf_context(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;
    auto *dev = static_cast<PtxDevice *>(hdevice);
    std::lock_guard<std::mutex> lock(dev->mu);
    vtperf::clear_perf_context(&dev->perf_context);
    dev->has_perf_context = false;
    return 0;
}

// Launch a translated PTX kernel.
//
// PoCL passes a driver-level `vt_kernel_metadata_t` which includes:
// - kernel_size[]: number of work-groups (maps to CUDA grid dim)
// - num_thread_local[]: local size (maps to CUDA block dim)
// - metaDataBaseAddr: Ventus u32 address of the 64B "hardware metadata buffer" (CSR_KNL)
extern "C" int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *metaData, uint64_t taskID) {
    (void)taskID;

    if (hdevice == nullptr || metaData == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto start_scope = make_scoped_event(dev, "vt_start");

    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    if (metaData->kernel_name == nullptr || metaData->kernel_name[0] == '\0') {
        SPDLOG_LOGGER_ERROR(logger, "vt_start: kernel_name is null/empty");
        return -1;
    }
    const std::string kernel = metaData->kernel_name;
    if (start_scope) start_scope->event().kernel_name = kernel;

    std::string elf_path;
    {
        std::lock_guard<std::mutex> lock(dev->mu);
        auto it = dev->elf_path_by_kernel_id.find(metaData->kernel_id);
        if (it != dev->elf_path_by_kernel_id.end()) elf_path = it->second;
        else elf_path = dev->last_elf_path;
    }
    if (elf_path.empty()) {
        SPDLOG_LOGGER_ERROR(logger, "vt_start: no ELF uploaded for kernel_id={}", metaData->kernel_id);
        return -1;
    }

    CUfunction fun{};
    if (!get_or_jit_kernel(dev, fs::path(elf_path), kernel, &fun)) {
        SPDLOG_LOGGER_ERROR(logger, "vt_start: JIT failed for kernel='{}' elf='{}'", kernel, elf_path);
        return -1;
    }

    uint32_t knl_vaddr = static_cast<uint32_t>(metaData->metaDataBaseAddr);
    if (metaData->pdsBaseAddr > 0xFFFF'FFFFull) {
        SPDLOG_LOGGER_ERROR(logger, "vt_start: pdsBaseAddr out of u32 range: {}", hex_u64(metaData->pdsBaseAddr));
        return -1;
    }
    if (metaData->pdsSize > 0xFFFF'FFFFull) {
        SPDLOG_LOGGER_ERROR(logger, "vt_start: pdsSize out of u32 range: {}", hex_u64(metaData->pdsSize));
        return -1;
    }
    uint32_t pds_base_vaddr = static_cast<uint32_t>(metaData->pdsBaseAddr);
    uint32_t pds_size_per_thread = static_cast<uint32_t>(metaData->pdsSize);
    uint32_t pds_bitmap_base_vaddr = 0;
    uint32_t pds_pool_num_blocks = 0;

    unsigned grid_x = static_cast<unsigned>(metaData->kernel_size[0]);
    unsigned grid_y = static_cast<unsigned>(metaData->kernel_size[1]);
    unsigned grid_z = static_cast<unsigned>(metaData->kernel_size[2]);

    unsigned block_x = static_cast<unsigned>(metaData->num_thread_local[0]);
    unsigned block_y = static_cast<unsigned>(metaData->num_thread_local[1]);
    unsigned block_z = static_cast<unsigned>(metaData->num_thread_local[2]);

    const uint64_t threads = static_cast<uint64_t>(block_x) * block_y * block_z;
    uint64_t warps = metaData->wg_size;
    if (warps == 0) warps = (threads + 31) >> 5;

    if (pds_size_per_thread != 0) {
        uint64_t pds_bytes_per_wf = 0;
        uint64_t pds_bytes_per_wg = 0;
        if (__builtin_mul_overflow(metaData->wf_size, static_cast<uint64_t>(pds_size_per_thread), &pds_bytes_per_wf)
            || __builtin_mul_overflow(warps, pds_bytes_per_wf, &pds_bytes_per_wg)) {
            SPDLOG_LOGGER_ERROR(
                logger, "vt_start: overflow while computing PDS bytes (wf_size={}, warps={}, pds_size={})",
                metaData->wf_size, warps, static_cast<uint64_t>(pds_size_per_thread)
            );
            return -1;
        }
        if (pds_bytes_per_wg == 0) {
            SPDLOG_LOGGER_ERROR(logger, "vt_start: invalid PDS bytes per WG is 0");
            return -1;
        }

        uint32_t pds_pool_bytes = 0;
        {
            std::lock_guard<std::mutex> lock(dev->mu);
            if (!find_alloc_size_locked(dev, pds_base_vaddr, &pds_pool_bytes)) {
                SPDLOG_LOGGER_ERROR(
                    logger, "vt_start: cannot resolve PDS pool size from alloc table (pds_base={})",
                    hex_u64(pds_base_vaddr)
                );
                return -1;
            }
        }
        if (pds_pool_bytes < pds_bytes_per_wg) {
            SPDLOG_LOGGER_ERROR(
                logger, "vt_start: PDS pool too small (pool_bytes={} bytes_per_wg={})",
                static_cast<uint64_t>(pds_pool_bytes), pds_bytes_per_wg
            );
            return -1;
        }

        const uint64_t pool_blocks_u64 = static_cast<uint64_t>(pds_pool_bytes) / pds_bytes_per_wg;
        if (pool_blocks_u64 == 0 || pool_blocks_u64 > std::numeric_limits<uint32_t>::max()) {
            SPDLOG_LOGGER_ERROR(logger, "vt_start: invalid PDS pool block count {}", pool_blocks_u64);
            return -1;
        }
        const uint64_t model_pool_blocks = g_ptx_caps_max_cores * kPtxCapsMaxWgSlotsPerCore;
        if (pool_blocks_u64 > model_pool_blocks) {
            SPDLOG_LOGGER_WARN(
                logger, "vt_start: PDS pool blocks ({}) exceed PTX model capacity ({})",
                pool_blocks_u64, model_pool_blocks
            );
        }
        pds_pool_num_blocks = static_cast<uint32_t>(pool_blocks_u64);
        if (!ensure_pds_bitmap(dev, pds_base_vaddr, pds_pool_num_blocks, &pds_bitmap_base_vaddr)) {
            SPDLOG_LOGGER_ERROR(logger, "vt_start: cannot allocate PDS bitmap");
            return -1;
        }
    }

    const uint64_t wctx_bytes = warps * kPerWarpWctxBytes;
    const uint64_t stack_bytes = warps * kPerWarpStackBytes;
    const uint64_t lds_bytes = align_up_u64(metaData->ldsSize, 16);
    const uint64_t shmem_bytes_u64 = wctx_bytes + stack_bytes + lds_bytes;
    if (shmem_bytes_u64 > std::numeric_limits<unsigned>::max()) {
        SPDLOG_LOGGER_ERROR(logger, "dynamic shared too large: {} bytes", shmem_bytes_u64);
        return -1;
    }

    int max_shmem = 0;
    CUresult r_sh = cuDeviceGetAttribute(&max_shmem, CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK_OPTIN, dev->cu_dev);
    if (r_sh != CUDA_SUCCESS || max_shmem == 0) {
        r_sh = cuDeviceGetAttribute(&max_shmem, CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK, dev->cu_dev);
    }
    if (r_sh == CUDA_SUCCESS && max_shmem > 0 && shmem_bytes_u64 > static_cast<uint64_t>(max_shmem)) {
        SPDLOG_LOGGER_ERROR(logger, "dynamic shared exceeds device limit: need={} max={}", shmem_bytes_u64, max_shmem);
        return -1;
    }

    // If we need > default shared limit, try to opt-in (best-effort).
    if (shmem_bytes_u64 > 48ull * 1024) {
        cuFuncSetAttribute(fun, CU_FUNC_ATTRIBUTE_MAX_DYNAMIC_SHARED_SIZE_BYTES, static_cast<int>(shmem_bytes_u64));
    }

    CUdeviceptr global_base = dev->global_base;
    void *params[] = {
        &global_base, &knl_vaddr, &pds_base_vaddr, &pds_size_per_thread,
        &pds_bitmap_base_vaddr, &pds_pool_num_blocks
    };

    const auto launch_scope = make_scoped_event(dev, "cuLaunchKernel");
    if (launch_scope) launch_scope->event().kernel_name = kernel;
    r = cuLaunchKernel(
        fun,
        grid_x, grid_y, grid_z,
        block_x, block_y, block_z,
        static_cast<unsigned>(shmem_bytes_u64), nullptr,
        params, nullptr
    );
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuLaunchKernel failed: {} (kernel='{}' elf='{}' shmem={} grid={}x{}x{} block={}x{}x{})",
                            cu_err(r), kernel, elf_path, shmem_bytes_u64, grid_x, grid_y, grid_z, block_x, block_y, block_z);
        return -1;
    }

    return 0;
}

// Wait for kernel completion (simple cuCtxSynchronize for now).
extern "C" int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    (void)timeout;
    if (hdevice == nullptr) return -1;

    auto *dev = static_cast<PtxDevice *>(hdevice);
    const auto wait_scope = make_scoped_event(dev, "vt_ready_wait");
    CUresult r = cuCtxSetCurrent(dev->cu_ctx);
    if (r != CUDA_SUCCESS) {
        SPDLOG_LOGGER_ERROR(logger, "cuCtxSetCurrent failed: {}", cu_err(r));
        return -1;
    }

    const auto sync_scope = make_scoped_event(dev, "cuCtxSynchronize");
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
