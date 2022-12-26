#include <iostream>

using namespace std;

struct page{
    uint8_t *data;
};

int main(){
    uint8_t *x;
    x = new uint8_t[4];
    uint32_t a = 0x12345678;
    for(int i = 0; i < 4; i++){
        x[i] = *((uint8_t *)&a + i);
    }
    return 0;
}