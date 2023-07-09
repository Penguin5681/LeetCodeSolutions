// 633. Sum of Square Numbers

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    using ll = long long;
    bool judgeSquareSum(int c) {
        if (c == 0 or c == 1) return true;
        ll left = 0;
        ll right = pow(c, 0.5);
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            ll sumSquare = pow(left, 2) + pow(right, 2);
            if (sumSquare == c) return true;
            else if (sumSquare > c) right--;
            else left++;
        }
        return false;
    }
};

signed main(void) {

}