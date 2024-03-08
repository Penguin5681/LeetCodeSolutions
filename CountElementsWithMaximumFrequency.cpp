// 3005. Count Elements With Maximum Frequency

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;

        for (const auto num : nums) 
            mp[num]++;

        int maxNum = -1;
        for (const auto it : mp) 
            maxNum = max(maxNum, it.second);

        int rsl = 0;
        for (const auto it : mp) {
            if (maxNum == it.second)
                rsl += it.second;
        }      

        return rsl;
    }
};

signed main() {}