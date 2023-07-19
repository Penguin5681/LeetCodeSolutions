// 435. Non-overlapping Intervals

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) return 0;

        sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b) {return a[1] < b[1];});    

        vector<int> V = intervals[0];
        int cnt = -1;

        for (auto it : intervals) {
            if (V[1] > it[0]) cnt++;
            else V = it;
        }
        return cnt;
    }
};

signed main(void) {

}