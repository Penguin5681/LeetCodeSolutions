// 27. Remove Element

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[idx] = nums[i]; idx++;
            }
        }
        return idx;
    }
};

signed main(void) {
    Solution s;

}