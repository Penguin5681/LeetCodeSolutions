// 1688. Count of Matches in Tournament

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int matchesPlayed = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                matchesPlayed += n / 2;
                n /= 2;
            }
            else {
                matchesPlayed += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        
        return matchesPlayed;
    }
};

signed main() {

}