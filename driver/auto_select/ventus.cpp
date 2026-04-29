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
#include <system_error>
#include <unordered_set>
#include <unistd.h>
#include <vector>

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

static int vt_set_perf_context_noop(vt_device_h hdevice, const vt_perf_context_t *context) {
    (void)hdevice;
    (void)context;
    return 0;
}

static int vt_clear_perf_context_noop(vt_device_h hdevice) {
    (void)hdevice;
    return 0;
}

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
    int (*vt_set_perf_context)(vt_device_h hdevice, const vt_perf_context_t *context);
    int (*vt_clear_perf_context)(vt_device_h hdevice);
    int (*vt_dump_perf)(vt_device_h device, FILE *stream);
} vt_api = {0};

static std::vector<std::string> strsplit(const std::string &s, char delim) {
    std::vector<std::string> result;
    std::size_t start = 0;
    while (true) {
        auto pos = s.find(delim, start);
        if (pos == std::string::npos) {
            result.emplace_back(s.substr(start));
            break;
        }
        result.emplace_back(s.substr(start, pos - start));
        start = pos + 1;
    }
    return result;
}

enum class cache_variant_t {
    default_cache,
    with_cache,
    no_cache,
};

static std::string join_backend_suffix(const std::vector<std::string> &backend_split) {
    if (backend_split.size() <= 1) return "";

    std::string suffix = backend_split[1];
    for (std::size_t i = 2; i < backend_split.size(); ++i) {
        suffix += "-";
        suffix += backend_split[i];
    }
    return suffix;
}

static std::optional<cache_variant_t> parse_cache_variant(
    const std::vector<std::string> &backend_split
) {
    if (backend_split.size() <= 1) return cache_variant_t::default_cache;

    const std::string suffix = join_backend_suffix(backend_split);
    const std::unordered_set<std::string> nocache = {
        "nocache",
        "no-cache",
        "withoutcache",
        "without-cache",
        "without",
    };
    const std::unordered_set<std::string> withcache = {
        "cache",
        "withcache",
        "with-cache",
        "with",
    };

    if (withcache.count(suffix)) return cache_variant_t::with_cache;
    if (nocache.count(suffix)) return cache_variant_t::no_cache;
    return std::nullopt;
}

// 加载后端库并设置函数指针
vt_api_t load_backend() {
    vt_api_t api = {0}; // 初始化函数指针结构体

    // 读取环境变量 VENTUS_BACKEND，确定动态库名
    const char *backend_ = std::getenv("VENTUS_BACKEND");
    std::string backend = backend_ ? backend_ : "spike";
    std::transform(backend.begin(), backend.end(), backend.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    auto backend_split = strsplit(backend, '-');
    std::map<std::string, std::string> backend_map;
    backend_map["isa"] = "libspike_driver.so";
    backend_map["spike"] = "libspike_driver.so";
    backend_map["rtlsim"] = "librtlsim_driver.so";
    backend_map["rtl"] = "librtlsim_driver.so";
    backend_map["gpgpu"] = "librtlsim_driver.so";
    backend_map["cycle"] = "libcyclesim_driver.so";
    backend_map["cyclesim"] = "libcyclesim_driver.so";
    backend_map["gvm"] = "libgvm_driver.so";
    backend_map["ptx"] = "libptx_driver.so";
    backend_map["sbt"] = "libptx_driver.so";
    backend_map["ptxsim"] = "libptx_driver.so";
    backend_map["sbtsim"] = "libptx_driver.so";
    backend_map["simulator"] = "libcyclesim_driver.so";
    backend_map["systemc"] = "libcyclesim_driver.so";

    std::string backend_soname;
    if (backend_map.count(backend_split[0])) {
        backend_soname = backend_map[backend_split[0]];
    } else {
        SPDLOG_ERROR("Unsupported VENTUS_BACKEND: {}, {}", backend, backend_split[0]);
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

    auto create_symlink = [&](const std::string& link_name, const std::string& soname) {
        namespace fs = std::filesystem;
        fs::path target = self_path / link_name;
        std::error_code err;
        // Concurrency-safe symlink update (important when multiple processes
        // dlopen this backend in parallel, e.g., parallel regression workers):
        //
        //   1) Idempotent short-circuit: if target already points at `soname`,
        //      do nothing. This keeps the common case lock-free.
        //   2) Atomic replace via tmp + rename(2): POSIX guarantees rename is
        //      atomic, so the target is never momentarily missing. Even if
        //      several processes race on the "real flip" after a mode switch,
        //      every other process' dlopen always sees a valid symlink
        //      pointing at either the old or new target — never nothing.
        //
        // A plain remove()+create_symlink() (the previous implementation)
        // exposes a small "file missing" window between the two calls; another
        // worker's dlopen landing in that window fails with
        // "cannot open shared object file". Do NOT revert to that approach.
        if (fs::is_symlink(target, err)) {
            auto current = fs::read_symlink(target, err);
            if (!err && current.string() == soname) return;
        }
        // Per-pid tmp name so concurrent processes don't collide on the staging symlink.
        fs::path tmp = target;
        tmp += ".tmp." + std::to_string(::getpid());
        fs::remove(tmp, err);                              // clear any leftover from a crashed predecessor
        fs::create_symlink(soname, tmp, err);
        if (!err) {
            fs::rename(tmp, target, err);                  // atomic on POSIX
        }
        if (err) {
            std::error_code cleanup_err;
            fs::remove(tmp, cleanup_err);                  // best-effort cleanup; don't overwrite err
            SPDLOG_ERROR("Ventus driver: ln -sf failed: {}", fs::filesystem_error("", err).what());
        }
    };

    auto select_cache_variant = [&](const std::string& link_name, const std::string& default_soname,
                                    const std::string& nocache_soname) {
        const std::optional<cache_variant_t> cache_variant = parse_cache_variant(backend_split);
        if (!cache_variant) {
            SPDLOG_ERROR("Unsupported VENTUS_BACKEND cache variant: {}", backend);
            std::exit(EXIT_FAILURE);
        }

        if (*cache_variant == cache_variant_t::default_cache ||
            *cache_variant == cache_variant_t::with_cache) {
            create_symlink(link_name, default_soname);
        } else if (*cache_variant == cache_variant_t::no_cache) {
            create_symlink(link_name, nocache_soname);
        }
    };

    // 根据 VENTUS_BACKEND 指定使用有/无 cache 版本的 RTL 或 GVM，覆写软链接。
    // 无后缀时也显式恢复默认 with-cache 版本，避免上一次 nocache 运行污染本次选择。
    if (backend_soname == "librtlsim_driver.so") {
        select_cache_variant("libVentusRTL.so", "libVentusRTL-withcache.so", "libVentusRTL-nocache.so");
    }
    if (backend_soname == "libgvm_driver.so") {
        select_cache_variant("libVentusGVM.so", "libVentusGVM-withcache.so", "libVentusGVM-nocache.so");
    }

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
    api.vt_set_perf_context = (int (*)(vt_device_h, const vt_perf_context_t*))dlsym(handle, "vt_set_perf_context");
    api.vt_clear_perf_context = (int (*)(vt_device_h))dlsym(handle, "vt_clear_perf_context");
    api.vt_dump_perf = (int (*)(vt_device_h, FILE*))dlsym(handle, "vt_dump_perf");
    // clang-format on

    if (!api.vt_set_perf_context) api.vt_set_perf_context = vt_set_perf_context_noop;
    if (!api.vt_clear_perf_context) api.vt_clear_perf_context = vt_clear_perf_context_noop;

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

extern "C" int vt_start(vt_device_h hdevice, vt_kernel_metadata_t *metaData, uint64_t taskID) {
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

extern "C" int vt_set_perf_context(vt_device_h hdevice, const vt_perf_context_t *context) {
    if (!loader.api.vt_set_perf_context) return -1;
    return loader.api.vt_set_perf_context(hdevice, context);
}

extern "C" int vt_clear_perf_context(vt_device_h hdevice) {
    if (!loader.api.vt_clear_perf_context) return -1;
    return loader.api.vt_clear_perf_context(hdevice);
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
