// 28. Find the Index of the First Occurrence in a String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = haystack.size(); int y = needle.size();
        if (y == 0) return 0;
        for (int i = 0; i <= x - y; ++i) {
        bool flag = true;
            for (int j = 0; j < y; ++j) {
                if (haystack[i + j] != needle[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) return i;
        }
        return -1;
    }
};

signed main(void) {
    Solution S;
    int rsl = S.strStr("abc", "c");
    cout << rsl;
}