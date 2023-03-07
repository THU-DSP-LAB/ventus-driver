vt_device.cpp:`vt_device`类的成员类的实现,包括：

1. `Processor`
2. `RAM`

v1.0

device所能看到的OpenCL最高层次为kernel，每个kernel有自己的buffe，OpenCL编程模型中同一个context中的buffer不同kernel之间可以共享，取决于进入cmdQueue时一个buffer是否设置为了多个kernel的参数。

每个kernel会包含一个context信息，driver认为每个context是同一个地址空间，API中的参数taskID是contextID，根据该参数创建根页表。目前暂时不考虑一个buffer被多个kernel使用的情况，对于共享buffer，当做每个kernel一份来处理。

