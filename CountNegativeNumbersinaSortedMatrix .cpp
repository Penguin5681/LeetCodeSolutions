// 1351. Count Negative Numbers in a Sorted Matrix

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto it : grid) {
            count += upper_bound(it.rbegin(), it.rend(), -1) - it.rend();
        }
        return abs(count);
    }
};

signed main(void) {}
