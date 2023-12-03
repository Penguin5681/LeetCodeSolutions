// 1266. Minimum Time Visiting All Points

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int totalTime = 0;
        int n = points.size();

        for (int i = 1; i < n; ++i) {
            int deltaX = abs(points[i][0] - points[i - 1][0]);
            int deltaY = abs(points[i][1] - points[i - 1][1]);
            totalTime += max(deltaX, deltaY);
        }

        return totalTime;
    }
};

signed main() {
    
}