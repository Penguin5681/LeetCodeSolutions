// 576. Out of Boundary Paths

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        const int MOD = 1e9 + 7;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove + 1, 0)));

        dp[startRow][startColumn][0] = 1;

        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        int result = 0;

        for (int move = 1; move <= maxMove; ++move) {
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    for (auto& dir : directions) {
                        int ni = i + dir[0];
                        int nj = j + dir[1];

                        if (ni < 0 || ni >= m || nj < 0 || nj >= n) {
                            result = (result + dp[i][j][move - 1]) % MOD;
                        } else {
                            dp[ni][nj][move] = (dp[ni][nj][move] + dp[i][j][move - 1]) % MOD;
                        }
                    }
                }
            }
        }

        return result;
    }
};


signed main() {}