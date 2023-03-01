//
// Created by yzx on 1/30/23.
//

#ifndef VENTUS_DRIVER_TESTLIB_H
#define VENTUS_DRIVER_TESTLIB_H
class Processor{
public:
    Processor();
    ~Processor();

private:

    class Impl;
    Impl* impl_;
};
#endif //VENTUS_DRIVER_TESTLIB_H
