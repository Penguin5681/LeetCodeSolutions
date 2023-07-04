// 137. Single Number II

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> MP;
        for (auto i : nums) {
            MP[i]++;
        }
        int ans;
        for (auto i : MP) {
            if (i.second == 1)
                ans = i.first;
        }
        return ans;
    }
};

signed main(void) {

}