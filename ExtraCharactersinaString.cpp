// 2707. Extra Characters in a String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int> dp(s.size() + 1, s.size() + 1);
        dp[0] = 0;

        unordered_set<string> dictionary_set(dictionary.begin(), dictionary.end());
        for (int i = 1; i <= s.size(); i++) {
            dp[i] = dp[i - 1] + 1;
                for (int j = 1; j <= i; j++) {
                    if (dictionary_set.find(s.substr(i - j, j)) != dictionary_set.end())
                        dp[i] = min(dp[i], dp[i - j]);
                }
        }
        return dp.back();
    }
};

signed main() {}
