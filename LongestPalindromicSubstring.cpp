// 5. Longest Palindromic Substring

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
string rsl = "";
    void util(string &str, int left, int right) {
        while (left >= 0 and right < str.size()) {
            if (str[left] != str[right]) break;
            left--; right++;
        }
        if (rsl.size() < right - left)
            rsl = str.substr(left + 1, right - left - 1);
    }
public:
    string longestPalindrome(string s) {
        for (int i = 0; i < s.size(); ++i) {
            util(s, i, i); util(s, i, i + 1);
        }
        return rsl;
    }
};

signed main(void) {

}