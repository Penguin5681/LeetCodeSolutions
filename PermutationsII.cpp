// 47. Permutations II

#include <bits/stdc++.h>

using namespace std;

class Solution {
private: vector<vector<int>> ans;
public:
    void util(vector<int> &V) {
    sort(V.begin(), V.end());
        do {
            ans.push_back(V);
        }
        while (next_permutation(V.begin(), V.end()));
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        util(nums);
        return ans;
    }
};
