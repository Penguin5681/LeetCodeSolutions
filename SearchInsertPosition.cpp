// 35. Search Insert Position

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        if (target > nums[high - 1]) return high;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) return mid;
            else if (target < nums[mid])
                high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

signed main(void) {
    Solution s;
    vector<int> num = {1, 3, 5, 6};
    cout << s.searchInsert(num, 2);
}