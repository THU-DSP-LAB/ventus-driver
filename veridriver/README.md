这个目录为GPGPU的源代码转为verilog后，执行OpenCL程序时，相应的driver需要实现的功能，包括：

1. `/include/ventu.h`中声明的函数
2. `vt_device`类，表示GPGPU设备，成员变量包括设备类（不包含ram），设备ram类
3. `vt_buffer`类，主机和设备之间交换数据的缓冲，成员变量包括`vt_device`，数据，缓冲区大小
4. 其他 TBD