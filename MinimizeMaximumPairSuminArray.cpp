// 1877. Minimize Maximum Pair Sum in Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int rsl = 0;

        for (int i = 0; i < nums.size() / 2; i++) 
            rsl = max(rsl, nums[i] + nums[nums.size() - i - 1]);
        
        return rsl;
    }
};

signed main() {
    vector<int> num = {3,5,2,3};
    Solution s;
    cout << s.minPairSum(num);
}