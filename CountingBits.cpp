//  338. Counting Bits

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> rsl(n + 1);
        for (int i = 0; i <= n; i++) 
            rsl[i] = __builtin_popcount(i);
        return rsl;
    }
};