// 367. Valid Perfect Square

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i = 1;; ++i) {
            if (i * i == num) return true;
            if (i * i > num) return false;
        }
    }
};

signed main(void) {
    Solution s;
    cout << s.isPerfectSquare(14);
}