// 808. Soup Servings

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
public:
    double sol(int a, int b, vector<vector<double>> &dp) {
        if (a <= 0 and b <= 0) return 0.5;
        if (a <= 0) return 1;
        if (b <= 0) return 0;
        if (dp[a][b] != -1) return dp[a][b];

        double ans = 0;
        ans += sol(a - 100, b - 0, dp);
        ans += sol(a - 75, b - 25, dp);
        ans += sol(a - 50, b - 50, dp);
        ans += sol(a - 25, b - 75, dp);

        return dp[a][b] = ans * 0.25;
    }

    double soupServings(int n) {
        if (n > 10000) return 1;
        vector<vector<double>> dp(n + 1, vector<double>(n + 1, -1));
        return sol(n, n, dp);
    }
};

signed main(void) {

}
