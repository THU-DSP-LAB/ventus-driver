#pragma once

#include "ventus_rtlsim.h"
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <dlfcn.h>
#include <fmt/core.h>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

namespace ventus::rtlsim_backend {

struct LibraryNames {
    std::string_view with_cache;
    std::string_view no_cache;
};

enum class FirmwareApiRequirement {
    not_required,
    required,
};

struct Api {
    void *handle = nullptr;
    void (*get_default_config)(ventus_rtlsim_config_t *) = nullptr;
    uint64_t (*get_time)(const ventus_rtlsim_t *) = nullptr;
    bool (*is_idle)(const ventus_rtlsim_t *) = nullptr;
    int (*get_parameter)(const char *, uint32_t *) = nullptr;
    ventus_rtlsim_t *(*init)(const ventus_rtlsim_config_t *) = nullptr;
    void (*finish)(ventus_rtlsim_t *, bool) = nullptr;
    int (*finish_checked)(ventus_rtlsim_t *, bool) = nullptr;
    int (*save_state)(ventus_rtlsim_t *, const char *) = nullptr;
    ventus_rtlsim_t *(*restore_state)(
        const ventus_rtlsim_config_t *, const char *
    ) = nullptr;
    uint32_t (*persistent_state_version)() = nullptr;
    const ventus_rtlsim_step_result_t *(*step)(ventus_rtlsim_t *) = nullptr;
    ventus_rtlsim_pmu_t (*get_pmu)(const ventus_rtlsim_t *) = nullptr;
    void (*icache_invalidate)(ventus_rtlsim_t *) = nullptr;
    void (*dcache_host_invalidate)(ventus_rtlsim_t *) = nullptr;
    void (*add_kernel)(
        ventus_rtlsim_t *, const ventus_kernel_metadata_t *, void (*finish_callback)(void *)
    ) = nullptr;
    bool (*pmemcpy_h2d)(ventus_rtlsim_t *, paddr_t, const void *, uint64_t) = nullptr;
    bool (*pmemcpy_d2h)(ventus_rtlsim_t *, void *, paddr_t, uint64_t) = nullptr;
    bool (*pmem_region_register)(
        ventus_rtlsim_t *, paddr_t, uint64_t, uint64_t,
        ventus_pmem_region_kind_t, uint64_t
    ) = nullptr;
    bool (*pmem_region_unregister)(ventus_rtlsim_t *, paddr_t, uint64_t) = nullptr;
    int (*fw_vt_dev_open)() = nullptr;
    int (*fw_vt_dev_close)() = nullptr;
    int (*fw_vt_buf_alloc_fixed)(uint64_t, uint64_t, int, uint64_t, uint64_t) = nullptr;
    int (*fw_vt_buf_free)(uint64_t, uint64_t *, uint64_t, uint64_t) = nullptr;
    int (*fw_vt_one_buf_free)(uint64_t, uint64_t *, uint64_t, uint64_t) = nullptr;
    int (*fw_vt_copy_to_dev)(uint64_t, const void *, uint64_t, uint64_t, uint64_t) = nullptr;
    int (*fw_vt_start)(void *, uint64_t) = nullptr;
    int (*fw_vt_upload_kernel_file)(const char *, int) = nullptr;
};

inline std::vector<std::string> split(std::string_view text, char delim) {
    std::vector<std::string> parts;
    std::size_t start = 0;
    while (start <= text.size()) {
        const std::size_t pos = text.find(delim, start);
        if (pos == std::string_view::npos) {
            parts.emplace_back(text.substr(start));
            break;
        }
        parts.emplace_back(text.substr(start, pos - start));
        start = pos + 1;
    }
    return parts;
}

inline std::string backend_suffix(const std::string &backend) {
    const std::vector<std::string> parts = split(backend, '-');
    if (parts.size() <= 1) return "";
    std::string suffix = parts[1];
    for (std::size_t i = 2; i < parts.size(); ++i) {
        suffix += "-";
        suffix += parts[i];
    }
    return suffix;
}

inline std::string normalized_backend() {
    const char *env_backend = std::getenv("VENTUS_BACKEND");
    std::string backend = env_backend ? env_backend : "rtlsim";
    std::transform(backend.begin(), backend.end(), backend.begin(), [](unsigned char ch) {
        return static_cast<char>(std::tolower(ch));
    });
    return backend;
}

inline std::string_view select_library_name(const LibraryNames &names) {
    const std::string suffix = backend_suffix(normalized_backend());
    if (suffix.empty() || suffix == "cache" || suffix == "withcache" || suffix == "with-cache" ||
        suffix == "with") {
        return names.with_cache;
    }
    if (suffix == "nocache" || suffix == "no-cache" || suffix == "withoutcache" ||
        suffix == "without-cache" || suffix == "without") {
        return names.no_cache;
    }
    throw std::runtime_error(fmt::format("unsupported VENTUS_BACKEND cache variant: {}", suffix));
}

template <typename Fn> inline Fn load_symbol(void *handle, const char *name) {
    dlerror();
    void *symbol = dlsym(handle, name);
    const char *err = dlerror();
    if (err != nullptr || symbol == nullptr) {
        throw std::runtime_error(
            fmt::format("dlsym({}) failed: {}", name, err ? err : "null symbol")
        );
    }
    return reinterpret_cast<Fn>(symbol);
}

template <typename Fn> inline Fn load_optional_symbol(void *handle, const char *name) {
    dlerror();
    void *symbol = dlsym(handle, name);
    const char *err = dlerror();
    if (err != nullptr || symbol == nullptr) {
        return nullptr;
    }
    return reinterpret_cast<Fn>(symbol);
}

inline void load_firmware_symbols(Api &api, void *handle) {
    api.fw_vt_dev_open = load_symbol<int (*)()>(handle, "fw_vt_dev_open");
    api.fw_vt_dev_close = load_symbol<int (*)()>(handle, "fw_vt_dev_close");
    api.fw_vt_buf_alloc_fixed = load_symbol<int (*)(uint64_t, uint64_t, int, uint64_t, uint64_t)>(
        handle, "fw_vt_buf_alloc_fixed"
    );
    api.fw_vt_buf_free =
        load_symbol<int (*)(uint64_t, uint64_t *, uint64_t, uint64_t)>(handle, "fw_vt_buf_free");
    api.fw_vt_one_buf_free = load_symbol<int (*)(uint64_t, uint64_t *, uint64_t, uint64_t)>(
        handle, "fw_vt_one_buf_free"
    );
    api.fw_vt_copy_to_dev =
        load_symbol<int (*)(uint64_t, const void *, uint64_t, uint64_t, uint64_t)>(
            handle, "fw_vt_copy_to_dev"
        );
    api.fw_vt_start = load_symbol<int (*)(void *, uint64_t)>(handle, "fw_vt_start");
    api.fw_vt_upload_kernel_file =
        load_symbol<int (*)(const char *, int)>(handle, "fw_vt_upload_kernel_file");
}

inline Api open_library(std::string_view soname, FirmwareApiRequirement firmware_api) {
    void *handle = dlopen(std::string(soname).c_str(), RTLD_NOW | RTLD_LOCAL);
    if (handle == nullptr) {
        throw std::runtime_error(fmt::format("dlopen({}) failed: {}", soname, dlerror()));
    }

    Api api;
    api.handle = handle;
    api.get_default_config =
        load_symbol<void (*)(ventus_rtlsim_config_t *)>(handle, "ventus_rtlsim_get_default_config");
    api.get_time =
        load_symbol<uint64_t (*)(const ventus_rtlsim_t *)>(handle, "ventus_rtlsim_get_time");
    api.is_idle = load_symbol<bool (*)(const ventus_rtlsim_t *)>(handle, "ventus_rtlsim_is_idle");
    api.get_parameter =
        load_symbol<int (*)(const char *, uint32_t *)>(handle, "ventus_rtlsim_get_parameter");
    api.init = load_symbol<ventus_rtlsim_t *(*)(const ventus_rtlsim_config_t *)>(
        handle, "ventus_rtlsim_init"
    );
    api.finish = load_symbol<void (*)(ventus_rtlsim_t *, bool)>(handle, "ventus_rtlsim_finish");
    api.finish_checked =
        load_optional_symbol<int (*)(ventus_rtlsim_t *, bool)>(handle, "ventus_rtlsim_finish_checked");
    api.save_state = load_optional_symbol<int (*)(ventus_rtlsim_t *, const char *)>(
        handle, "ventus_rtlsim_save_state"
    );
    api.restore_state = load_optional_symbol<
        ventus_rtlsim_t *(*)(const ventus_rtlsim_config_t *, const char *)>(
        handle, "ventus_rtlsim_restore_state"
    );
    api.persistent_state_version = load_optional_symbol<uint32_t (*)()>(
        handle, "ventus_rtlsim_persistent_state_version"
    );
    api.step = load_symbol<const ventus_rtlsim_step_result_t *(*)(ventus_rtlsim_t *)>(
        handle, "ventus_rtlsim_step"
    );
    api.get_pmu =
        load_symbol<ventus_rtlsim_pmu_t (*)(const ventus_rtlsim_t *)>(handle, "ventus_rtlsim_get_pmu");
    api.icache_invalidate =
        load_symbol<void (*)(ventus_rtlsim_t *)>(handle, "ventus_rtlsim_icache_invalidate");
    api.dcache_host_invalidate = load_optional_symbol<void (*)(ventus_rtlsim_t *)>(
        handle, "ventus_rtlsim_dcache_host_invalidate"
    );
    api.add_kernel = load_symbol<
        void (*)(ventus_rtlsim_t *, const ventus_kernel_metadata_t *, void (*)(void *))>(
        handle, "ventus_rtlsim_add_kernel"
    );
    api.pmemcpy_h2d = load_symbol<bool (*)(ventus_rtlsim_t *, paddr_t, const void *, uint64_t)>(
        handle, "ventus_rtlsim_pmemcpy_h2d"
    );
    api.pmemcpy_d2h = load_symbol<bool (*)(ventus_rtlsim_t *, void *, paddr_t, uint64_t)>(
        handle, "ventus_rtlsim_pmemcpy_d2h"
    );
    api.pmem_region_register = load_optional_symbol<
        bool (*)(ventus_rtlsim_t *, paddr_t, uint64_t, uint64_t,
                 ventus_pmem_region_kind_t, uint64_t)>(
        handle, "ventus_rtlsim_pmem_region_register"
    );
    api.pmem_region_unregister = load_optional_symbol<
        bool (*)(ventus_rtlsim_t *, paddr_t, uint64_t)>(
        handle, "ventus_rtlsim_pmem_region_unregister"
    );
    if (firmware_api == FirmwareApiRequirement::required) {
        load_firmware_symbols(api, handle);
    }
    return api;
}

inline Api load(const LibraryNames &names, FirmwareApiRequirement firmware_api) {
    try {
        return open_library(select_library_name(names), firmware_api);
    } catch (const std::exception &err) {
        fmt::print(stderr, "Ventus driver backend load failed: {}\n", err.what());
        std::exit(EXIT_FAILURE);
    }
}

} // namespace ventus::rtlsim_backend
