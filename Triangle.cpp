// 120. Triangle

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> rsl = triangle[triangle.size() - 1];
        for (auto i = rsl.size(); i >= 0; --i) {
            for (auto j = 0; j < triangle.size(); ++j) {
                rsl[i] = triangle[i][j] + min(rsl[j], rsl[j + 1]);
            }
        }   
        return *rsl.begin();
    }
};

signed main(void) {

}