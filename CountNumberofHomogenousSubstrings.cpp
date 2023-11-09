#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countHomogenous(string s) {
        int MAX_MOD = 1e9 + 7;
        int count = 1;
        int total = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1])
                count++;
            else
                count = 1;
            total = (total + count) % MAX_MOD;
        }
        return total;
    }
};  

signed main() {}