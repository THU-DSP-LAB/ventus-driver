/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 *
 * 1. `/include/ventus.h`中声明的函数
 */
#define ENABLE_GVM

#include "ventus.h"
#include "loadelf.hpp"
#include "rtl_buffer_allocator.hpp"
#include "rtlsim_backend_loader.hpp"
#include "rtlsim_watchdog.hpp"
#include "ventus_rtlsim.h"
#include <cstdint>
#include <cstdlib>
#include <memory>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <stdlib.h>
#include <sys/types.h>
#include <utils.hpp>

// static std::map<int, uint64_t> ptroots; // pagetable root physical address
static std::shared_ptr<spdlog::logger> logger;

namespace {
RtlBufferAllocator g_rtl_buffer_allocator;

const ventus::rtlsim_backend::Api &gvm() {
    static constexpr ventus::rtlsim_backend::LibraryNames kLibraries = {
        "libVentusGVM-withcache.so",
        "libVentusGVM-nocache.so",
    };
    static const ventus::rtlsim_backend::Api api = ventus::rtlsim_backend::load(
        kLibraries, ventus::rtlsim_backend::FirmwareApiRequirement::required
    );
    return api;
}

uint64_t get_rtlsim_param_or_zero(const char *key) {
    uint32_t value = 0;
    if (gvm().get_parameter(key, &value) != 0) {
        SPDLOG_LOGGER_ERROR(logger, "failed to query RTL parameter {}", key);
        return 0;
    }
    if (value == 0) {
        SPDLOG_LOGGER_ERROR(logger, "RTL parameter {} unexpectedly equals zero", key);
        return 0;
    }
    return value;
}

uint64_t get_total_resident_pds_slots() {
    const uint64_t num_sm = get_rtlsim_param_or_zero("num_sm");
    const uint64_t num_wg_slot_per_sm = get_rtlsim_param_or_zero("num_block");
    if (num_sm == 0 || num_wg_slot_per_sm == 0) {
        return 0;
    }
    return num_sm * num_wg_slot_per_sm;
}
} // namespace

/// open the device and connect to it
extern int vt_dev_open(vt_device_h *hdevice) {
    if (hdevice == nullptr) return -1;
    g_rtl_buffer_allocator.reset();
    if (gvm().fw_vt_dev_open() != 0) return -1;

    auto env_waveform = std::getenv("VENTUS_WAVEFORM");
    auto env_waveform_begin = std::getenv("VENTUS_WAVEFORM_BEGIN");
    auto env_waveform_end = std::getenv("VENTUS_WAVEFORM_END");
    auto env_waveform_filename = std::getenv("GVM_WAVEFORM_FILENAME");
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
    gvm().get_default_config(&config);
    config.sim_time_max = ~0ull;
    config.pmem.auto_alloc = true;
    config.waveform.enable = waveform_enable;
    config.waveform.time_begin = waveform_begin;
    config.waveform.time_end = waveform_end;
    config.waveform.filename = env_waveform_filename ? env_waveform_filename : "waveform.gvm.fst";
    config.snapshot.enable = false;
    config.hang_timeout = ventus::rtlsim_watchdog::hang_timeout_from_env();
    config.log.console.enable = true;
    config.log.console.level = "trace";
    config.log.file.enable = false;
    auto device = gvm().init(&config);
    *hdevice = device;
    logger = spdlog::stdout_color_mt("ventus");
    logger->set_level(spdlog::level::trace);
    logger->debug("vt_dev_open : hello world from ventus.cpp (gvm device)");
    return 0;
}

/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;
    gvm().fw_vt_dev_close();
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    gvm().finish(device, false);
    logger->debug("vt_dev_close : goodbye from ventus.cpp (gvm device)");
    return 0;
}
int vt_dev_caps(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value) {
    if (value == nullptr) return -1;
#define GET_PARAM(key)                                                                             \
    do {                                                                                           \
        uint32_t val;                                                                              \
        if (gvm().get_parameter(key, &val) == 0) {                                                 \
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
    vt_device_h hdevice, const uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID,
    uint64_t kernelID
) {
    // TODO: RTLSIM does not support Virtual Memory yet
    if (size <= 0 || hdevice == nullptr || vaddr == nullptr) return -1;

    const uint64_t dut_vaddr = g_rtl_buffer_allocator.alloc(size);
    if (dut_vaddr == 0) {
        SPDLOG_LOGGER_ERROR(logger, "vt_buf_alloc: allocator failed, size=0x{:x}", size);
        return -1;
    }
    if (gvm().fw_vt_buf_alloc_fixed(size, dut_vaddr, BUF_TYPE, taskID, kernelID) != 0) {
        const bool rollback_ok = g_rtl_buffer_allocator.free(dut_vaddr, size);
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_buf_alloc: REF fixed allocation failed, vaddr=0x{:x}, size=0x{:x}, rollback_ok={}",
            dut_vaddr, size, rollback_ok
        );
        return -1;
    }

    *vaddr = dut_vaddr;
    return 0;
}

extern int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (hdevice == nullptr || vaddr == nullptr) return -1;
    if (gvm().fw_vt_buf_free(size, vaddr, taskID, kernelID) != 0) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_buf_free: REF free-all failed, size=0x{:x}, taskID={}", size, taskID
        );
        return -1;
    }
    g_rtl_buffer_allocator.reset();
    return 0;
}

extern int vt_one_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (hdevice == nullptr || vaddr == nullptr) return -1;
    if (gvm().fw_vt_one_buf_free(size, vaddr, taskID, kernelID) != 0) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_one_buf_free: REF exact free failed, vaddr=0x{:x}, size=0x{:x}", *vaddr,
            size
        );
        return -1;
    }
    if (!g_rtl_buffer_allocator.free(*vaddr, size)) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_one_buf_free: local allocator rollback failed, vaddr=0x{:x}, size=0x{:x}",
            *vaddr, size
        );
        return -1;
    }
    return 0;
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
        logger->error("RTLSIM_device does not support VMEM yet, taskID must be 0");
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
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    logger->debug(
        "vt_copy_to_dev: dev_addr={:x}, size={}, taskID={}, kernelID={}", dev_vaddr, size, taskID,
        kernelID
    );
    if (gvm().dcache_host_invalidate != nullptr) {
        gvm().dcache_host_invalidate(device);
    }
    gvm().fw_vt_copy_to_dev(dev_vaddr, src_addr, size, taskID, kernelID);
    gvm().pmemcpy_h2d(device, dev_vaddr, src_addr, size);
    return 0;
}

extern int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_from_dev: dev_addr={:x}, size={}, taskID={}, kernelID={}", dev_vaddr, size,
        taskID, kernelID
    );
    gvm().pmemcpy_d2h(device, dst_addr, dev_vaddr, size);
    return 0;
}

extern int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *mtd_driver, uint64_t taskID) {
    if (hdevice == nullptr || mtd_driver == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    const uint64_t pds_resident_wg_count = get_total_resident_pds_slots();
    if (pds_resident_wg_count == 0) {
        return -1;
    }
    vt_kernel_metadata_t mtd_ref = *mtd_driver;
    mtd_ref.pdsResidentWgCount = pds_resident_wg_count;
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
        .buffer_base = nullptr,
        .buffer_size = nullptr,
        .buffer_allocsize = nullptr,
    };
    SPDLOG_LOGGER_DEBUG(
        logger,
        "kernel metadata: kernel_id={}, kernel_size=[{}, {}, {}], wf_size={}, "
        "wg_size=[{}, {}, {}]={}wf, metaDataBaseAddr=0x{:x}, ldsSize=0x{:x}, pdsSize=0x{:x}, "
        "sgprUsage={}, vgprUsage={}, pdsBaseAddr=0x{:x}, pdsResidentWgCount={}",
        mtd_driver->kernel_id, mtd_driver->kernel_size[0], mtd_driver->kernel_size[1],
        mtd_driver->kernel_size[2], mtd_driver->wf_size, mtd_driver->num_thread_local[0],
        mtd_driver->num_thread_local[1], mtd_driver->num_thread_local[2], mtd_driver->wg_size,
        mtd_driver->metaDataBaseAddr, mtd_driver->ldsSize, mtd_driver->pdsSize,
        mtd_driver->sgprUsage, mtd_driver->vgprUsage, mtd_driver->pdsBaseAddr, pds_resident_wg_count
    );
    gvm().fw_vt_start(&mtd_ref, taskID); // 先初始化 spike，再运行 sim-verilator
    gvm().add_kernel(device, &mtd_sim, nullptr);
    return 0;
}

extern int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    uint64_t timeout_ns = timeout * 1000000;
    while (!gvm().is_idle(device) && gvm().get_time(device) < timeout_ns) {
        const ventus_rtlsim_step_result_t *result = gvm().step(device);
        if (ventus::rtlsim_watchdog::check_step_result(gvm(), device, result, "kernel execution", logger) != 0) return -1;
    }
    if (!gvm().is_idle(device)) {
        SPDLOG_LOGGER_ERROR(logger, "gvm wait timeout, time={}, timeout={}", gvm().get_time(device), timeout_ns);
        return -1;
    }
    for (int i = 0; i < ventus::rtlsim_watchdog::FLUSH_TAIL_STEPS; i++) {
        // TODO: RTL does not provide a way to check if L2 cache flush is done
        const ventus_rtlsim_step_result_t *result = gvm().step(device);
        if (ventus::rtlsim_watchdog::check_step_result(gvm(), device, result, "cache flush tail", logger) != 0) return -1;
    }
    // TODO: temp
    // it seems that vt_dev_close() is not called by POCL
    // we call it here to make waveform output sucessful
    // vt_dev_close(hdevice);
    return 0;
}

extern int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    // TODO: what is this function for? what is finished_kernel_list?
    return -1;
}

extern int vt_upload_kernel_file(vt_device_h hdevice, const char *filename, int taskID) {
    if (hdevice == nullptr) return -1;
    gvm().fw_vt_upload_kernel_file(filename, taskID);
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
        logger->debug("vt_upload_kernel_file: addr={:x}, size={}", vaddr, size);
        gvm().pmemcpy_h2d(device, vaddr, block->data.data(), block->data.size());
        std::vector<uint8_t> zeros(size - block->data.size(), 0);
        gvm().pmemcpy_h2d(device, vaddr + block->data.size(), zeros.data(), zeros.size());
    }
    gvm().icache_invalidate(device);
    return 0;
}
int vt_upload_kernel_bytes(vt_device_h device, const void *content, uint64_t size, int taskID) {
    return 0;
}
int vt_dump_perf(vt_device_h device, FILE *stream) { return 0; }
