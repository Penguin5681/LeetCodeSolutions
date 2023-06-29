// 48. Rotate Image

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        auto transpose = [&](vector<vector<int>> &V) {
            for (int i = 0; i < V.size(); ++i) {
                for (int j = i + 1; j < V.size(); ++j) 
                    swap(V[i][j], V[j][i]);
            }
        };
        auto reverseCol = [&](vector<vector<int>> &V) {
            for (int i = 0; i < V.size(); ++i) {
                reverse(V[i].begin(), V[i].end());
            }
        };

        transpose(matrix);
        reverseCol(matrix);
    }
};

signed main(void) {
    Solution S;
    vector<vector<int>> M = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (vector<int> i : M) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
    cout << endl;
    S.rotate(M);
    for (vector<int> i : M) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }

}