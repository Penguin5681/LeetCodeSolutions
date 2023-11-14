// 1930. Unique Length-3 Palindromic Subsequences

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        int count = 0;

        for (char ch = 'a'; ch <= 'z'; ++ch) {
            int first = n, last = -1;

            for (int i = 0; i < n; ++i) {
                if (s[i] == ch) {
                    first = min(first, i);
                    last = max(last, i);
                }
            }

            if (first < last) {
                unordered_map<char, bool> distinctChars;

                for (int i = first + 1; i < last; ++i) {
                    distinctChars[s[i]] = true;
                }

                count += distinctChars.size();      
            }
        }
        return count;
    }  
};

signed main() {

}