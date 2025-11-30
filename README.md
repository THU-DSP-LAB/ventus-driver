# ventus-driver

## English
[中文版 Chinese](#中文)

Driver code for Ventus GPGPU project [ventus-gpgpu](https://github.com/THU-DSP-LAB/ventus-gpgpu). It is intended to be used together with other Ventus toolchain projects. See [ventus-env](https://github.com/THU-DSP-LAB/ventus-env).

### Install
- Recommended: use [ventus-env](https://github.com/THU-DSP-LAB/ventus-env) to deploy the Ventus environment and build via the script build-ventus.sh.

- Manual CMake build:
```bash
cmake -G Ninja -B build/ -S . \
  -DCMAKE_BUILD_TYPE=RelWithDebInfo \
  -DCMAKE_INSTALL_PREFIX=../install \
  -DVENTUS_INSTALL_PREFIX=../install \
  -DSPIKE_SRC_DIR=../spike \
  -DDRIVER_ENABLE_AUTOSELECT=ON \
  -DDRIVER_ENABLE_RTLSIM=ON \
  -DDRIVER_ENABLE_CYCLESIM=ON
cmake --build build/
cmake --install build/
```

### Usage
This repository provides the driver implementation for Ventus GPGPU, mainly handling memory management and device connectivity.

- Upstream (host): connects to an OpenCL implementation ([POCL](https://github.com/THU-DSP-LAB/pocl)).
- Downstream (devices): supports multiple (simulation) backends:
  - Instruction-level simulator [spike](https://github.com/THU-DSP-LAB/ventus-gpgpu-isa-simulator), path: driver/spike_device
  - SystemC-based cycle-accurate simulator [cyclesim](https://github.com/THU-DSP-LAB/ventus-gpgpu-cpp-simulator), path: driver/cyclesim_device
  - Verilator-based [Chisel RTL](https://github.com/THU-DSP-LAB/ventus-gpgpu) simulation framework [sim-verilator](https://github.com/THU-DSP-LAB/ventus-gpgpu/tree/master/sim-verilator), path: driver/rtlsim_device
  - The helper backend driver/auto_select allows choosing a backend via the environment variable VENTUS_BACKEND (see Usage).
- Both upstream and downstream connections are via shared libraries.

This repository builds multiple shared libraries installed into the specified prefix. After configuring environment variables as in [ventus-env](https://github.com/THU-DSP-LAB/ventus-env), you can run OpenCL programs and the driver will be invoked automatically.

### Environment variables
- `VENTUS_BACKEND` selects the device backend. Allowed values: spike/isa, rtl/rtlsim/gpgpu, cycle/cyclesim/systemc/simulator.
- `VENTUS_WAVEFORM=1` enables waveform dump: fst for rtlsim, vcd for cyclesim.
- `VENTUS_WAVEFORM_BEGIN` and `VENTUS_WAVEFORM_END` define a time window to limit waveform dump for rtlsim (speeds up simulation). Not supported by cyclesim.
- `VENTUS_DUMP_RESULT=filename.json` saves all device-to-host copied data and their device addresses into a JSON file for debugging.
- `VENTUS_TIMING_DDR=0` disables DDR timing modeling in cyclesim (enabled by default). RTL does not support DDR timing yet.

### Example
```bash
VENTUS_BACKEND=rtl VENTUS_DUMP_RESULT=app.rtl.json VENTUS_WAVEFORM=1 ./OpenCLapp.out 2>&1 | tee rtl.log
```

---

## 中文
[English Version](#english)

这是[ventus-gpgpu](https://github.com/THU-DSP-LAB/ventus-gpgpu)的驱动程序，目前仅支持仿真环境，需与其他Ventus工具链项目配合使用，参见 [ventus-env](https://github.com/THU-DSP-LAB/ventus-env)。

### Install
推荐使用 [ventus-env](https://github.com/THU-DSP-LAB/ventus-env) 部署 Ventus 环境，使用其中的 build-ventus.sh 脚本来编译安装。

手动 cmake 编译命令：
```bash
cmake -G Ninja -B build/ -S . \
  -DCMAKE_BUILD_TYPE=RelWithDebInfo \
  -DCMAKE_INSTALL_PREFIX=../install \
  -DVENTUS_INSTALL_PREFIX=../install \
  -DSPIKE_SRC_DIR=../spike \
  -DDRIVER_ENABLE_AUTOSELECT=ON \
  -DDRIVER_ENABLE_RTLSIM=ON \
  -DDRIVER_ENABLE_CYCLESIM=ON
cmake --build build/
cmake --install build/
```

### Usage
本仓库作为乘影 Ventus GPGPU 的驱动实现，主要完成内存管理与设备连接的功能。
- 向上层连接 OpenCL 实现（[POCL](https://github.com/THU-DSP-LAB/pocl)）。
- 向底层连接多种（仿真）设备，目前支持：
  - 指令级仿真器 [spike](https://github.com/THU-DSP-LAB/ventus-gpgpu-isa-simulator)，对应 driver/spike_device
  - 基于 SystemC 的周期级仿真器 [cyclesim](https://github.com/THU-DSP-LAB/ventus-gpgpu-cpp-simulator)，对应 driver/cyclesim_device
  - 基于 Verilator 搭建的 [Chisel RTL](https://github.com/THU-DSP-LAB/ventus-gpgpu) 仿真框架 [sim-verilator](https://github.com/THU-DSP-LAB/ventus-gpgpu/tree/master/sim-verilator)，对应 driver/rtlsim_device
  - 另有 driver/auto_select，用户可通过环境变量 VENTUS_BACKEND 指定具体底层设备（见 Usage）。
- 向上层与向底层的连接均以动态库链接的形式完成。

本仓库会编译出多个动态库安装到指定目录下。用户参照 [ventus-env](https://github.com/THU-DSP-LAB/ventus-env) 配置好环境变量后运行 OpenCL 程序即可自动调用。

### 环境变量
- VENTUS_BACKEND 选择底层设备，可选值：spike/isa，rtl/rtlsim/gpgpu，cycle/cyclesim/systemc/simulator。
- VENTUS_WAVEFORM=1 时，rtlsim 导出 fst 波形，cyclesim 导出 vcd 波形。
- 设定 VENTUS_WAVEFORM_BEGIN 与 VENTUS_WAVEFORM_END（数字）可使 rtlsim 仅导出该时间段内波形，加速仿真；cyclesim 不支持。
- VENTUS_DUMP_RESULT=filename.json 将所有从 device 端拷回 host 端的数据及其设备端地址保存到指定 JSON 文件，辅助调试。
- VENTUS_TIMING_DDR=0 关闭 cyclesim 中的 DDR 时序仿真（默认开启）。RTL 暂不支持 DDR 时序仿真。

### 示例
```bash
VENTUS_BACKEND=rtl VENTUS_DUMP_RESULT=app.rtl.json VENTUS_WAVEFORM=1 ./OpenCLapp.out 2>&1 | tee rtl.log
```

