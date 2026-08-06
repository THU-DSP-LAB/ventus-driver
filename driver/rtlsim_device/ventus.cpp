/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 *
 * 1. `/include/ventus.h`中声明的函数
 */

#include "ventus.h"
#include "loadelf.hpp"
#include "rtl_buffer_allocator.hpp"
#include "rtl_persistent_state.hpp"
#include "rtl_state_contract.hpp"
#include "rtlsim_wait_deadline.hpp"
#include "rtlsim_backend_loader.hpp"
#include "rtlsim_watchdog.hpp"
#include "utils.hpp"
#include "ventus_rtlsim.h"
#include <climits>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fmt/core.h>
#include <memory>
#include <string>
#include <system_error>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <stdlib.h>
#include <sys/types.h>
#include <vector>

// static std::map<int, uint64_t> ptroots; // pagetable root physical address
static std::shared_ptr<spdlog::logger> logger;

namespace {
RtlBufferAllocator g_rtl_buffer_allocator;
ventus::rtl_state::AllocationContract g_allocation_contract;
ventus::rtl_state::PersistentState g_persistent_state;
std::vector<ventus::rtl_state::ImmutableRegion> g_immutable_regions;
bool g_force_snapshot_rollback = false;
bool g_kernel_inflight = false;
std::string g_snapshot_filename = "logs/ventus_rtlsim.snapshot.fst";

spdlog::level::level_enum parse_log_level(const char *level) {
    if (level == nullptr || level[0] == '\0') return spdlog::level::warn;
    const auto parsed = spdlog::level::from_str(level);
    if (parsed == spdlog::level::off && std::string(level) != "off") return spdlog::level::warn;
    return parsed;
}

const char *log_level_name(spdlog::level::level_enum level) {
    switch (level) {
    case spdlog::level::trace:
        return "trace";
    case spdlog::level::debug:
        return "debug";
    case spdlog::level::info:
        return "info";
    case spdlog::level::warn:
        return "warn";
    case spdlog::level::err:
        return "err";
    case spdlog::level::critical:
        return "critical";
    case spdlog::level::off:
        return "off";
    default:
        return "warn";
    }
}

const ventus::rtlsim_backend::Api &rtl() {
    static constexpr ventus::rtlsim_backend::LibraryNames kLibraries = {
        "libVentusRTL-withcache.so",
        "libVentusRTL-nocache.so",
    };
    static const ventus::rtlsim_backend::Api api = ventus::rtlsim_backend::load(
        kLibraries, ventus::rtlsim_backend::FirmwareApiRequirement::not_required
    );
    return api;
}

bool pmem_region_api_consistent() {
    return (rtl().pmem_region_register == nullptr)
        == (rtl().pmem_region_unregister == nullptr);
}

ventus_pmem_region_kind_t pmem_region_kind(int buffer_type) {
    return buffer_type == VT_BUFFER_TYPE_PDS
        ? VENTUS_PMEM_REGION_PDS
        : VENTUS_PMEM_REGION_BUFFER;
}

bool register_pmem_region(
    ventus_rtlsim_t *device,
    const ventus::rtl_state::AllocationRecord &allocation
) {
    if (rtl().pmem_region_register == nullptr) return true;
    return rtl().pmem_region_register(
        device,
        allocation.address,
        allocation.requested_size,
        allocation.allocated_size,
        pmem_region_kind(allocation.buffer_type),
        allocation.sequence
    );
}

bool unregister_pmem_region(
    ventus_rtlsim_t *device,
    const ventus::rtl_state::AllocationRecord &allocation
) {
    if (rtl().pmem_region_unregister == nullptr) return true;
    return rtl().pmem_region_unregister(
        device, allocation.address, allocation.sequence
    );
}

bool parse_env_bool(const char *name, bool default_value, bool &value) {
    const char *raw = std::getenv(name);
    if (raw == nullptr) {
        value = default_value;
        return true;
    }
    const auto parsed = parse_bool(raw);
    if (!parsed.has_value()) {
        fmt::print(stderr, "{} must be a boolean, got '{}'\n", name, raw);
        return false;
    }
    value = *parsed;
    return true;
}

bool parse_env_u64(const char *name, uint64_t default_value, uint64_t &value) {
    const char *raw = std::getenv(name);
    if (raw == nullptr) {
        value = default_value;
        return true;
    }
    const auto parsed = parse_u64(raw);
    if (!parsed.has_value()) {
        fmt::print(stderr, "{} must be an unsigned integer, got '{}'\n", name, raw);
        return false;
    }
    value = *parsed;
    return true;
}

bool prepare_snapshot_directory(const std::string &filename) {
    const std::filesystem::path parent = std::filesystem::path(filename).parent_path();
    if (parent.empty()) return true;
    std::error_code error;
    std::filesystem::create_directories(parent, error);
    if (error) {
        fmt::print(stderr, "failed to create snapshot directory '{}': {}\n", parent.string(), error.message());
        return false;
    }
    return true;
}

bool persistent_state_supported() {
    return rtl().save_state != nullptr
        && rtl().restore_state != nullptr
        && rtl().persistent_state_version != nullptr
        && rtl().persistent_state_version() == 1;
}

bool compare_device_bytes(
    ventus_rtlsim_t *device, uint64_t address, const void *expected,
    uint64_t size
) {
    static constexpr uint64_t kChunkBytes = 1ull << 20;
    const auto *expected_bytes = static_cast<const uint8_t *>(expected);
    std::vector<uint8_t> observed(
        static_cast<size_t>(std::min(size, kChunkBytes))
    );
    uint64_t offset = 0;
    while (offset < size) {
        const uint64_t chunk = std::min(size - offset, kChunkBytes);
        if (!rtl().pmemcpy_d2h(
                device, observed.data(), address + offset, chunk
            )
            || std::memcmp(
                   observed.data(), expected_bytes + offset,
                   static_cast<size_t>(chunk)
               )
                != 0) {
            return false;
        }
        offset += chunk;
    }
    return true;
}

int publish_pending_state(ventus_rtlsim_t *device) {
    if (!g_persistent_state.pending_save()) return 0;
    std::string error;
    const bool success = g_persistent_state.publish_pending(
        rtl().get_time(device),
        g_allocation_contract.active_allocations(),
        g_immutable_regions,
        [device](const std::filesystem::path &directory) {
            return rtl().save_state(device, directory.c_str());
        },
        error
    );
    if (!success) {
        SPDLOG_LOGGER_ERROR(logger, "persistent RTL state save failed: {}", error);
        return -1;
    }
    SPDLOG_LOGGER_INFO(
        logger, "persistent RTL state saved at dispatch {}",
        g_persistent_state.completed_dispatches()
    );
    return 0;
}

int finish_restore_rebind() {
    if (!g_allocation_contract.compare_only()) return 0;
    std::string error;
    if (!g_allocation_contract.finish_rebind_with_dormant(error)) {
        SPDLOG_LOGGER_ERROR(logger, "persistent RTL rebind failed: {}", error);
        return -1;
    }
    SPDLOG_LOGGER_INFO(
        logger,
        "persistent RTL rebind completed with {} bound and {} dormant allocations",
        g_allocation_contract.expected_cursor(),
        g_allocation_contract.dormant_count()
    );
    return 0;
}
} // namespace

/// open the device and connect to it
extern int vt_dev_open(vt_device_h *hdevice) {
    if (hdevice == nullptr) return -1;
    g_rtl_buffer_allocator.reset();
    g_allocation_contract.reset();
    g_immutable_regions.clear();
    g_kernel_inflight = false;
    std::string persistent_error;
    if (!g_persistent_state.configure_from_env(persistent_error)) {
        fmt::print(stderr, "invalid persistent RTL state configuration: {}\n", persistent_error);
        return -1;
    }

    auto env_waveform = std::getenv("VENTUS_WAVEFORM");
    auto env_waveform_begin = std::getenv("VENTUS_WAVEFORM_BEGIN");
    auto env_waveform_end = std::getenv("VENTUS_WAVEFORM_END");
    bool waveform_enable = false;
    uint64_t waveform_begin = UINT64_MAX; // default: not enable
    uint64_t waveform_end = 0;
    if (parse_bool(env_waveform).value_or(false)) {
        waveform_begin = 0; // default: dump waveform all time
        waveform_end = UINT64_MAX;
    }
    waveform_begin = parse_u64(env_waveform_begin).value_or(waveform_begin);
    waveform_end = parse_u64(env_waveform_end).value_or(waveform_end);
    waveform_enable = waveform_end > waveform_begin;

    ventus_rtlsim_config_t config;
    rtl().get_default_config(&config);
    g_snapshot_filename = config.snapshot.filename != nullptr
        ? config.snapshot.filename
        : "logs/ventus_rtlsim.snapshot.fst";
    config.sim_time_max = ~0ull;
    config.pmem.auto_alloc = true;
    config.waveform.enable = waveform_enable;
    config.waveform.time_begin = waveform_begin;
    config.waveform.time_end = waveform_end;
    config.waveform.filename = "waveform.rtl.fst";
    bool snapshot_enable = false;
    bool force_snapshot_rollback = false;
    uint64_t snapshot_interval = config.snapshot.time_interval;
    uint64_t snapshot_count = static_cast<uint64_t>(config.snapshot.num_max);
    if (!parse_env_bool("VENTUS_RTL_FORK_SNAPSHOT", false, snapshot_enable)
        || !parse_env_bool("VENTUS_RTL_FORK_FORCE_ROLLBACK", false, force_snapshot_rollback)
        || !parse_env_u64("VENTUS_RTL_FORK_INTERVAL", snapshot_interval, snapshot_interval)
        || !parse_env_u64("VENTUS_RTL_FORK_MAX", snapshot_count, snapshot_count)) {
        return -1;
    }
    if (snapshot_enable && (snapshot_interval == 0 || snapshot_count == 0 || snapshot_count > INT_MAX)) {
        fmt::print(
            stderr, "invalid fork snapshot configuration: interval={}, count={}\n", snapshot_interval,
            snapshot_count
        );
        return -1;
    }
    if (force_snapshot_rollback && !snapshot_enable) {
        fmt::print(stderr, "VENTUS_RTL_FORK_FORCE_ROLLBACK requires VENTUS_RTL_FORK_SNAPSHOT\n");
        return -1;
    }
    if (const char *filename = std::getenv("VENTUS_RTL_FORK_FST")) {
        if (filename[0] == '\0') {
            fmt::print(stderr, "VENTUS_RTL_FORK_FST must not be empty\n");
            return -1;
        }
        g_snapshot_filename = filename;
    }
    if (snapshot_enable && config.waveform.enable
        && g_snapshot_filename == config.waveform.filename) {
        fmt::print(stderr, "fork snapshot and normal waveform files must differ\n");
        return -1;
    }
    if (snapshot_enable && !prepare_snapshot_directory(g_snapshot_filename)) {
        return -1;
    }
    config.snapshot.enable = snapshot_enable;
    config.snapshot.time_interval = snapshot_interval;
    config.snapshot.num_max = static_cast<int>(snapshot_count);
    config.snapshot.filename = g_snapshot_filename.c_str();
    g_force_snapshot_rollback = force_snapshot_rollback;
    config.hang_timeout = ventus::rtlsim_watchdog::hang_timeout_from_env();
    const auto log_level = parse_log_level(std::getenv("VENTUS_RTLSIM_LOG_LEVEL"));
    config.log.console.enable = true;
    config.log.console.level = log_level_name(log_level);
    config.log.file.enable = false;
    if ((g_persistent_state.capture_enabled() || g_persistent_state.restoring())
        && !persistent_state_supported()) {
        fmt::print(
            stderr,
            "persistent RTL state requires a SAVABLE=1 library with ABI version 1\n"
        );
        return -1;
    }
    if ((g_persistent_state.capture_enabled()
         && (config.waveform.enable || config.snapshot.enable))
        || (g_persistent_state.restoring() && config.snapshot.enable)) {
        fmt::print(
            stderr,
            "persistent RTL state capture cannot be combined with waveform or fork snapshot; "
            "restore cannot be combined with fork snapshot\n"
        );
        return -1;
    }
    auto device = g_persistent_state.restoring()
        ? rtl().restore_state(
              &config,
              g_persistent_state.resume_simulator_directory().c_str()
          )
        : rtl().init(&config);
    if (device == nullptr) {
        fmt::print(stderr, "Ventus RTL simulator init/restore failed\n");
        return -1;
    }
    if (!pmem_region_api_consistent()) {
        fmt::print(stderr, "RTLSIM PMEM region API is incomplete\n");
        if (rtl().finish_checked != nullptr) {
            rtl().finish_checked(device, false);
        } else {
            rtl().finish(device, false);
        }
        return -1;
    }
    if (g_persistent_state.restoring()
        && !g_allocation_contract.begin_restore(
            g_persistent_state.expected_allocations(), persistent_error
        )) {
        fmt::print(stderr, "invalid persistent allocation contract: {}\n", persistent_error);
        if (rtl().finish_checked != nullptr) {
            rtl().finish_checked(device, false);
        } else {
            rtl().finish(device, false);
        }
        return -1;
    }
    if (g_persistent_state.restoring()) {
        std::vector<RtlBufferAllocator::Allocation> expected;
        expected.reserve(g_persistent_state.expected_allocations().size());
        for (const auto &record : g_persistent_state.expected_allocations()) {
            expected.push_back({
                record.address,
                record.requested_size,
                record.allocated_size,
                record.sequence,
            });
        }
        if (!g_rtl_buffer_allocator.restore_allocations(expected)) {
            fmt::print(stderr, "persistent allocator state cannot be reconstructed\n");
            if (rtl().finish_checked != nullptr) {
                rtl().finish_checked(device, false);
            } else {
                rtl().finish(device, false);
            }
            return -1;
        }
        for (const auto &record : g_persistent_state.expected_allocations()) {
            if (!register_pmem_region(device, record)) {
                fmt::print(
                    stderr,
                    "persistent PMEM region cannot be reconstructed at 0x{:x}\n",
                    record.address
                );
                if (rtl().finish_checked != nullptr) {
                    rtl().finish_checked(device, false);
                } else {
                    rtl().finish(device, false);
                }
                return -1;
            }
        }
    }
    *hdevice = device;
    logger = spdlog::stdout_color_mt("ventus");
    logger->set_level(log_level);
    logger->set_pattern("[%l] %v [%s:%#]");
    SPDLOG_LOGGER_DEBUG(logger, "vt_dev_open : hello world from ventus.cpp (rtlsim device)");
    return 0;
}

/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    int result = 0;
    if (g_kernel_inflight || g_persistent_state.pending_save()
        || g_allocation_contract.compare_only()) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_dev_close: persistent state boundary is incomplete "
            "(kernel={}, save={}, rebind={})",
            g_kernel_inflight, g_persistent_state.pending_save(),
            g_allocation_contract.compare_only()
        );
        result = -1;
    }
    if (rtl().finish_checked != nullptr) {
        const int finish_result =
            rtl().finish_checked(device, g_force_snapshot_rollback);
        if (finish_result != 0) result = finish_result;
    } else {
        rtl().finish(device, g_force_snapshot_rollback);
    }
    if (result != 0) {
        SPDLOG_LOGGER_ERROR(logger, "vt_dev_close: RTL snapshot replay failed");
    }
    SPDLOG_LOGGER_DEBUG(logger, "vt_dev_close : goodbye from ventus.cpp (rtlsim device)");
    return result;
}
int vt_dev_caps(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value) {
    if (value == nullptr) return -1;
#define GET_PARAM(key)                                                                             \
    do {                                                                                           \
        uint32_t val;                                                                              \
        if (rtl().get_parameter(key, &val) == 0) {                                                 \
            *value = val;                                                                          \
            return 0;                                                                              \
        } else {                                                                                   \
            SPDLOG_LOGGER_ERROR(logger, "vt_dev_caps: get parameter {} failed", key);              \
            return -1;                                                                             \
        }                                                                                          \
    } while (0)
    switch (caps_id) {
    case VT_CAPS_MAX_CORES:
        GET_PARAM("num_sm");
    case VT_CAPS_MAX_WARPS:
        GET_PARAM("num_warp");
    case VT_CAPS_MAX_THREADS:
        GET_PARAM("num_thread");
    case VT_CAPS_LOCAL_MEM_SIZE:
        GET_PARAM("sharemem_size");
    case VT_CAPS_MAX_WG_SLOTS:
        GET_PARAM("num_block");
    default:
        SPDLOG_LOGGER_ERROR(
            logger, "vt_dev_caps: unknown caps_id {} (or not implemented)", caps_id
        );
        return -1;
    }
    return -1;
}

extern int vt_buf_alloc(
    vt_device_h hdevice, const uint64_t size, uint64_t *vaddr, int buffer_type, uint64_t taskID,
    uint64_t kernelID
) {
    // TODO: RTLSIM does not support Virtual Memory yet
    if (size <= 0 || hdevice == nullptr || vaddr == nullptr) return -1;
    if (g_persistent_state.pending_save()) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_buf_alloc: state probe is required before the next allocation"
        );
        return -1;
    }
    paddr_t addr_allocated = 0;
    RtlBufferAllocator::Allocation allocation;
    std::string contract_error;
    const bool restoring_claim = g_allocation_contract.compare_only();
    if (restoring_claim) {
        ventus::rtl_state::AllocationRecord restored;
        if (!g_allocation_contract.claim_restore_allocation(
                size, buffer_type, taskID, kernelID, restored,
                contract_error)
            || !g_rtl_buffer_allocator.find_allocation(
                restored.address, allocation)
            || allocation.requested_size != restored.requested_size
            || allocation.allocated_size != restored.allocated_size) {
            SPDLOG_LOGGER_ERROR(
                logger, "vt_buf_alloc: persistent allocation claim failed: {}",
                contract_error
            );
            return -1;
        }
        addr_allocated = restored.address;
    } else {
        addr_allocated = g_rtl_buffer_allocator.alloc(size);
        if (addr_allocated == 0
            || !g_rtl_buffer_allocator.find_allocation(
                addr_allocated, allocation)
            || !g_allocation_contract.record_alloc(
                addr_allocated, allocation.requested_size,
                allocation.allocated_size, buffer_type, taskID, kernelID,
                contract_error)) {
            if (addr_allocated != 0) {
                g_rtl_buffer_allocator.free(addr_allocated, size);
            }
            SPDLOG_LOGGER_ERROR(
                logger, "vt_buf_alloc: persistent allocation contract failed: {}",
                contract_error
            );
            return -1;
        }
    }
    if (addr_allocated == 0) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_buf_alloc: buddy allocator failed, size=0x{:x}", size
        );
        return -1;
    }
    if (!restoring_claim) {
        ventus::rtl_state::AllocationRecord record;
        if (!g_allocation_contract.find_allocation(addr_allocated, record)
            || !register_pmem_region(
                static_cast<ventus_rtlsim_t *>(hdevice), record)) {
            std::string rollback_error;
            const bool contract_rolled_back = g_allocation_contract.record_free(
                addr_allocated, allocation.requested_size, rollback_error
            );
            const bool allocator_rolled_back = g_rtl_buffer_allocator.free(
                addr_allocated, allocation.requested_size
            );
            SPDLOG_LOGGER_ERROR(
                logger,
                "vt_buf_alloc: PMEM region registration failed at 0x{:x}; "
                "rollback contract={}, allocator={}",
                addr_allocated, contract_rolled_back, allocator_rolled_back
            );
            return -1;
        }
    }
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_buf_alloc: vaddr_allocated=0x{:x}, size=0x{:x}, taskID={}", addr_allocated,
        size, taskID
    );
    *vaddr = addr_allocated; // This is paddr actually
    if (*vaddr == 0) return -1;
    return 0;
}

extern int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    std::string contract_error;
    ventus::rtl_state::AllocationRecord allocation;
    RtlBufferAllocator::Allocation allocator_allocation;
    if (vaddr == nullptr
        || !g_allocation_contract.find_allocation(*vaddr, allocation)
        || allocation.requested_size != size
        || g_allocation_contract.compare_only()
        || !g_rtl_buffer_allocator.find_allocation(
            *vaddr, allocator_allocation)
        || allocator_allocation.requested_size != allocation.requested_size
        || allocator_allocation.allocated_size != allocation.allocated_size) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_buf_free: invalid free, vaddr=0x{:x}, size=0x{:x}, contract={}",
            vaddr ? *vaddr : 0, size, contract_error
        );
        return -1;
    }
    auto *device = static_cast<ventus_rtlsim_t *>(hdevice);
    if (!unregister_pmem_region(device, allocation)) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_buf_free: PMEM region unregister failed at 0x{:x}",
            *vaddr
        );
        return -1;
    }
    if (!g_rtl_buffer_allocator.free(*vaddr, size)) {
        const bool region_restored = register_pmem_region(device, allocation);
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_buf_free: allocator release failed at 0x{:x}; "
            "PMEM region restored={}",
            *vaddr, region_restored
        );
        return -1;
    }
    if (!g_allocation_contract.record_free(*vaddr, size, contract_error)) {
        SPDLOG_LOGGER_CRITICAL(
            logger,
            "vt_buf_free: allocation contract release failed after validated "
            "allocator release at 0x{:x}: {}",
            *vaddr, contract_error
        );
        return -1;
    }
    SPDLOG_LOGGER_INFO(logger, "vt_buf_free: vaddr=0x{:x}, size=0x{:x}", *vaddr, size);
    return 0;
}

extern int vt_one_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    return vt_buf_free(hdevice, size, vaddr, taskID, kernelID);
}

/**
 * @brief  为设备分配内存，返回根页表的地址
 * @param  hdevice
 * @param  size
 * @return int
 */
extern int vt_root_mem_alloc(vt_device_h hdevice, int taskID) {
    // if (hdevice == nullptr) return -1;
    // auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    // auto ptroot = ventus_rtlsim_vmem_create(device);
    // if (ptroot == 0) return -1;
    // logger->debug("vt_root_mem_alloc: taskID={}, ptroot={:x}", taskID, ptroot);
    // ptroots[taskID] = ptroot;
    if (taskID == 0) {
        SPDLOG_LOGGER_ERROR(logger, "RTLSIM_device does not support VMEM yet, taskID must be 0");
    }
    return 0;
}

/**
 * 释放taskID（对应context）的根页表
 * @param hdevice
 * @param taskID
 * @return
 */
extern int vt_root_mem_free(vt_device_h hdevice, int taskID) {
    // if (hdevice == nullptr) return -1;
    // auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    // ventus_rtlsim_vmem_destroy(device, ptroots[taskID]);
    // ptroots.erase(taskID);
    return 0;
}

extern int vt_copy_to_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, const void *src_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (hdevice == nullptr || (src_addr == nullptr && size != 0)) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_to_dev: dev_addr=0x{:x}, size=0x{:x}, taskID={}, kernelID={}", dev_vaddr,
        size, taskID, kernelID
    );
    if (g_persistent_state.pending_save()) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_copy_to_dev: state probe is required before the next write"
        );
        return -1;
    }
    if (g_allocation_contract.compare_only()) {
        if (!compare_device_bytes(device, dev_vaddr, src_addr, size)) {
            SPDLOG_LOGGER_ERROR(
                logger,
                "vt_copy_to_dev: compare-only rebind mismatch at 0x{:x}, size=0x{:x}",
                dev_vaddr, size
            );
            return -1;
        }
        return 0;
    }
    if (rtl().dcache_host_invalidate != nullptr) {
        rtl().dcache_host_invalidate(device);
    }
    return rtl().pmemcpy_h2d(device, dev_vaddr, src_addr, size) ? 0 : -1;
}

extern int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (hdevice == nullptr || (dst_addr == nullptr && size != 0)) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    if (finish_restore_rebind() != 0 || publish_pending_state(device) != 0) {
        return -1;
    }
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_from_dev: dev_addr=0x{:x}, size=0x{:x}, taskID={}, kernelID={}", dev_vaddr,
        size, taskID, kernelID
    );
    return rtl().pmemcpy_d2h(device, dst_addr, dev_vaddr, size) ? 0 : -1;
}

extern int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *mtd_driver, uint64_t taskID) {
    if (hdevice == nullptr || mtd_driver == nullptr) return -1;
    if (g_allocation_contract.compare_only()
        && finish_restore_rebind() != 0) {
        return -1;
    }
    if (g_kernel_inflight || g_persistent_state.pending_save()) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_start: persistent state is not ready (kernel={}, save={})",
            g_kernel_inflight, g_persistent_state.pending_save()
        );
        return -1;
    }
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    ventus_kernel_metadata_t mtd_sim{
        .name = mtd_driver->kernel_name,
        .data = nullptr,
        .startaddr = 0x80000000,
        .kernel_id = mtd_driver->kernel_id,
        .kernel_size =
            {mtd_driver->kernel_size[0], mtd_driver->kernel_size[1], mtd_driver->kernel_size[2]},
        .wf_size = mtd_driver->wf_size,
        .wg_size = mtd_driver->wg_size,
        .metaDataBaseAddr = mtd_driver->metaDataBaseAddr,
        .ldsSize = mtd_driver->ldsSize,
        .pdsSize = mtd_driver->pdsSize,
        .sgprUsage = mtd_driver->sgprUsage,
        .vgprUsage = mtd_driver->vgprUsage,
        .pdsBaseAddr = mtd_driver->pdsBaseAddr,
        .num_thread_global =
            {mtd_driver->num_thread_global[0], mtd_driver->num_thread_global[1],
             mtd_driver->num_thread_global[2]},
        .num_thread_local =
            {mtd_driver->num_thread_local[0], mtd_driver->num_thread_local[1],
             mtd_driver->num_thread_local[2]},
        .threadIdxOffset =
            {mtd_driver->threadIdxOffset[0], mtd_driver->threadIdxOffset[1],
             mtd_driver->threadIdxOffset[2]},
        .num_buffer = 0,
    };
    SPDLOG_LOGGER_DEBUG(
        logger,
        "kernel metadata: kernel_id={}, kernel_size=[{}, {}, {}], wf_size={}, "
        "wg_size=[{}, {}, {}]={}wf, metaDataBaseAddr=0x{:x}, ldsSize=0x{:x}, pdsSize=0x{:x}, "
        "sgprUsage={}, vgprUsage={}, pdsBaseAddr=0x{:x}",
        mtd_driver->kernel_id, mtd_driver->kernel_size[0], mtd_driver->kernel_size[1],
        mtd_driver->kernel_size[2], mtd_driver->wf_size, mtd_driver->num_thread_local[0],
        mtd_driver->num_thread_local[1], mtd_driver->num_thread_local[2], mtd_driver->wg_size,
        mtd_driver->metaDataBaseAddr, mtd_driver->ldsSize, mtd_driver->pdsSize,
        mtd_driver->sgprUsage, mtd_driver->vgprUsage, mtd_driver->pdsBaseAddr
    );
    rtl().add_kernel(device, &mtd_sim, nullptr);
    g_kernel_inflight = true;
    return 0;
}

extern int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    const uint64_t start_time = rtl().get_time(device);
    const uint64_t deadline =
        ventus::rtlsim_wait::deadline(start_time, timeout);
    while (!rtl().is_idle(device) && rtl().get_time(device) < deadline) {
        const ventus_rtlsim_step_result_t *result = rtl().step(device);
        if (ventus::rtlsim_watchdog::check_step_result(rtl(), device, result, "kernel execution", logger) != 0) return -1;
    }
    if (!rtl().is_idle(device)) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "rtlsim wait timeout, time={}, start={}, deadline={}, timeout_ms={}",
            rtl().get_time(device), start_time, deadline, timeout
        );
        return -1;
    }
    for (int i = 0; i < ventus::rtlsim_watchdog::FLUSH_TAIL_STEPS; i++) {
        // TODO: RTL does not provide a way to check if L2 cache flush is done
        const ventus_rtlsim_step_result_t *result = rtl().step(device);
        if (ventus::rtlsim_watchdog::check_step_result(rtl(), device, result, "cache flush tail", logger) != 0) return -1;
    }
    if (g_kernel_inflight) {
        g_kernel_inflight = false;
        g_persistent_state.note_kernel_complete();
        if (publish_pending_state(device) != 0) return -1;
    }
    return 0;
}

extern int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    static_cast<void>(finished_kernel_list);
    if (hdevice == nullptr || g_kernel_inflight
        || g_persistent_state.pending_save()) {
        return -1;
    }
    return finish_restore_rebind();
}

extern int vt_upload_kernel_file(vt_device_h hdevice, const char *filename, int taskID) {
    if (hdevice == nullptr) return -1;
    if (g_persistent_state.pending_save()) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_upload_kernel_file: state probe is required before code upload"
        );
        return -1;
    }
    auto device = (ventus_rtlsim_t *)hdevice;
    // uint64_t ptroot = ptroots[taskID];

    // parse ELF file, find .text and other data sections
    const auto blocks = get_data_from_elf(filename, logger);
    if (blocks.empty()) {
        return -1; // at least .text section is needed
    }

    // alloc and load/zero-fill each block
    for (auto block = blocks.begin(); block != blocks.end(); block++) {
        uint64_t vaddr = block->vaddr;
        uint64_t size = block->memsz;
        SPDLOG_LOGGER_DEBUG(
            logger, "vt_upload_kernel_file {}: vaddr=0x{:x}, size=0x{:x}", filename, vaddr, size
        );
        if (g_allocation_contract.compare_only()) {
            if (!compare_device_bytes(
                    device, vaddr, block->data.data(), block->data.size()
                )) {
                SPDLOG_LOGGER_ERROR(
                    logger,
                    "vt_upload_kernel_file: compare-only mismatch at 0x{:x}",
                    vaddr
                );
                return -1;
            }
        } else if (!rtl().pmemcpy_h2d(
                       device, vaddr, block->data.data(), block->data.size()
                   )) {
            return -1;
        }
        std::vector<uint8_t> zeros(size - block->data.size(), 0);
        if (g_allocation_contract.compare_only()) {
            if (!compare_device_bytes(
                    device, vaddr + block->data.size(),
                    zeros.data(), zeros.size()
                )) {
                return -1;
            }
        } else if (!rtl().pmemcpy_h2d(
                       device, vaddr + block->data.size(),
                       zeros.data(), zeros.size()
                   )) {
            return -1;
        }
    }
    rtl().icache_invalidate(device);
    return 0;
}
int vt_upload_kernel_bytes(vt_device_h device, const void *content, uint64_t size, int taskID) {
    return 0;
}
int vt_dump_perf(vt_device_h device, FILE *stream) { return 0; }
