// 64. Minimum Path Sum

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int minSum = 0;
        for (int i = 0; i < m; i++) {
            minSum += grid[0][i];
            grid[0][i] = minSum;
        }
        minSum = 0;

        for (int i = 0; i < n; i++) {
            minSum += grid[i][0];
            grid[i][0] = minSum;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                grid[i][j] = min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
            }
        }
        return grid[n - 1][m - 1];
    }
};

signed main(void) {
    
}