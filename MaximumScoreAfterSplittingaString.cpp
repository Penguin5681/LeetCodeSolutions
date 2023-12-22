// 1422. Maximum Score After Splitting a String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int maxScore = 0;
        int zerosOnLeft = 0;
        int onesOnRight = count(s.begin(), s.end(), '1');

        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '0') {
                zerosOnLeft++;
            } else {
                onesOnRight--;
            }

            int currentScore = zerosOnLeft + onesOnRight;
            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }
};

signed main() {
    Solution s;
    cout << s.maxScore("1111");
}