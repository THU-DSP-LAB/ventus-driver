#include <iostream>
#include <cstdint>
using namespace std;

typedef void* vt_device_h;

int test(vt_device_h *p) {
    *p = new int;
    int *a = new int;
    *a = 1;
    *p = a;
    delete a;
    return 0;
}

int main() {
    cout << "Hello, World!" << endl;
    vt_device_h p = nullptr;
    int* b;
    b = new int;
    *b = 2;
    test(&p);
//    p = b;
    cout << *b << endl;
    cout << *(int*)p;

    return 0;
}