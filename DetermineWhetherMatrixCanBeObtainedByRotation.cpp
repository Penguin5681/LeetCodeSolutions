// 1886. Determine Whether Matrix Can Be Obtained By Rotation

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if (mat == target) return true;
        int n = mat.size();
        auto transpose = [&](vector<vector<int>> &matrix) {
            for (int i = 0; i < matrix.size(); ++i) {
                for (int j = i + 1; j < matrix.size(); ++j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        };

        auto revRow = [&](vector<vector<int>> &matrix) {
            for (int i = 0; i < matrix.size(); ++i) {
                reverse(matrix[i].begin(), matrix[i].end());
            }
        };

        int degree = 3;
        while (degree-- > 0) {
            transpose(mat);
            revRow(mat);
        if (mat == target) return true;
        }
        return false;
    }
};