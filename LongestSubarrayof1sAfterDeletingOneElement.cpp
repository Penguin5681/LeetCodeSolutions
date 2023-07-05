#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count0s = 0;
        int left = 0; int rsl = 0;
            for (int idx = 0; idx < nums.size(); ++idx) {
                if (nums[idx] == 0) {
                    count0s++;
                }
                while (count0s > 1) {
                    if (nums[left] == 0)
                        count0s--;
                    left++;
                }
                rsl = max(rsl, idx - left - count0s + 1);
            }
        return (rsl == nums.size()) ? rsl - 1 : rsl;
    }
};

signed main(void) {
    Solution s;

}