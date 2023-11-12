// 258. Add Digits

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int dummy = 0;
        while (num) {
            dummy += num % 10;
            num /= 10;
        }
        if (dummy < 10) return dummy;
        return addDigits(dummy);
    }
};

signed main() {

}