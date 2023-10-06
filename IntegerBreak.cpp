// 343. Integer Break

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        if (n == 2 or n == 3) 
            return n - 1;
        
        int rsl = 1;
            while (n > 4) {
                n -= 3;
                rsl *= 3;
            }
        return n * rsl;
    }
};

signed main() {

}