// 1287. Element Appearing More Than 25% In Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size() / 4;
        unordered_map<int, int> mp;
        for (auto it : arr) 
            mp[it]++;
        int rsl;
        for (auto it : mp)
            if (it.second > n)
                rsl = it.first;      
        return rsl;
    }
};

signed main() {

}