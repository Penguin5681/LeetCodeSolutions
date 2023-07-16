// 118. Pascal's Triangle

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rsl(numRows);
        for (int i = 0; i < numRows; ++i) {
            rsl[i].resize(i + 1);
            rsl[i][0] = rsl[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                rsl[i][j] = rsl[i - 1][j - 1] + rsl[i - 1][j];
            }
        }
        return rsl;
    }
};

signed main(void) {

}