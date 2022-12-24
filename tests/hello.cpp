#include <iostream>
#include <VMMUtest.h>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    VMMUtest* device = new VMMUtest;
    device->eval();
    return 0;
}