// 1758. Minimum Changes To Make Alternating Binary String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        int operationsStartWithZero = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && s[i] != '0') {
                operationsStartWithZero++;
            } else if (i % 2 == 1 && s[i] != '1') {
                operationsStartWithZero++;
            }
        }
        
        int operationsStartWithOne = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && s[i] != '1') {
                operationsStartWithOne++;
            } else if (i % 2 == 1 && s[i] != '0') {
                operationsStartWithOne++;
            }
        }
        
        return min(operationsStartWithZero, operationsStartWithOne);
    }
};

signed main() {

}