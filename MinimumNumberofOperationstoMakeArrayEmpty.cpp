// 2870. Minimum Number of Operations to Make Array Empty

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it: nums)
            mp[it]++;

        int count = 0;
        
        for(auto it : mp){
            int t = it.second;
            if (t == 1) 
                return -1;
            
            count += t / 3;
            
            if (t % 3) 
                count++;
        }
        return count;
    }
};

signed main() {

}