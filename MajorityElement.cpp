// 169. Majority Element

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int rsl = 0;
        unordered_map<int, int> mp;
        for (auto it : nums) 
            mp[it]++;

        for (auto it : mp) {
            if (it.second > (int)nums.size() / 2)
                rsl = it.first;
        }

        return rsl;
    }
};

signed main() {
    // Solution s;
    // vector<int> v = {2,2,1,1,1,2,2};
    // cout << s.majorityElement(v);
}