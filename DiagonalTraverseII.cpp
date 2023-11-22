// 1424. Diagonal Traverse II

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> mp;
        int r_cnt = 1;

        for (int i = 0; i < nums.size(); i++) {
            int c_cnt = r_cnt;

            for (int j = 0; j < nums[i].size(); j++) {
                mp[c_cnt].push_back(nums[i][j]);
                c_cnt++;
            }

            r_cnt++;
        }

        vector<int> ans;

        for (int i = 1; i <= mp.size(); i++)
            reverse(mp[i].begin(), mp[i].end());

        for (int i = 1; i <= mp.size(); i++) {
            for (auto it : mp[i])
                ans.push_back(it);
        }

        return ans;
    }
};

signed main() {
    
}