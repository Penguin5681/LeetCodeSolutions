// 1582. Special Positions in a Binary Matrix

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int special_idx_count = 0;
        vector<int> rowSum(mat.size(), 0);
        vector<int> colSum(mat[0].size(), 0);
    
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[0].size(); ++j) {
                rowSum[i] += mat[i][j];
                colSum[j] += mat[i][j];
            }
        }

        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[0].size(); ++j) {
                if (mat[i][j] == 1 and rowSum[i] == 1 and colSum[j] == 1)
                    special_idx_count++;
            }
        }

        return special_idx_count;
    }
};

signed main() {

}