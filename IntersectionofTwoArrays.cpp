// 349. Intersection of Two Arrays

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        vector<int> rsl;
        for (auto it : s1) {
            if (s2.find(it) != s2.end())
                rsl.push_back(it);
        }

        return rsl;
    }
};

signed main() {

}