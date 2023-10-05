// 229. Majority Element II

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> rsl;
        unordered_map<int, int> mp;
        for (auto it : nums) 
            mp[it]++;

        for (auto it : mp) {
            if (it.second > (int)nums.size() / 3)
                rsl.push_back(it.first);
        }
        return rsl;
    }
};

signed main() {
    // Solution s;
    // vector<int> v = {2, 2};
    // auto rsl = s.majorityElement(v);
    // for (auto it : rsl)
    //     cout << it << " ";
}