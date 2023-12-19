// 661. Image Smoother

#include <bits/stdc++.h>

using namespace std;

class Solution {
    
    int getCellValue(const vector<vector<int>>& img, int row, int col, int numRows, int numCols) {
        if (row < 0 || col < 0 || row >= numRows || col >= numCols) {
            return -1;
        }
        return img[row][col];
    }

    int getAverageOfNeighboringCells(const vector<vector<int>>& img, int row, int col, int numRows, int numCols) {
        int countOfValidCells = 0, sum = 0; 

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int neighborRow = row + i, neighborCol = col + j;
                int value = getCellValue(img, neighborRow, neighborCol, numRows, numCols);
                if (value != -1) {
                    sum += value;
                    ++countOfValidCells;
                }
            }
        }

        return sum / countOfValidCells; 
    }

public:
    vector<vector<int>> imageSmoother(const vector<vector<int>>& img) {
        int numRows = img.size();      
        int numCols = img[0].size();   
        vector<vector<int>> result(numRows, vector<int>(numCols));

        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                int average = getAverageOfNeighboringCells(img, i, j, numRows, numCols);
                result[i][j] = average;
            }
        }

        return result;
    }
};

signed main() {}