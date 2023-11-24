// 1561. Maximum Number of Coins You Can Get

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int n = piles.size() / 3;
        int result = 0;

        for (int i = 1; i <= n; i++) {
            result += piles[2 * i - 1];
        }

        return result;
    }
};

signed main() {

}