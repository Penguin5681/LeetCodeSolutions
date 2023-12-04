// 2264. Largest 3-Same-Digit Number in String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string rsl = "";
        for (int i = 0; i < num.size() - 2; ++i) {
            char digit = num[i];
            if (digit == num[i + 1] and digit == num[i + 2]) 
                if (rsl.empty() or digit > rsl[0])
                    rsl = string(3, digit);
        }
        return rsl;
    }
};

signed main() {
    Solution s;
    cout << s.largestGoodInteger("6777133339");
}