#include <iostream>
#include <vector>

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

int main() {
    //binary search
/*    vector<int>v{ 8,11,19,23,27,33,45,55,67,98 };
    vector<int>x{8};
    x.insert(x.begin(), 3);
    cout << *(x.end() -1 ) << endl;
    for(auto it : x ) cout << it <<endl;
    cout << search_binary(x, 4);*/


    Processor tmp;

}