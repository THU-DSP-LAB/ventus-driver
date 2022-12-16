#include <cstdint>
#include "vt_memory.h"

class TLBundleA{ // req
public:
    uint8_t opcode;
    uint32_t size;
    uint32_t source;
    uint64_t address;
    uint32_t mask;
    uint64_t *data;
    uint8_t ready; // controller -> gpu, output
    uint8_t valid; // gpu -> controller, input
//    TLBundleA(uint32_t num_thread){  }
//    ~TLBundleA(){  }
};

class TLBundleD{ // rsp
public:
    uint8_t opcode;
    uint32_t size;
    uint32_t source;
    uint64_t *data;
    uint8_t ready; // gpu -> controller, input
    uint8_t valid; // controller -> gpu, output
//    TLBundleD(uint32_t num_thread){  }
//    ~TLBundleD(){  }
};

class Controller{
public:
    TLBundleA *req;
    TLBundleD *rsp;
    uint64_t *data;
    int default_delay = 3;
    Controller(uint32_t num_thread){
        req = new TLBundleA();
        rsp = new TLBundleD();
        num_ = num_thread;
        data = new uint64_t[num_thread];
    }
    ~Controller(){
        req->data = nullptr;
        rsp->data = nullptr;
        delete req;
        delete rsp;
        delete [] data;
    }
    void controller_reset(){
        rsp_valid_ = 0; req_ready_ = 0;
        // request
        req->ready = req_ready_;
        // response
        rsp->valid = rsp_valid_;
        rsp->size = 0;
        rsp->opcode = 0;
        rsp->source = 0;
        for(auto i = 0; i < num_; i++)
            data[i] = 0;

        time_remain_ = 0;
        rw_ = 0;
    }

    void controller_eval(uint8_t clk, Memory *mem){
        if(clk){
            rsp_ready_ = rsp->ready;
            req_valid_ = req->valid;
            return;
        }
        if(time_remain_ != 0){
            req->ready = 0;
            rsp->valid = 0;
            --time_remain_;
            return;
        }
        if(rw_ != 0){ // response
            rsp_valid_ = 1;
            req_ready_ = 0;
            if(rsp_ready_ && rsp->valid){
                rsp->size = size_;
                rsp->source = source_;
                rsp->opcode = rw_;
                if(rw_ == 4) // read
                    mem->readWordsPhysical<uint64_t>(addr_, num_, rsp->data);
                if(rw_ == 1) // write
                    mem->writeWordsPhysical<uint64_t>(addr_, num_, data, &mask_);
                rw_ = 0;
                rsp_valid_ = 0;
                req_ready_ = 1;
            }
        }
        else{ // request
            rsp_valid_ = 0;
            req_ready_ = 1;
            if(req_valid_ && req->ready){
                rw_ = req->opcode;
                addr_ = req->address;
                size_ = req->size;
                source_ = req->source;
                mask_ = req->mask;
                if(rw_ == 1){
                    for (auto i = 0; i < num_; i++)
                        data[i] = req->data[i];
                }
                time_remain_ = default_delay;
                rsp_valid_ = 0;
                req_ready_ = 0;
            }
        }
        rsp->valid = rsp_valid_;
        req->ready = req_ready_;
    }
private:
    uint32_t time_remain_;
    uint8_t rw_, num_;
    uint8_t req_valid_, rsp_ready_; // i
    uint8_t req_ready_, rsp_valid_; // o
    uint64_t addr_;
    uint32_t size_, source_, mask_;
};
