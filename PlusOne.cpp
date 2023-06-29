// 66. Plus One

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> rsl;
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] == 9) 
                digits[i] = 0;
            else {
                digits[i] += 1;
                return digits;
            }
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};

signed main(void) {
    Solution s;   
}