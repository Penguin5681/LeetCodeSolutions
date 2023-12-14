// 2482. Difference Between Ones and Zeros in Row and Column

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> onesRow(grid.size(), 0);
        vector<int> onesCol(grid[0].size(), 0);
        vector<int> zerosRow(grid.size(), 0);
        vector<int> zerosCol(grid[0].size(), 0);

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                onesRow[i] += grid[i][j];
                onesCol[j] += grid[i][j];
                zerosRow[i] += 1 - grid[i][j];
                zerosCol[j] += 1 - grid[i][j];
            }
        }

        vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size(), 0));
    
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) 
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
        }
        
        return diff;
    }
};

signed main() {

}