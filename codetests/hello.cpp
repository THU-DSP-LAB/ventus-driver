#include <iostream>
#include <vector>
#include "vt_utils.h"

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


void testp(int** p) {
    for (int i = 0; i < 5; ++i) {
        (*p)++;
    }
}

int main() {
    //binary search
/*    vector<int>v{ 8,11,19,23,27,33,45,55,67,98 };
    vector<int>x{8};
    x.insert(x.begin(), 3);
    cout << *(x.end() -1 ) << endl;
    for(auto it : x ) cout << it <<endl;
    cout << search_binary(x, 4);*/

 /*   int a = 65;
    cout << aligned_size(a, 64)<<endl;
    return 0;
*/
    int * p = new int[10];
    for (int i = 0; i < 10; ++i) {
        p[i] = i;
    }
    cout << *p << endl;
    testp(&p);
    cout << *p << endl;
}