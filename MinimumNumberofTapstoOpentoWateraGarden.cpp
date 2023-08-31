// 1326. Minimum Number of Taps to Open to Water a Garden

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int min = 0;
        int max = 0;
        int cnt = 0;
            while (max < n) {
                for (int i = 0; i < ranges.size(); ++i) {
                    if (i - ranges[i] <= min and i + ranges[i] >= max) 
                        max = i - ranges[i];
                }
                if (max == min) 
                    return -1;
                cnt++; min = max;
            }
            return cnt;
    }
};

signed main() {}