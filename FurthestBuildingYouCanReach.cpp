// 1642. Furthest Building You Can Reach

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> bricksUsed; 

        for (int i = 0; i < heights.size() - 1; ++i) {
            int diff = heights[i + 1] - heights[i];

            if (diff > 0) { 
                bricksUsed.push(diff);

                if (bricksUsed.size() > ladders) {
                    bricks -= bricksUsed.top();
                    bricksUsed.pop();
                }

                if (bricks < 0) {
                    return i; 
                }
            }
        }

        return heights.size() - 1;
    }
};

signed main() {
    Solution s;
    vector<int> h1 = {4,2,7,6,9,14,12};
    vector<int> h2 = {4,12,2,7,3,18,20,3,19};
    vector<int> h3 = {14,3,19,3};

    cout << s.furthestBuilding(h1, 5, 1);
    cout << endl << s.furthestBuilding(h2, 10, 2) << endl;
    cout << s.furthestBuilding(h3, 17, 0);
}