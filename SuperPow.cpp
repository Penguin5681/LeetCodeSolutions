// 372. Super Pow

#include <bits/stdc++.h>

using namespace std;

const int mod_max = 1337;
const int phi = 1140;

class Solution {
private: 
    int pow(int x, int n, int modulo) {
        int __ = 1;
        for (x %= modulo; n; x = x * x % modulo, n >>= 1) 
            if (n & 1) 
                __ = __ * x % modulo;
        return __;
    }
public:
    int superPow(int a, vector<int>& b) {
        if (a == 1) return 1;
        if (a % mod_max == 0) return 0;
        int p = 0;
            for (const auto it : b) {
                p = (p * 10 + it) % phi;
            }
            if (p == 0) p += phi;
        return pow(a, p, mod_max);
    }
};

signed main(void) {

}