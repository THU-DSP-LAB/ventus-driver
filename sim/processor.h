/**
 * @file processor.h
 * @brief GPGPU设备的声明
 * @author yangzexia (yang-zx17@qq.com)
 * @version 1.0
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022  yangzexia@THU-DSPLAB
 * 
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2022-11-16 <td>1.0     <td>yangzexia     <td>创建
 * </table>
 */
#pragma once
namespace ventus {

class RAM;

class Processor{
public:
    Processor();
    ~Processor();

    void attach_ram(RAM* ram);
    int start();
    int run();

private:

    class Impl;
    Impl* impl_;
};
}