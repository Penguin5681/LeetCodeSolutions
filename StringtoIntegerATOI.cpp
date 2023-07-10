// 8. String to Integer (atoi)

#include <bits/stdc++.h>

using namespace std;

class Solution {
private: bool isNegative = false; int rsl = 0;
public:
    int myAtoi(string s) {
        if (s.size() == 0) return 0;
        int idx = 0;
            while (idx < s.size() and s[idx] == ' ')
                idx++;
        if (idx < s.size()) {
            if (s[idx] == '-') {
                isNegative = true;
                idx++;
            }
            else if (s[idx] == '+') {
                isNegative = false;
                idx++;
            }
        }
        while (idx < s.size() and isdigit(s[idx])) {
            int newDigit = s[idx] - '0';
            if (rsl > (INT_MAX / 10) or rsl == INT_MAX / 10 and newDigit > 7) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            rsl = (rsl * 10) + newDigit;
            idx++;
        }
        return isNegative ? -rsl : rsl;
    }
};

signed main(void) {

}