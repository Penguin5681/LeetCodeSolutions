// 409. Longest Palindrome

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    int oddCount = 0;
    unordered_map<char, int> mp;
public:
    int longestPalindrome(string s) {
        for (char ch : s) {
            mp[ch]++;
            if (mp[ch] % 2 == 1) oddCount++;
            else oddCount--;
        }
        if (oddCount > 1) return s.length() - oddCount + 1;
        return s.length();
    }
};

signed main(void) {
    Solution s;
    cout << s.longestPalindrome("abccccdd"); // 7
    cout << endl << s.longestPalindrome("a"); // 1;
}