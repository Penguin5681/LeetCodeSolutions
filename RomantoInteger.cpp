#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int rsl = 0;
        unordered_map<char, int> MP = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < s.length(); ++i) {
            if (MP[s[i]] < MP[s[i + 1]]) {
                rsl -= MP[s[i]];
            }
            else rsl += MP[s[i]];
        }
        return rsl;
    }
};

signed main(void) {
    Solution s;
    cout << s.romanToInt("LVIII");     
}