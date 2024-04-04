// 1614. Maximum Nesting Depth of the Parentheses

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int rsl = 0;

        for (const auto it : s) {
            if (it == '(')
                maxDepth++;
            else if (it == ')')
                maxDepth--;
            rsl = max(rsl, maxDepth);
        }
        return rsl;
    }
};

signed main() {

}