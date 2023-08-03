// 342. Power of Four

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int i = 0; ; ++i) {
            if (pow(4, i) == n) return true;
            else if (pow(4, i) > n) break;
        }      
        return false;
    }
};

signed main(void) {

}