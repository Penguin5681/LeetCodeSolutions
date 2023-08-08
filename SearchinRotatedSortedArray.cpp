// 33. Search in Rotated Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        
        while (low < high) {
            int mid = (low + high) / 2;
            float n = (nums[mid] < nums[0]) == (target < nums[0]) ? nums[mid] : target < nums[0] ? -INFINITY : INFINITY;
            if (target > n) low = mid + 1;
            else if (target < n) high = mid;
            else return mid;
        }
        return -1;
    }
};

signed main(void) {

}