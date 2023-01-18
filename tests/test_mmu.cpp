#include <iostream>
#include <cstring>
#include "ventus.h"
#include "processor.h"

using namespace std;
using namespace ventus;

vt_buffer_h staging_buf;
vt_device_h device;

int main() {

    vt_dev_open(&device);
//    vt_start(device, 0, 1);
    test_proc();
    return 0;
}