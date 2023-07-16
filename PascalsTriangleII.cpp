// 119. Pascal's Triangle II

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> rsl(rowIndex + 1, 0);
        rsl[0] = 1;
        for (int i = 1; i <= rowIndex + 1; i++) 
            for (int j = i; j >= 1; j--) 
                rsl[j] += rsl[j - 1];
        return rsl;
    }
};

signed main(void) {

}