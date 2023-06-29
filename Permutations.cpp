// 46. Permutations

#include <bits/stdc++.h>

using namespace std;

class Solution {
private: vector<vector<int>> rsl;
public:
    void helper(vector<int>& nums, int idx) {
        if (idx == nums.size()) {rsl.push_back(nums); return;}
        for (int i = idx; i < nums.size(); ++i) {
            swap(nums[i], nums[idx]);
            helper(nums, idx + 1);
            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0);
        return rsl;
    }
};

signed main(void) {
    Solution solve;
}