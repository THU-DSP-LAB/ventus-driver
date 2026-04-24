/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 *
 * 1. `/include/ventus.h`中声明的函数
 */

#include "ventus.h"
#include "loadelf.hpp"
#include "utils.hpp"
#include "ventus_cyclesim.h"
#include <cstdint>
#include <cstdlib>
#include <map>
#include <memory>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <stdlib.h>
#include <string>
#include <vector>

static std::map<int, uint64_t> g_ptroots; // pagetable root physical address
static std::shared_ptr<spdlog::logger> logger;
static uint64_t g_alloc_vaddr = 0x90000000;
static std::vector<std::pair<vaddr_t, size_t>> g_elf_alloc;
static uint64_t g_kernel_launch_id = 0;
static uint64_t g_software_wg_id_base = 0;

static uint64_t get_cyclesim_param_or_zero(ventus_cyclesim_param_id_t param) {
    uint64_t value = 0;
    if (ventus_cyclesim_get_param_u64(param, &value) != 0) {
        SPDLOG_LOGGER_ERROR(logger, "failed to query cyclesim param {}", static_cast<int>(param));
        return 0;
    }
    if (value == 0) {
        SPDLOG_LOGGER_ERROR(logger, "cyclesim param {} unexpectedly equals zero", static_cast<int>(param));
        return 0;
    }
    return value;
}

static uint64_t get_total_resident_pds_slots() {
    const uint64_t num_sm = get_cyclesim_param_or_zero(VENTUS_CYCLESIM_PARAM_NUM_SM);
    const uint64_t num_wg_slot_per_sm = get_cyclesim_param_or_zero(VENTUS_CYCLESIM_PARAM_MAX_CTA_PER_SM);
    if (num_sm == 0 || num_wg_slot_per_sm == 0) {
        return 0;
    }
    return num_sm * num_wg_slot_per_sm;
}

static bool cyclesim_driver_gvm_enabled() {
    const char* env = std::getenv("ENABLE_CYCLESIM_GVM");
    if (env == nullptr) return false;
    return std::string(env) == "1" || std::string(env) == "true" || std::string(env) == "TRUE"
        || std::string(env) == "on" || std::string(env) == "ON";
}

/// open the device and connect to it
extern int vt_dev_open(vt_device_h *hdevice) {
    if (hdevice == nullptr) return -1;
    if (cyclesim_driver_gvm_enabled()) {
        g_kernel_launch_id = 0;
        g_software_wg_id_base = 0;
        ventus_cyclesim_gvm_reset_kernel_wg_id_base();
        fw_vt_dev_open();
    }
    ventus_cyclesim_config_t config;
    ventus_cyclesim_get_default_config(&config);
    config.sim_time_max = ~0ull;
    config.ramulator.enable = parse_bool(std::getenv("VENTUS_TIMING_DDR")).value_or(true);
    config.waveform.enable = parse_bool(std::getenv("VENTUS_WAVEFORM")).value_or(false);
    config.waveform.enable |= parse_u64(std::getenv("VENTUS_WAVEFORM_BEGIN")).has_value();
    config.waveform.enable |= parse_u64(std::getenv("VENTUS_WAVEFORM_END")).has_value();
    config.waveform.filename = "waveform.cycle";
    auto device = ventus_cyclesim_init(&config);
    *hdevice = device;
    logger = spdlog::stdout_color_mt("ventus");
    logger->set_level(spdlog::level::debug);
    SPDLOG_LOGGER_DEBUG(logger, "vt_dev_open : hello world from ventus.cpp (cyclesim device)");

    // TODO: temp
    // POCL should call vt_root_mem_alloc() to create virtual memory space before any buf_alloc
    // but currently it seems not. So we create a default root page table here.
    uint64_t ptroot = ventus_cyclesim_vmem_create(device);
    if (ptroot == 0) return -1;
    g_ptroots[0] = ptroot;
    return 0;
}

/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    ventus_cyclesim_finish(device, false);
    if (cyclesim_driver_gvm_enabled()) {
        fw_vt_dev_close();
    }
    SPDLOG_LOGGER_DEBUG(logger, "vt_dev_close: goodbye from ventus.cpp (cyclesim device)");
    return 0;
}
int vt_dev_caps(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value) {
    (void)hdevice;
    if (value == nullptr) return -1;
    ventus_cyclesim_param_id_t param = VENTUS_CYCLESIM_PARAM_NUM_SM;
    switch (caps_id) {
    case VT_CAPS_MAX_CORES:
        param = VENTUS_CYCLESIM_PARAM_NUM_SM;
        break;
    case VT_CAPS_MAX_WARPS:
        param = VENTUS_CYCLESIM_PARAM_NUM_WARP_PER_SM;
        break;
    case VT_CAPS_MAX_THREADS:
        param = VENTUS_CYCLESIM_PARAM_NUM_THREAD_PER_WARP;
        break;
    case VT_CAPS_LOCAL_MEM_SIZE:
        param = VENTUS_CYCLESIM_PARAM_LOCAL_MEM_SIZE;
        break;
    case VT_CAPS_MAX_WG_SLOTS:
        param = VENTUS_CYCLESIM_PARAM_MAX_CTA_PER_SM;
        break;
    default:
        SPDLOG_LOGGER_ERROR(logger, "vt_dev_caps: unknown caps_id {}", caps_id);
        return -1;
    }
    if (ventus_cyclesim_get_param_u64(param, value) != 0) {
        SPDLOG_LOGGER_ERROR(logger, "vt_dev_caps: query cyclesim param {} failed", static_cast<int>(param));
        return -1;
    }
    return 0;
}

extern int vt_buf_alloc(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID,
    uint64_t kernelID
) {
    if (size <= 0 || hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    uint64_t alloc_hint = g_alloc_vaddr;
    if (cyclesim_driver_gvm_enabled()) {
        uint64_t ref_vaddr = 0;
        if (fw_vt_buf_alloc(size, &ref_vaddr, BUF_TYPE, taskID, kernelID) != 0 || ref_vaddr == 0) {
            SPDLOG_LOGGER_ERROR(
                logger,
                "vt_buf_alloc: REF allocation failed, size=0x{:x}, taskID={}, kernelID={}",
                size, taskID, kernelID
            );
            return -1;
        }
        alloc_hint = ref_vaddr;
    }
    uint64_t vaddr_allocated =
        ventus_cyclesim_vmem_alloc(device, g_ptroots[taskID], alloc_hint, size);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_buf_alloc: vaddr_recommand={:x}, vaddr_allocated={:x}, size=0x{:x}, taskID={}",
        alloc_hint, vaddr_allocated, size, taskID
    );
    if (cyclesim_driver_gvm_enabled() && vaddr_allocated != alloc_hint) {
        SPDLOG_LOGGER_ERROR(
            logger,
            "vt_buf_alloc: DUT/REF address mismatch, ref_vaddr=0x{:x}, dut_vaddr=0x{:x}, size=0x{:x}, taskID={}, kernelID={}",
            alloc_hint, vaddr_allocated, size, taskID, kernelID
        );
        uint64_t rollback_vaddr = alloc_hint;
        fw_vt_buf_free(size, &rollback_vaddr, taskID, kernelID);
        if (vaddr_allocated != 0) {
            ventus_cyclesim_vmem_free(device, g_ptroots[taskID], vaddr_allocated, size);
        }
        return -1;
    }
    g_alloc_vaddr += (size > 0x1000) ? size : 0x1000;
    *vaddr = vaddr_allocated;
    if (*vaddr == 0) return -1;
    return 0;
}

extern int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    ventus_cyclesim_vmem_free(device, g_ptroots[taskID], *vaddr, size);
    if (cyclesim_driver_gvm_enabled()) {
        fw_vt_buf_free(size, vaddr, taskID, kernelID);
    }
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_buf_free: vaddr=0x{:x}, size=0x{:x}, taskID={}", *vaddr, size, taskID
    );
    return 0;
}

extern int vt_one_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    ventus_cyclesim_vmem_free(device, g_ptroots[taskID], *vaddr, size);
    if (cyclesim_driver_gvm_enabled()) {
        fw_vt_one_buf_free(size, vaddr, taskID, kernelID);
    }
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_buf_free: vaddr=0x{:x}, size=0x{:x}, taskID={}", *vaddr, size, taskID
    );
    return 0;
}

/**
 * @brief  为设备分配内存，返回根页表的地址
 * @param  hdevice
 * @param  size
 * @return int
 */
extern int vt_root_mem_alloc(vt_device_h hdevice, int taskID) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    auto ptroot = ventus_cyclesim_vmem_create(device);
    if (ptroot == 0) return -1;
    SPDLOG_LOGGER_DEBUG(logger, "vt_root_mem_alloc: taskID={}, ptroot={:x}", taskID, ptroot);
    g_ptroots[taskID] = ptroot;
    return 0;
}

/**
 * 释放taskID（对应context）的根页表
 * @param hdevice
 * @param taskID
 * @return
 */
extern int vt_root_mem_free(vt_device_h hdevice, int taskID) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    ventus_cyclesim_vmem_destroy(device, g_ptroots[taskID]);
    g_ptroots.erase(taskID);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_root_mem_free: taskID={}, ptroot={:x}", taskID, g_ptroots[taskID]
    );
    return 0;
}

extern int vt_copy_to_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, const void *src_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    if (dev_vaddr >= 0x70000000 && dev_vaddr < 0x80000000) {
        SPDLOG_LOGGER_ERROR(
            logger, "vt_copy_to_dev: dev_vaddr={:x} in LDS space, not supportted", dev_vaddr
        );
        return 0;
    }
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_to_dev: dev_vaddr={:x}, size=0x{:x}, taskID={}, kernelID={}", dev_vaddr,
        size, taskID, kernelID
    );
    if (cyclesim_driver_gvm_enabled()) {
        fw_vt_copy_to_dev(dev_vaddr, src_addr, size, taskID, kernelID);
    }
    ventus_cyclesim_vmemcpy_h2d(device, g_ptroots[taskID], dev_vaddr, src_addr, size);
    return 0;
}

extern int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    SPDLOG_LOGGER_DEBUG(
        logger, "vt_copy_from_dev: dev_vaddr={:x}, size=0x{:x}, taskID={}, kernelID={}", dev_vaddr,
        size, taskID, kernelID
    );
    ventus_cyclesim_vmemcpy_d2h(device, g_ptroots[taskID], dst_addr, dev_vaddr, size);
    return 0;
}

extern int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *mtd_driver, uint64_t taskID) {
    if (hdevice == nullptr || mtd_driver == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    static uint32_t kernel_cnt = 0;
    const uint64_t kernel_wg_count =
        mtd_driver->kernel_size[0] * mtd_driver->kernel_size[1] * mtd_driver->kernel_size[2];
    const uint64_t cyclesim_kernel_id
        = cyclesim_driver_gvm_enabled() ? g_kernel_launch_id++ : kernel_cnt++;
    const uint64_t pds_resident_wg_count =
        cyclesim_driver_gvm_enabled() ? get_total_resident_pds_slots() : 0;
    if (cyclesim_driver_gvm_enabled() && pds_resident_wg_count == 0) {
        return -1;
    }
    vt_kernel_metadata_t mtd_ref = *mtd_driver;
    mtd_ref.pdsResidentWgCount = pds_resident_wg_count;
    ventus_kernel_metadata_t mtd_sim{
        .name = mtd_driver->kernel_name,
        // .kernel_id = mtd_driver->kernel_id,
        .kernel_id = cyclesim_kernel_id,
        .data = nullptr,
        .startaddr = 0x80000000,
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
        .pagetable = g_ptroots[taskID],
    };
    if (cyclesim_driver_gvm_enabled()) {
        ventus_cyclesim_gvm_set_kernel_wg_id_base(cyclesim_kernel_id, g_software_wg_id_base);
        g_software_wg_id_base += kernel_wg_count;
        fw_vt_start(&mtd_ref, taskID);
        SPDLOG_LOGGER_DEBUG(
            logger, "gvm sidecar: cyclesim_kernel_id={}, software_wg_id_base={}, pdsResidentWgCount={}",
            cyclesim_kernel_id, g_software_wg_id_base - kernel_wg_count, pds_resident_wg_count
        );
    }
    ventus_cyclesim_add_kernel(device, &mtd_sim, nullptr);
    SPDLOG_LOGGER_DEBUG(
        logger,
        "kernel metadata: kernel_id={}, kernel_size=[{}, {}, {}], wf_size={}, "
        "wg_size=[{}, {}, {}]={}wf, metaDataBaseAddr=0x{:x}, ldsSize=0x{:x}, pdsSize=0x{:x}, "
        "sgprUsage={}, vgprUsage={}, pdsBaseAddr=0x{:x}, pdsResidentWgCount={}",
        mtd_driver->kernel_id, mtd_driver->kernel_size[0], mtd_driver->kernel_size[1],
        mtd_driver->kernel_size[2], mtd_driver->wf_size, mtd_driver->num_thread_local[0],
        mtd_driver->num_thread_local[1], mtd_driver->num_thread_local[2], mtd_driver->wg_size,
        mtd_driver->metaDataBaseAddr, mtd_driver->ldsSize, mtd_driver->pdsSize,
        mtd_driver->sgprUsage, mtd_driver->vgprUsage, mtd_driver->pdsBaseAddr,
        pds_resident_wg_count
    );
    return 0;
}

extern int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    if (hdevice == nullptr) return -1;
    auto device = static_cast<ventus_cyclesim_t *>(hdevice);
    uint64_t timeout_ns = timeout * 1000000;
    while (!ventus_cyclesim_is_idle(device) && ventus_cyclesim_get_time(device) < timeout_ns) {
        ventus_cyclesim_step(device);
    }
    return 0;
}

extern int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    // TODO: what is this function for? what is finished_kernel_list?
    return -1;
}

extern int vt_upload_kernel_file(vt_device_h hdevice, const char *filename, int taskID) {
    if (hdevice == nullptr) return -1;
    if (cyclesim_driver_gvm_enabled()) {
        fw_vt_upload_kernel_file(filename, taskID);
    }
    auto device = (ventus_cyclesim_t *)hdevice;
    uint64_t ptroot = g_ptroots[taskID];

    // parse ELF file, find .text and other data sections
    const auto blocks = get_data_from_elf(filename, logger);
    if (blocks.empty()) {
        return -1; // at least .text section is needed
    }

    for (const auto &to_free : g_elf_alloc) {
        // free previous ELF allocations
        ventus_cyclesim_vmem_free(device, ptroot, to_free.first, to_free.second);
    }
    g_elf_alloc.clear();

    // alloc and load/zero-fill each block
    for (auto block = blocks.begin(); block != blocks.end(); block++) {
        uint64_t vaddr = block->vaddr;
        uint64_t size = block->memsz;
        uint64_t vaddr_allocated = ventus_cyclesim_vmem_alloc(device, ptroot, vaddr, size);
        if (vaddr_allocated != vaddr) {
            ventus_cyclesim_vmem_free(device, ptroot, vaddr_allocated, size);
            for (auto need_free = blocks.begin(); need_free != block; need_free++) {
                ventus_cyclesim_vmem_free(device, ptroot, need_free->vaddr, need_free->memsz);
            }
            return -1;
        }
        g_elf_alloc.push_back(std::make_pair(vaddr, size));
        SPDLOG_LOGGER_DEBUG(
            logger, "vt_upload_kernel_file {}: vaddr={:x}, size=0x{:x}", filename, vaddr, size
        );
        ventus_cyclesim_vmemcpy_h2d(device, ptroot, vaddr, block->data.data(), block->data.size());
        std::vector<uint8_t> zeros(size - block->data.size(), 0);
        ventus_cyclesim_vmemcpy_h2d(
            device, ptroot, vaddr + block->data.size(), zeros.data(), zeros.size()
        );
    }

    return 0;
}
int vt_upload_kernel_bytes(vt_device_h device, const void *content, uint64_t size, int taskID) {
    return 0;
}
int vt_dump_perf(vt_device_h device, FILE *stream) { return 0; }
