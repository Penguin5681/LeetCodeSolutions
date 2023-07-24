// 43. Multiply Strings

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" or num2 == "0") return "0";
        vector<int> num(num1.size() + num2.size(), 0);
        string rsl = "";
        
        for (int i = num1.size() - 1; i >= 0; --i) {
            for (int j = num2.size() - 1; j >= 0; --j) {
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                num[i + j] += num[i + j + 1] / 10;
                num[i + j + 1] %= 10;
            }
        }
        int idx = 0;
        while (idx < num.size() and num[idx] == 0) ++idx; // skip zeros at beginning
        while (idx < num.size()) rsl.push_back(num[idx++] + '0');

        return rsl;
    }
};

signed main(void) {
    Solution s;
    string num1 = "8647832";
    string num2 = "473984792";

    cout << s.multiply(num1, num2);
}
// 4,09,89,40,85,17,70,944