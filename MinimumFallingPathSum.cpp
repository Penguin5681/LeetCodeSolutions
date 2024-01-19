// 931. Minimum Falling Path Sum

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int left = (j > 0) ? matrix[i - 1][j - 1] : INT_MAX;
                int right = (j < n - 1) ? matrix[i - 1][j + 1] : INT_MAX;
                int down = matrix[i - 1][j];

                matrix[i][j] += min({left, down, right});
            }
        }

        return *min_element(matrix[n - 1].begin(), matrix[n - 1].end());
    }
};

signed main() {

}