// 54. Spiral Matrix

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    vector<int> rsl;
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 or matrix[0].size() == 0)
            return rsl;

        int top = 0; int bottom = matrix.size() - 1;
        int left = 0; int right = matrix[0].size() - 1;

        while (left <= right and top <= bottom) {
            for (int i = left; i <= right; i++)
                rsl.push_back(matrix[top][i]);
            top++;

            for (int i = top; i <= bottom; i++) 
                rsl.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    rsl.push_back(matrix[bottom][i]);
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    rsl.push_back(matrix[i][left]);
                left++;
            }
        }
        return rsl;
    }
};

signed main() {

}