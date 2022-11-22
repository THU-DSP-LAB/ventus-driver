这个目录为不同种类（FPGA，verilator等）的驱动所出现的公共的函数，包括

1. 数据对齐：

`aligned_size()`

`is_aligned()`

2. 设备和主机之间的上下文交换：

`vt_upload_kernel_bytes`

`vt_upload_kernel_file`

