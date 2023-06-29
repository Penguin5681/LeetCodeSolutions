// 14. Longest Common Prefix

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string rsl = "";
        sort(strs.begin(), strs.end());
        string firstWord = strs[0];
        string lastWord = strs[strs.size() - 1];
        for (int i = 0; i < min(firstWord.size(), lastWord.size()); ++i) {
            if (firstWord[i] != lastWord[i]) return rsl;
            else rsl += firstWord[i];
        }
        return rsl;
    }
};

signed main(void) {
    Solution s;
    vector<string> st = {"flower","flow","flight"};
    cout << s.longestCommonPrefix(st);
}