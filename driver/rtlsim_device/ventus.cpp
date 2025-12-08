/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 *
 * 1. `/include/ventus.h`中声明的函数
 */

#include "ventus.h"
#include "buddy.hpp"
#include "loadelf.hpp"
#include "utils.hpp"
#include "ventus_rtlsim.h"
#include <cstdint>
#include <cstdlib>
#include <memory>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <stdlib.h>
#include <sys/types.h>

// static std::map<int, uint64_t> ptroots; // pagetable root physical address
static std::shared_ptr<spdlog::logger> logger;
BuddyAllocator<4096> buddy_allocator((0xFFFFFFFF - 0x90000000 + 1) / 4096, 16);
constexpr paddr_t BUDDY_BASE = 0x90000000 - 4096;

static constexpr unsigned log2Ceil(unsigned n) {
    if (n <= 1) return 0;
    return 32 - __builtin_clz(n - 1);
}

/// open the device and connect to it
extern int vt_dev_open(vt_device_h *hdevice) {
    if (hdevice == nullptr) return -1;

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
    ventus_rtlsim_get_default_config(&config);
    config.sim_time_max = ~0ull;
    config.pmem.auto_alloc = true;
    config.waveform.enable = waveform_enable;
    config.waveform.time_begin = waveform_begin;
    config.waveform.time_end = waveform_end;
    config.waveform.filename = "waveform.rtl.fst";
    config.snapshot.enable = false;
    config.log.console.enable = true;
    config.log.console.level = "trace";
    config.log.file.enable = false;
    auto device = ventus_rtlsim_init(&config);
    *hdevice = device;
    logger = spdlog::stdout_color_mt("ventus");
    logger->set_level(spdlog::level::trace);
    logger->set_pattern("[%l] %v [%s:%#]");
    SPDLOG_LOGGER_DEBUG(logger, "vt_dev_open : hello world from ventus.cpp (rtlsim device)");
    return 0;
}

/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    ventus_rtlsim_finish(device, false);
    SPDLOG_LOGGER_DEBUG(logger, "vt_dev_close : goodbye from ventus.cpp (rtlsim device)");
    return 0;
}
int vt_dev_caps(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value) {
    if (value == nullptr) return -1;
#define GET_PARAM(key)                                                                             \
    do {                                                                                           \
        uint32_t val;                                                                              \
        if (ventus_rtlsim_get_parameter(key, &val) == 0) {                                         \
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
    if (size <= 0 || hdevice == nullptr) return -1;
    // auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    size_t pgcnt = (size + 4095) / 4096;
    paddr_t addr_allocated = buddy_allocator.allocate(log2Ceil(pgcnt)) + BUDDY_BASE;
    if (addr_allocated == BUDDY_BASE) {
        SPDLOG_LOGGER_ERROR(logger, "vt_buf_alloc: buddy allocator failed, size=0x{:x}", size);
        return -1;
    }
    SPDLOG_LOGGER_DEBUG(
        logger,
        "vt_buf_alloc: vaddr_recommand=0x{:x}, vaddr_allocated=0x{:x}, size=0x{:x}, taskID={}",
        *vaddr, addr_allocated, size, taskID
    );
    *vaddr = addr_allocated; // This is paddr actually
    if (*vaddr == 0) return -1;
    return 0;
}

extern int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    // auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    assert(*vaddr % 4096 == 0);
    size_t pgcnt = (size + 4095) / 4096;
    // Not really freed in hardware, just in buddy allocator
    buddy_allocator.free(*vaddr - BUDDY_BASE, log2Ceil(pgcnt));
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
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_to_dev: dev_addr=0x{:x}, size=0x{:x}, taskID={}, kernelID={}", dev_vaddr,
        size, taskID, kernelID
    );
    ventus_rtlsim_pmemcpy_h2d(device, dev_vaddr, src_addr, size);
    return 0;
}

extern int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_from_dev: dev_addr=0x{:x}, size=0x{:x}, taskID={}, kernelID={}", dev_vaddr,
        size, taskID, kernelID
    );
    ventus_rtlsim_pmemcpy_d2h(device, dst_addr, dev_vaddr, size);
    return 0;
}

extern int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *mtd_driver, uint64_t taskID) {
    if (hdevice == nullptr || mtd_driver == nullptr) return -1;
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
    ventus_rtlsim_add_kernel(device, &mtd_sim, nullptr);
    return 0;
}

extern int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_rtlsim_t *>(hdevice);
    uint64_t timeout_ns = timeout * 1000000;
    while (!ventus_rtlsim_is_idle(device) && ventus_rtlsim_get_time(device) < timeout_ns) {
        ventus_rtlsim_step(device);
    }
    for (int i = 0; i < 5000; i++) {
        // TODO: RTL does not provide a way to check if L2 cache flush is done
        ventus_rtlsim_step(device);
    }
    return 0;
}

extern int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    // TODO: what is this function for? what is finished_kernel_list?
    return -1;
}

extern int vt_upload_kernel_file(vt_device_h hdevice, const char *filename, int taskID) {
    if (hdevice == nullptr) return -1;
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
        ventus_rtlsim_pmemcpy_h2d(device, vaddr, block->data.data(), block->data.size());
        std::vector<uint8_t> zeros(size - block->data.size(), 0);
        ventus_rtlsim_pmemcpy_h2d(device, vaddr + block->data.size(), zeros.data(), zeros.size());
    }
    ventus_rtlsim_icache_invalidate(device);
    return 0;
}
int vt_upload_kernel_bytes(vt_device_h device, const void *content, uint64_t size, int taskID) {
    return 0;
}
int vt_dump_perf(vt_device_h device, FILE *stream) { return 0; }
