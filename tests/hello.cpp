#include <iostream>
#include<iostream>
#include<vector>
using namespace std;
int search_binary(vector<int>v, int value)
{
    int low = 0;
    int high = v.size() - 1;
    int mid = (low + high) / 2;
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
    vector<int>v{ 8,11,19,23,27,33,45,55,67,98 };
    cout << search_binary(v, 13);
}