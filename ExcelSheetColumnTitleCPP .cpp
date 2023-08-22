// 168. Excel Sheet Column Title
#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num = columnNumber;
        string rsl;

        while (num > 0) {
            rsl = char('A' + (num - 1) % 26) + rsl;
            num = (num - 1) % 26;
        }
//        reverse(rsl.begin(), rsl.end());
        return rsl;
    }
};