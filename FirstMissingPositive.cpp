// 41. First Missing Positive

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) 
            mp[nums[i]]++;
        int begin = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(begin) == mp.end())
                break;
            else if (mp.find(begin) != mp.end())
                begin++;
        }
        return begin;
    }
};

signed main () {

}