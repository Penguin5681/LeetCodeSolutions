// 2643. Row With Maximum Ones

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> rsl{-1, -1};
        for (int i = 0; i < mat.size(); ++i) {
            int ones = count(mat[i].begin(), mat[i].end(), 1);
            if (ones > rsl[1]) {
                rsl = {i, ones};
            }
        }
        return rsl;
    }
};

signed main(void) {
    Solution s;

}