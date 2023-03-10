#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>


#include "testlib.h"

using namespace std;

int search_binary(vector<int>v, int value)
{
    int low = 0;
    int high = v.size() - 1;
    int mid = (low + high) / 2;
    if (value <= v[low]) return low;
    if (value >= v[high]) return high;

    while (low <= high) {

        if (v[mid] == value) {
            return mid;
        }
        else if (value < v[mid]) {
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
        mid= (low + high) / 2;
    }
    return high;
}


void testp(int* p) {
    *p = 5;
}



int main()
{

}