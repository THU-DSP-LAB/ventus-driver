#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string.h>
#include <ventus.h>
#include <chrono>

//#include "processor.h"
#include "MemConfig.h"
#include "vt_config.h"

//using namespace ventus;

#define RT_CHECK(_expr)                                         \
   do {                                                         \
     int _ret = _expr;                                          \
     if (0 == _ret)                                             \
       break;                                                   \
     printf("Error: '%s' returned %d!\n", #_expr, (int)_ret);   \
	 cleanup();			                                              \
     exit(-1);                                                  \
   } while (false)

///////////////////////////////////////////////////////////////////////////////

const char* kernel_file = "kernel.bin";
int test = 0;
uint32_t count = 0;
int default_taskID = 0;
int default_kernelID = 0;

vt_device_h device = nullptr;


host_port_t* input_sig = new host_port_t;

struct kernel_arg_t {
  uint32_t count;
  uint64_t src_addr;
  uint64_t dst_addr;
} kernel_arg;


static void show_usage() {
   std::cout << "Vortex Test." << std::endl;
   std::cout << "Usage: [-t testno][-k: kernel][-n words][-h: help]" << std::endl;
}

static void parse_args(int argc, char **argv) {
  int c;
  while ((c = getopt(argc, argv, "n:t:k:h?")) != -1) {
    switch (c) {
    case 'n':
      count = atoi(optarg);
      break;
    case 't':
      test = atoi(optarg);
      break;
    case 'k':
      kernel_file = optarg;
      break;
    case 'h': 
    case '?': {
      show_usage();
      exit(0);
    } break;
    default:
      show_usage();
      exit(-1);
    }
  }
}

void cleanup() {

  if (device) {

    vt_dev_close(device);
  }
}

uint64_t shuffle(int i, uint64_t value) {
  return (value << i) | (value & ((1 << i)-1));;
}

int run_memcopy_test(uint32_t dev_addr, uint64_t value, int num_blocks, int taskID) {
  int errors = 0;
  
  auto time_start = std::chrono::high_resolution_clock::now();

  int num_blocks_8 = (64 * num_blocks) / 8;

    uint64_t *p1 = new uint64_t[num_blocks_8];
    void *src_addr = p1;
    uint64_t *p2 = new uint64_t[num_blocks_8];
    void *dst_addr = p2;
    uint64_t buf_size = sizeof(uint64_t)*num_blocks_8;

  // update source buffer
  for (int i = 0; i < num_blocks_8; ++i) {
      ((uint64_t*)src_addr)[i]= shuffle(i, value);
      std::cout << "src_data[" <<i<<"]: "<< std::hex<<((uint64_t*)src_addr)[i]<< std::endl;
  }

  /*for (int i = 0; i < num_blocks; ++i) {
    std::cout << "data[" << i << "]=0x";
    for (int j = 7; j >= 0; --j) {
      std::cout << std::hex << ((uint64_t*)vt_host_ptr(staging_buf))[i * 8 +j];
    }
    std::cout << std::endl;
  }*/
  
  // write source buffer to local memory
    uint64_t *buf_addr = new uint64_t;
    RT_CHECK(vt_buf_alloc(device, buf_size, buf_addr, READ_ONLY, default_taskID, default_kernelID));

    std::cout << "write source buffer to local memory" << std::endl;
  auto t0 = std::chrono::high_resolution_clock::now();
  RT_CHECK(vt_copy_to_dev(device, *buf_addr, src_addr, buf_size, default_taskID, default_kernelID));
  auto t1 = std::chrono::high_resolution_clock::now();

  // clear destination buffer
  for (int i = 0; i < num_blocks_8; ++i) {
      ((uint64_t*)dst_addr)[i] = 0;
  }

  // read destination buffer from local memory
  std::cout << "read destination buffer from local memory" << std::endl;
  auto t2 = std::chrono::high_resolution_clock::now();
  RT_CHECK(vt_copy_from_dev(device, *buf_addr, dst_addr, buf_size, default_taskID, default_kernelID));
  auto t3 = std::chrono::high_resolution_clock::now();

  // verify result
  std::cout << "verify result" << std::endl;
  for (int i = 0; i < num_blocks_8; ++i) {
    auto curr = ((uint64_t*)dst_addr)[i];
    auto ref = shuffle(i, value);
    if (curr != ref) {
      std::cout << "error at 0x" << std::hex << (dev_addr + 8 * i)
                << ": actual 0x" << curr << ", expected 0x" << ref << std::endl;
      ++errors;
    }
  } 
  
  if (errors != 0) {
    std::cout << "Found " << std::dec << errors << " errors!" << std::endl;
    std::cout << "FAILED!" << std::endl;
    return 1;
  }
    std::cout << "No errors found, memory copy test passed!" << std::endl;

  auto time_end = std::chrono::high_resolution_clock::now();

  double elapsed;
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count();  
  printf("upload time: %lg ms\n", elapsed);
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(t3 - t2).count();  
  printf("download time: %lg ms\n", elapsed);
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_start).count();  
  printf("Total elapsed time: %lg ms\n", elapsed);


        uint64_t *test_addr = new uint64_t;
        RT_CHECK(vt_buf_alloc(device, buf_size, test_addr, READ_WRITE, default_taskID, default_kernelID));
        RT_CHECK(vt_copy_to_dev(device, *test_addr, src_addr, buf_size, default_taskID, default_kernelID));
		for (int i = 0; i < num_blocks_8; ++i) {
			((uint64_t*)dst_addr)[i] = 0;
		}
        RT_CHECK(vt_copy_from_dev(device, *test_addr, dst_addr, buf_size, default_taskID, default_kernelID));
        std::cout << "verify result" << std::endl;
        for (int i = 0; i < num_blocks_8; ++i) {
            auto curr = ((uint64_t*)dst_addr)[i];
            auto ref = shuffle(i, value);
            if (curr != ref) {
                std::cout << "error at 0x" << std::hex << (dev_addr + 8 * i)
                          << ": actual 0x" << curr << ", expected 0x" << ref << std::endl;
                ++errors;
            }
        }
        vt_buf_free(device, buf_size, test_addr, default_taskID, default_kernelID);

		delete test_addr;

  vt_buf_free(device, buf_size, buf_addr, default_taskID, default_kernelID);

  delete buf_addr;

  return 0;
}

/*
int run_kernel_test(const kernel_arg_t& kernel_arg,
                    uint32_t buf_size, 
                    uint32_t num_points,
                    int taskID) {
  int errors = 0; 

  auto time_start = std::chrono::high_resolution_clock::now();
  
  // update source buffer
  {
    auto buf_ptr = (int32_t*)vt_host_ptr(staging_buf);
    for (uint32_t i = 0; i < num_points; ++i) {
      buf_ptr[i] = i;
    }
  }
  std::cout << "upload source buffer" << std::endl;
  auto t0 = std::chrono::high_resolution_clock::now();
  RT_CHECK(vt_copy_to_dev(staging_buf, kernel_arg.src_addr, buf_size, taskID));
  auto t1 = std::chrono::high_resolution_clock::now();

  // clear destination buffer
  {
    auto buf_ptr = (int32_t*)vt_host_ptr(staging_buf);
    for (uint32_t i = 0; i < num_points; ++i) {
      buf_ptr[i] = 0xdeadbeef;
    }
  }  
  std::cout << "clear destination buffer" << std::endl;
  RT_CHECK(vt_copy_to_dev(staging_buf, kernel_arg.dst_addr, buf_size, taskID));

  // start device
  std::cout << "start execution" << std::endl;
  auto t2 = std::chrono::high_resolution_clock::now();
  RT_CHECK(vt_start(device, taskID, 1, input_sig));
  RT_CHECK(vt_ready_wait(device, MAX_TIMEOUT));
  auto t3 = std::chrono::high_resolution_clock::now();

  // read destination buffer from local memory
  std::cout << "read destination buffer from local memory" << std::endl;
  auto t4 = std::chrono::high_resolution_clock::now();
  RT_CHECK(vt_copy_from_dev(staging_buf, kernel_arg.dst_addr, buf_size, taskID));
  auto t5 = std::chrono::high_resolution_clock::now();

  
  // verify result
  std::cout << "verify result" << std::endl;
  for (uint32_t i = 0; i < num_points; ++i) {
    int32_t curr = ((int32_t*)vt_host_ptr(staging_buf))[i];
    int32_t ref = i;
    if (curr != ref) {
      std::cout << "error at result #" << std::dec << i
                << std::hex << ": actual 0x" << curr << ", expected 0x" << ref << std::endl;
      ++errors;
    }
  } 
  
  if (errors != 0) {
    std::cout << "Found " << std::dec << errors << " errors!" << std::endl;
    std::cout << "FAILED!" << std::endl;
    return 1;
  }

  auto time_end = std::chrono::high_resolution_clock::now();

  double elapsed;
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count();  
  printf("upload time: %lg ms\n", elapsed);
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(t3 - t2).count();  
  printf("execute time: %lg ms\n", elapsed);
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(t5 - t4).count();  
  printf("download time: %lg ms\n", elapsed);
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_start).count();  
  printf("Total elapsed time: %lg ms\n", elapsed);

  return 0;
}
*/

/// 生成一个随机的kernel.bin文件，用于kernel test
/// \param taskID
/// \return
void create_test_kernel_bin(int taskID, size_t value) {
    std::ofstream fout(kernel_file);
    int count_block = 64;
    int block_size = 64;
    for (int i = 0; i < count_block; ++i) {
        for (int j = 0; j < block_size; ++j) {
            fout << i*count_block + block_size;
        }
    }
    fout.close();
}

int main(int argc, char *argv[]) {

    size_t value = 2;

    input_sig->host_req_wg_id = HOST_REQ_WG_ID;
    input_sig->host_req_num_wf = HOST_REQ_NUM_WF;
    input_sig->host_req_wf_size = HOST_REQ_WF_SIZE;
    input_sig->host_req_start_pc = HOST_REQ_START_PC;
    input_sig->host_req_vgpr_size_total = HOST_REQ_VGPR_SIZE_TOTAL;
    input_sig->host_req_sgpr_size_total = HOST_REQ_SGPR_SIZE_TOTAL;
    input_sig->host_req_lds_size_total = HOST_REQ_LDS_SIZE_TOTAL;
    input_sig->host_req_gds_size_total = HOST_REQ_GDS_SIZE_TOTAL;
    input_sig->host_req_vgpr_size_per_wf = HOST_REQ_VGPR_SIZE_PER_WF;
    input_sig->host_req_sgpr_size_per_wf = HOST_REQ_SGPR_SIZE_PER_WF;
    input_sig->host_req_gds_baseaddr = HOST_REQ_GDS_BASEADDR;

  // parse command arguments
  parse_args(argc, argv);

  if (count == 0) {
    count = 1;
  }

  // open device connection
  std::cout << "open device connection" << std::endl;
  RT_CHECK(vt_dev_open(&device));
  
  uint64_t max_cores;
  //RT_CHECK(vt_dev_caps(device, VT_CAPS_MAX_CORES, &max_cores));
  // points是什么？
  uint32_t num_points = count;
  uint32_t num_blocks = (num_points * sizeof(int64_t) + 63) / 64;
  uint32_t buf_size   = num_blocks * 64;

  std::cout << "number of points: " << num_points << std::endl;
  std::cout << "buffer size: " << buf_size << " bytes" << std::endl;

  // allocate device memory
//  RT_CHECK(vt_mem_alloc(device, buf_size, &kernel_arg.src_addr, default_taskID));
  // kernel_arg.src_addr = value;
//  RT_CHECK(vt_root_mem_alloc(device, default_taskID));
  // kernel_arg.dst_addr = value;

  kernel_arg.count = num_points;

  std::cout << "dev_src=" << std::hex << kernel_arg.src_addr << std::endl;
  std::cout << "dev_dst=" << std::hex << kernel_arg.dst_addr << std::endl;

  // allocate shared memory

  std::cout << "allocate shared memory" << std::endl;
  uint32_t alloc_size = std::max<uint32_t>(buf_size, sizeof(kernel_arg_t));
  uint64_t *buf_addr = new uint64_t;
  uint64_t buf_addr1;

	RT_CHECK(vt_buf_alloc(device, 0x200, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 0x200, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 0x200, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 0x200, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 0x200, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 0x200, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 12, &buf_addr1, 0,0,0));
	RT_CHECK(vt_buf_alloc(device, 65536, &buf_addr1, 1,0,0));
  RT_CHECK(vt_buf_alloc(device, 0x10000000, &buf_addr1, 0,0,0));

  RT_CHECK(vt_buf_alloc(device, alloc_size, buf_addr, READ_ONLY, default_taskID, default_kernelID));

  // run tests  
  if (0 == test || -1 == test) {
    std::cout << "run memcopy test" << std::endl;
    RT_CHECK(run_memcopy_test(kernel_arg.src_addr, 0x0badf00d40ff40ff, num_blocks, default_taskID));
  }

  void* metadata;

    vt_start(device,metadata, 0);
/*  if (1 == test || -1 == test) {
//      vt_mem_free(device, 0, default_taskID);
      create_test_kernel_bin(default_taskID, 0x0badf00d40ff40ff);
    // upload program
    /// @note 写到了vt_device的成员ram_里
    std::cout << "upload program" << std::endl;  
    RT_CHECK(vt_upload_kernel_file(device, kernel_file, default_taskID));
    {
        RT_CHECK(vt_copy_to_dev(staging_buf, kernel_arg.src_addr, buf_size, default_taskID));
        RT_CHECK(vt_copy_to_dev(staging_buf, kernel_arg.src_addr, 24, default_taskID));
    }
    // upload kernel argument
    /// @note 指定一块上下文的内存空间，地址指针为结构体staging_buf，其中包括了结果要保存的内存地址，
    /// GPU的运行结果会保存在这个指针指向的地址，然后copy回主机的内存中
    std::cout << "upload kernel argument" << std::endl;
    {
      auto buf_ptr = (void*)vt_host_ptr(staging_buf);
      memcpy(buf_ptr, &kernel_arg, sizeof(kernel_arg_t));
      RT_CHECK(vt_copy_to_dev(staging_buf, BUF_PARA_BASE, sizeof(kernel_arg_t), default_taskID));
    }


    std::cout << "run kernel test" << std::endl;
    RT_CHECK(run_kernel_test(kernel_arg, buf_size, num_points, default_taskID));
  }*/

  // cleanup
  std::cout << "cleanup" << std::endl;  
  cleanup();

  std::cout << "Test PASSED" << std::endl;  

  delete input_sig;
  return 0;
}