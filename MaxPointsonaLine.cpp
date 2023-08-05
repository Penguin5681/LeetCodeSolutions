#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int result = 0;
        for (int i = 0; i < points.size(); ++i) {
            int same_point = 1;
            unordered_map<double, int> mp;
            for (int j = i + 1; j < points.size(); ++j) {
                if (points[i][0] == points[j][0] and points[i][1] == points[j][1]) same_point++;
                else if (points[i][0] == points[j][0]) mp[INT_MAX]++;
                else {
                    double slope = double(points[i][1] - points[j][1]) / double(points[i][0] - points[j][0]);
                    mp[slope]++;
                }
            }
            int lc_max = 0;
            for (auto it = mp.begin(); it != mp.end(); it++) 
                lc_max = max(lc_max, it->second);
            lc_max += same_point;
            result = max(result, lc_max);
        }
        return result;
    }
};

signed main(void) {
    // Sample Test Case
    // Solution s;
    // vector<vector<int>> points = {{1, 1}, {2, 2}, {3, 3}};
    // cout << s.maxPoints(points);
}