// 1335. Minimum Difficulty of a Job Schedule

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (n < d) {
            return -1;  
        }

        unordered_map<string, int> memo;

        int result = dp(jobDifficulty, d, 0, memo);
        
        return result == INT_MAX ? -1 : result;
    }

private:
    int dp(vector<int>& jobDifficulty, int d, int index, unordered_map<string, int>& memo) {
        int n = jobDifficulty.size();

        string key = to_string(d) + "-" + to_string(index);
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }

        if (d == 1) {
            int maxDifficulty = INT_MIN;
            for (int i = index; i < n; ++i) {
                maxDifficulty = max(maxDifficulty, jobDifficulty[i]);
            }
            memo[key] = maxDifficulty;
            return maxDifficulty;
        }

        int minDifficulty = INT_MAX;
        int maxDifficulty = INT_MIN;

        for (int i = index; i < n - d + 1; ++i) {
            maxDifficulty = max(maxDifficulty, jobDifficulty[i]);
            int remainingDifficulty = dp(jobDifficulty, d - 1, i + 1, memo);
            if (remainingDifficulty != -1) {
                minDifficulty = min(minDifficulty, maxDifficulty + remainingDifficulty);
            }
        }

        memo[key] = (minDifficulty == INT_MAX) ? -1 : minDifficulty;

        return memo[key];
    }
};

signed main() {

}