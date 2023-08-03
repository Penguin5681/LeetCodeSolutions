// 231. Power of Two

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0;;++i) {
            if (pow(2, i) == n) return true;
            else if (pow(2, i) > n) break;
        }    
        return false;
    }
};

signed main(void) {

}