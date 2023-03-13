#define GLOBALMEM_BASE  0x40000000
#define GLOBALMEM_SIZE  0x40000000
#define RODATA_BASE GLOBALMEM_BASE ///< 只读空间，用于主机搬运buffer
#define RWDATA_BASE     0x60000000  ///< device可读写，保存结果
#define BUF_PARA_BASE   0x80000000 ///< buffer的参数的数量和每个buffer的大小，第一个放参数数量，第二个放第一个参数的大小

#define LOCALMEM_BASE   0x10000000
 
#define BUFSIZE         0x10000000

#define READ_WRITE 0
#define READ_ONLY 1