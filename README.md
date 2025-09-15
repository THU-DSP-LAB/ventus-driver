# ventus-driver
Driver code for [ventus-gpgpu](https://github.com/THU-DSP-LAB/ventus-gpgpu), need to be used with other ventus toolchain projects

## Install
推荐使用[ventus-env](https://github.com/THU-DSP-LAB/ventus-env)部署Ventus环境，使用其中的`build-ventus.sh`脚本来编译安装

手动cmake编译命令：
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

## Usage
本仓库作为乘影Ventus GPGPU的驱动实现，主要完成内存管理与设备连接的功能
* 向上层连接OpenCL实现（[POCL](https://github.com/THU-DSP-LAB/pocl)）
* 向底层连接多种(仿真)设备，目前支持：
  * 指令级仿真器[spike](https://github.com/THU-DSP-LAB/ventus-gpgpu-isa-simulator)，对应`driver/spike_device`
  * 基于SystemC的周期级仿真器[cyclesim](https://github.com/THU-DSP-LAB/ventus-gpgpu-cpp-simulator)，对应`driver/cyclesim_device`
  * 基于Verilator搭建的[Chisel RTL](https://github.com/THU-DSP-LAB/ventus-gpgpu)仿真框架[sim-verilator](https://github.com/THU-DSP-LAB/ventus-gpgpu/tree/master/sim-verilator)，对应`driver/rtlsim_device`
  * 额外还有`driver/auto_select`方便用户通过环境变量`VENTUS_BACKEND`指定具体使用哪个底层设备（见Usage）
* 向上层与向底层的连接都以动态库链接的形式完成

本仓库会编译出多个动态库安装到指定目录下，用户参照[ventus-env](https://github.com/THU-DSP-LAB/ventus-env)配置好环境变量后运行OpenCL程序即可自动调用

本仓库会读取几种环境变量，方便灵活调控底层设备行为
* `VENTUS_BACKEND`选取使用哪种底层设备，可选值`spike`/`isa`, `rtl`/`rtlsim`/`gpgpu`, `cycle`/`cyclesim`/`systemc`/`simulator`
* `VENTUS_WAVEFORM=1`时可以使rtlsim后端导出fst波形文件，让cyclesim后端导出vcd波形文件
* `VENTUS_WAVEFORM_BEGIN`和`VENTUS_WAVEFORM_END`设定为一对数字可以使rtlsim后端只导出这一段仿真时间内的波形，以加速仿真。cyclesim后端不支持此功能
* `VENTUS_DUMP_RESULT=filename.json`可以将所有OpenCL程序从device端拷贝回host端的数据及其在设备端的地址保存到指定json文件中，辅助调试

Example:
```bash
VENTUS_BACKEND=rtl VENTUS_DUMP_RESULT=app.rtl.json VENTUS_WAVEFORM=1 ./OpenCLapp.out 2>&1 | tee rtl.log
```

