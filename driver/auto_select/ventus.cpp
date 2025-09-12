/*
 * Ventus driver for the Auto Select feature.
 * This driver is designed to work with the Ventus spike/rtlsim/cyclesim devices.
 * It uses dynamic loading to access the Ventus library functions.
 */

#include "ventus.h"
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <dlfcn.h>
#include <filesystem>
#include <fmt/core.h>
#include <fstream>
#include <map>
#include <nlohmann/json.hpp>
#include <optional>
#include <spdlog/spdlog.h>
#include <string>

//
// 用于导出memcpy_device_to_host的所有数据及其地址（环境变量VENTUS_DUMP_RESULT=filename.json）
//

// 辅助函数
static int append_json_object(const std::string &filename, const nlohmann::json &new_obj);
static std::string to_hex_string(uint32_t value) { return fmt::format("0x{:08X}", value); }
// 下边两个函数也可被外界调用，方便再OpenCL APP中获取设备端指针具体地址
// 获取上次memcpy_device_to_host的设备端地址
extern "C" int __vt_get_last_copy_to_dev_addr(uint64_t *addr);
// 设置json dump文件名，传入nullptr表示关闭dump功能，等价于VENTUS_DUMP_RESULT环境变量
extern "C" void __vt_enable_dump_json_copy_to_dev(const char *filename);
// 全局变量
static uint64_t g_last_copy_to_dev_addr = 0; // 上次memcpy_device_to_host的设备端地址
static std::optional<std::string> g_dump_result_filename = std::nullopt;

//
// 定义函数指针结构体，包含所有ventus.h API的函数指针
//
struct vt_api_t {
    int (*vt_dev_open)(vt_device_h *hdevice);
    int (*vt_dev_close)(vt_device_h hdevice);
    int (*vt_dev_caps)(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value);
    int (*vt_root_mem_alloc)(vt_device_h hdevice, int taskID);
    int (*vt_root_mem_free)(vt_device_h hdevice, int taskID);
    int (*vt_buf_alloc)(
        vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID,
        uint64_t kernelID
    );
    int (*vt_buf_free)(
        vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
    );
    int (*vt_one_buf_free)(
        vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
    );
    int (*vt_copy_to_dev)(
        vt_device_h hdevice, uint64_t dev_vaddr, const void *src_addr, uint64_t size,
        uint64_t taskID, uint64_t kernelID
    );
    int (*vt_copy_from_dev)(
        vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
        uint64_t kernelID
    );
    int (*vt_start)(vt_device_h hdevice, void *metaData, uint64_t taskID);
    int (*vt_ready_wait)(vt_device_h hdevice, uint64_t timeout);
    int (*vt_finish_all_kernel)(vt_device_h hdevice, std::queue<int> *finished_kernel_list);
    int (*vt_upload_kernel_bytes)(
        vt_device_h device, const void *content, uint64_t size, int taskID
    );
    int (*vt_upload_kernel_file)(vt_device_h device, const char *filename, int kernelID);
    int (*vt_dump_perf)(vt_device_h device, FILE *stream);
} vt_api = {0};

// 加载后端库并设置函数指针
vt_api_t load_backend() {
    vt_api_t api = {0}; // 初始化函数指针结构体

    // 读取环境变量 VENTUS_BACKEND，确定动态库名
    const char *backend_ = std::getenv("VENTUS_BACKEND");
    std::string backend = backend_ ? backend_ : "spike";
    std::transform(backend.begin(), backend.end(), backend.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    std::map<std::string, std::string> backend_map;
    backend_map["isa"] = "libspike_driver.so";
    backend_map["spike"] = "libspike_driver.so";
    backend_map["rtlsim"] = "librtlsim_driver.so";
    backend_map["rtl"] = "librtlsim_driver.so";
    backend_map["gpgpu"] = "librtlsim_driver.so";
    backend_map["cycle"] = "libcyclesim_driver.so";
    backend_map["cyclesim"] = "libcyclesim_driver.so";
    backend_map["simulator"] = "libcyclesim_driver.so";
    backend_map["systemc"] = "libcyclesim_driver.so";

    std::string backend_soname;
    if (backend_map.find(backend) != backend_map.end()) {
        backend_soname = backend_map[backend];
    } else {
        SPDLOG_ERROR("Unsupported VENTUS_BACKEND: {}", backend);
        std::exit(EXIT_FAILURE);
    }

    // 获取自身路径，基于此查找其它动态库
    Dl_info info;
    if (dladdr((void *)load_backend, &info) == 0) {
        SPDLOG_ERROR("dlopen failed to get current library path.");
        std::exit(EXIT_FAILURE);
    }
    std::filesystem::path self_path(info.dli_fname);
    self_path = self_path.parent_path(); // 获取当前库所在目录

    // 构建后端库路径，例如 "install/lib/liba.so"
    std::string lib_path = self_path / backend_soname;
    void *handle = dlopen(lib_path.c_str(), RTLD_LAZY);
    if (!handle) {
        SPDLOG_ERROR("dlopen failed to load backend library: {}", dlerror());
        std::exit(EXIT_FAILURE);
    }

    // 获取所有 API 的函数指针
    // clang-format off
    api.vt_dev_open = (int (*)(vt_device_h*))dlsym(handle, "vt_dev_open");
    api.vt_dev_close = (int (*)(vt_device_h))dlsym(handle, "vt_dev_close");
    api.vt_dev_caps = (int (*)(vt_device_h*, uint64_t, uint64_t*))dlsym(handle, "vt_dev_caps");
    api.vt_root_mem_alloc = (int (*)(vt_device_h, int))dlsym(handle, "vt_root_mem_alloc");
    api.vt_root_mem_free = (int (*)(vt_device_h, int))dlsym(handle, "vt_root_mem_free");
    api.vt_buf_alloc = (int (*)(vt_device_h, uint64_t, uint64_t*, int, uint64_t, uint64_t))dlsym(handle, "vt_buf_alloc");
    api.vt_buf_free = (int (*)(vt_device_h, uint64_t, uint64_t*, uint64_t, uint64_t))dlsym(handle, "vt_buf_free");
    api.vt_one_buf_free = (int (*)(vt_device_h, uint64_t, uint64_t*, uint64_t, uint64_t))dlsym(handle, "vt_one_buf_free");
    api.vt_copy_to_dev = (int (*)(vt_device_h, uint64_t, const void*, uint64_t, uint64_t, uint64_t))dlsym(handle, "vt_copy_to_dev");
    api.vt_copy_from_dev = (int (*)(vt_device_h, uint64_t, void*, uint64_t, uint64_t, uint64_t))dlsym(handle, "vt_copy_from_dev");
    api.vt_start = (int (*)(vt_device_h, void*, uint64_t))dlsym(handle, "vt_start");
    api.vt_ready_wait = (int (*)(vt_device_h, uint64_t))dlsym(handle, "vt_ready_wait");
    api.vt_finish_all_kernel = (int (*)(vt_device_h, std::queue<int>*))dlsym(handle, "vt_finish_all_kernel");
    api.vt_upload_kernel_bytes = (int (*)(vt_device_h, const void*, uint64_t, int))dlsym(handle, "vt_upload_kernel_bytes");
    api.vt_upload_kernel_file = (int (*)(vt_device_h, const char*, int))dlsym(handle, "vt_upload_kernel_file");
    api.vt_dump_perf = (int (*)(vt_device_h, FILE*))dlsym(handle, "vt_dump_perf");
    // clang-format on

    // 检查是否所有函数指针都成功获取
    if (!api.vt_dev_open || !api.vt_dev_close || !api.vt_dev_caps || !api.vt_root_mem_alloc ||
        !api.vt_root_mem_free || !api.vt_buf_alloc || !api.vt_buf_free || !api.vt_one_buf_free ||
        !api.vt_copy_to_dev || !api.vt_copy_from_dev || !api.vt_start || !api.vt_ready_wait ||
        !api.vt_finish_all_kernel || !api.vt_upload_kernel_bytes || !api.vt_upload_kernel_file ||
        !api.vt_dump_perf) {
        // 如果有任何函数指针获取失败，返回空的 api 结构体
        // 不显式调用 dlclose，依赖操作系统清理
        SPDLOG_ERROR("Failed to load all required functions from backend library");
        std::exit(EXIT_FAILURE);
    }

    // 成功加载，返回设置好的 api 结构体
    // handle 不保存，依赖操作系统在进程结束时自动卸载
    return api;
}

// 使用静态变量实现线程安全的懒加载
struct BackendLoader {
    vt_api_t api = {0};
    bool loaded = false;
    BackendLoader() { api = load_backend(); }
};
static BackendLoader loader;

// 实现所有 API 函数，使用 extern "C" 确保符号正确导出
extern "C" int vt_dev_open(vt_device_h *hdevice) {
    if (!loader.loaded) {
        loader.api = load_backend(); // 动态加载后端库
        loader.loaded = true;        // 标记为已加载
    }
    if (!loader.api.vt_dev_open) return -1;
    const char *env_dump_result = std::getenv("VENTUS_DUMP_RESULT");
    if (env_dump_result == nullptr) {
        env_dump_result = std::getenv("VENTUS_DRIVER_DUMP_RESULT"); // capability name
    }
    if (!g_dump_result_filename && env_dump_result) {
        g_dump_result_filename = std::string{env_dump_result};
        std::ofstream ofs(*g_dump_result_filename, std::ios::trunc | std::ios::out);
        ofs.close(); // 清空文件
    }
    return loader.api.vt_dev_open(hdevice);
}

extern "C" int vt_dev_close(vt_device_h hdevice) {
    if (!loader.api.vt_dev_close) return -1;
    return loader.api.vt_dev_close(hdevice);
}

extern "C" int vt_dev_caps(vt_device_h *hdevice, uint64_t caps_id, uint64_t *value) {
    if (!loader.api.vt_dev_caps) return -1;
    return loader.api.vt_dev_caps(hdevice, caps_id, value);
}

extern "C" int vt_root_mem_alloc(vt_device_h hdevice, int taskID) {
    if (!loader.api.vt_root_mem_alloc) return -1;
    return loader.api.vt_root_mem_alloc(hdevice, taskID);
}

extern "C" int vt_root_mem_free(vt_device_h hdevice, int taskID) {
    if (!loader.api.vt_root_mem_free) return -1;
    return loader.api.vt_root_mem_free(hdevice, taskID);
}

extern "C" int vt_buf_alloc(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID,
    uint64_t kernelID
) {
    if (!loader.api.vt_buf_alloc) return -1;
    return loader.api.vt_buf_alloc(hdevice, size, vaddr, BUF_TYPE, taskID, kernelID);
}

extern "C" int vt_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (!loader.api.vt_buf_free) return -1;
    return loader.api.vt_buf_free(hdevice, size, vaddr, taskID, kernelID);
}

extern "C" int vt_one_buf_free(
    vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID
) {
    if (!loader.api.vt_one_buf_free) return -1;
    return loader.api.vt_one_buf_free(hdevice, size, vaddr, taskID, kernelID);
}

extern "C" int vt_copy_to_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, const void *src_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (!loader.api.vt_copy_to_dev) return -1;
    return loader.api.vt_copy_to_dev(hdevice, dev_vaddr, src_addr, size, taskID, kernelID);
}

extern "C" int vt_copy_from_dev(
    vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID,
    uint64_t kernelID
) {
    if (!loader.api.vt_copy_from_dev) return -1;
    int result = loader.api.vt_copy_from_dev(hdevice, dev_vaddr, dst_addr, size, taskID, kernelID);
    if (result == 0) {
        g_last_copy_to_dev_addr = dev_vaddr;
    }
    if (g_dump_result_filename) {
        nlohmann::json j;
        j["address"] = to_hex_string(dev_vaddr);
        j["size"] = to_hex_string(size);
        nlohmann::json addr_data;
        for (size_t i = 0; i < (size + 3) / 4; i++) {
            addr_data[to_hex_string(dev_vaddr + i * 4)] = to_hex_string(((uint32_t *)dst_addr)[i]);
        }
        j["data"] = addr_data;
        append_json_object(*g_dump_result_filename, j);
    }
    return result;
}

extern "C" int vt_start(vt_device_h hdevice, void *metaData, uint64_t taskID) {
    if (!loader.api.vt_start) return -1;
    return loader.api.vt_start(hdevice, metaData, taskID);
}

extern "C" int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    if (!loader.api.vt_ready_wait) return -1;
    return loader.api.vt_ready_wait(hdevice, timeout);
}

extern "C" int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    if (!loader.api.vt_finish_all_kernel) return -1;
    return loader.api.vt_finish_all_kernel(hdevice, finished_kernel_list);
}

extern "C" int vt_upload_kernel_bytes(
    vt_device_h device, const void *content, uint64_t size, int taskID
) {
    if (!loader.api.vt_upload_kernel_bytes) return -1;
    return loader.api.vt_upload_kernel_bytes(device, content, size, taskID);
}

extern "C" int vt_upload_kernel_file(vt_device_h device, const char *filename, int kernelID) {
    if (!loader.api.vt_upload_kernel_file) return -1;
    return loader.api.vt_upload_kernel_file(device, filename, kernelID);
}

extern "C" int vt_dump_perf(vt_device_h device, FILE *stream) {
    if (!loader.api.vt_dump_perf) return -1;
    return loader.api.vt_dump_perf(device, stream);
}

extern "C" int __vt_get_last_copy_to_dev_addr(uint64_t *addr) {
    *addr = g_last_copy_to_dev_addr;
    return 0;
}

extern "C" void __vt_enable_dump_json_copy_to_dev(const char *filename) {
    if (!filename) {
        g_dump_result_filename = std::nullopt;
        return;
    }
    if (!g_dump_result_filename || *g_dump_result_filename != filename) {
        g_dump_result_filename = std::string{filename};
        std::ofstream ofs(*g_dump_result_filename, std::ios::trunc | std::ios::out);
        ofs.close(); // 清空文件
    }
}

static int append_json_object(const std::string &filename, const nlohmann::json &new_obj) {
    nlohmann::json root;
    std::ifstream ifs(filename);
    if (ifs.is_open() && ifs.peek() != std::ifstream::traits_type::eof()) {
        ifs >> root;
        ifs.close();
        if (!root.is_array()) {
            SPDLOG_ERROR("Error: File is not a JSON array: {}", filename);
            return 1;
        }
    } else {
        root = nlohmann::json::array();
    }

    root.push_back(new_obj);

    std::ofstream ofs(filename);
    if (!ofs.is_open()) {
        SPDLOG_ERROR("Unable to open json dump file: {}", filename);
        return 1;
    }
    ofs << root.dump(4);
    ofs.close();
    return 0;
}
