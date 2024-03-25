// 442. Find All Duplicates in an Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> rsl;
        unordered_map<int, int> mp;

        for (const auto it : nums) {
            mp[it]++;
        }

        for (const auto it : mp) {
            if (it.second == 2)
                rsl.push_back(it.first);
        }

        return rsl;
    }
};

signed main() {}