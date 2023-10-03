#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int rsl = 0;
        for (auto it : nums) 
            rsl += mp[it]++;
        return rsl;
    }
};

signed main() {
    
}