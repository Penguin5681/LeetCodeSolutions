// 2147. Number of Ways to Divide a Long Corridor

#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

class Solution {
public:
    int numberOfWays(string corridor) {
        int n = corridor.size();
        vector<int> dp(n + 1, 0);  
        dp[0] = 1;

        vector<int> first(n + 1, -1);  
        vector<int> last(n + 1, -1);   

        first[0] = 0;
        last[0] = 0;

        int prefixSeatCount = 0;  

        for (int i = 1, prefixIndex; i <= n; i += 1) {
            prefixSeatCount += corridor[i - 1] == 'S';

            
            if (!(prefixSeatCount > 0 && prefixSeatCount % 2 == 0)) {
                continue;
            }

            prefixIndex = prefixSeatCount - 2;

            
            dp[i] = 1L * dp[first[prefixIndex]] * (last[prefixIndex] - first[prefixIndex] + 1) % MOD;

            
            if (first[prefixSeatCount] == -1) {
                first[prefixSeatCount] = i;
            }
            last[prefixSeatCount] = i;
        }

        return dp[n];
    }
};

int main() {
    Solution solution;
    string a = "SSPPSPS";
    string b = "PPSPSP";
    string c = "S";
    cout << solution.numberOfWays(a) << " " << solution.numberOfWays(b) << " " << solution.numberOfWays(c);
    return 0;
}
