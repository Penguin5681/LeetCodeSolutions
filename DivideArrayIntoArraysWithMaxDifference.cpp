// 2966. Divide Array Into Arrays With Max Difference

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i += 3) {
            if (i + 2 < n && nums[i + 2] - nums[i] <= k) {
                result.push_back({nums[i], nums[i + 1], nums[i + 2]});
            } else {
                return {};
            }
        }
        
        return result;
    }
};

signed main() {
    Solution s;

    vector<int> v = {1,3,4,8,7,9,3,5,1};
    for (auto it : s.divideArray(v, 2)) {
        for (auto vt : it)
            cout << vt << " ";
    }
}