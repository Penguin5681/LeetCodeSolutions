// 389. Find the Difference

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int rsl = 0;
        for (int i = 0; i < s.length(); ++i) {
            rsl -= s[i];
            rsl += t[i];
        }

        rsl += t[s.size()];
        return rsl;
    }
};

signed main(void) {

}