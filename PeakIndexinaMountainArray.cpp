// 852. Peak Index in a Mountain Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int begin = 0;
        int end = arr.size() - 1;
        int mid_idx = begin + (end - begin) / 2;
            while (begin <= end) {
                if (arr[mid_idx] < arr[mid_idx + 1])
                    begin = mid_idx + 1;
                else 
                    end = mid_idx;
                mid_idx = begin + (end - begin) / 2;
            }    
        return begin;
    }
};

signed main(void) {

}