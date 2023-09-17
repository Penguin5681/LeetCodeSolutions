// 11. Container With Most Water

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int rsl = 0;
        int left = 0;
        int right = height.size() - 1;
            while (left <= right) {
                int current_area = (right - left) * min(height[left], height[right]);
                rsl = max(rsl, current_area);
                if (height[left] < height[right])
                    left++;
                else
                    right--;
            }
            return rsl;
    }
};

signed main() {
    Solution s;
    vector<int> V = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(V);
}