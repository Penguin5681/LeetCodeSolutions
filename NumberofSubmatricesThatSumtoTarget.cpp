// 1074. Number of Submatrices That Sum to Target

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int result = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        for (int col1 = 0; col1 < cols; ++col1) {
            for (int col2 = col1; col2 < cols; ++col2) {
                unordered_map<int, int> prefixSumCount;
                prefixSumCount[0] = 1;
                int currentSum = 0;

                for (int row = 0; row < rows; ++row) {
                    int colSum = matrix[row][col2] - (col1 > 0 ? matrix[row][col1 - 1] : 0);
                    currentSum += colSum;

                    if (prefixSumCount.find(currentSum - target) != prefixSumCount.end()) {
                        result += prefixSumCount[currentSum - target];
                    }

                    prefixSumCount[currentSum]++;
                }
            }
        }

        return result;
    }
};

signed main() {

}