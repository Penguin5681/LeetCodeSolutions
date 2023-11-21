// 1814. Count Nice Pairs in an Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> freq;
        long long nicePairCount = 0;

        for (auto it : nums) {
            int diff = it - rev(it);
            nicePairCount = (nicePairCount + freq[diff]) % MOD;
            freq[diff]++;
        }
        return static_cast<int>(nicePairCount);
    }

    int rev(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + n % 10;
            n /= 10;
        }
        return r;
    }
};

signed main() {

}