// 2125. Number of Laser Beams in a Bank

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        if (n < 2) {
            return 0;
        }

        int prevOnes = 0;
        int ans = 0;

        for (const auto& row : bank) {
            int currentOnes = 0;
            for (char c : row) {
                currentOnes += c - '0';
            }

            if (currentOnes > 0) {
                ans += prevOnes * currentOnes;
                prevOnes = currentOnes;
            }
        }

        return ans;
    }
};

signed main() {

}