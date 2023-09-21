// 16. 3Sum Closest

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int closest_sum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {
            int x = i + 1;
            int y = nums.size() - 1;
            while (x < y) {
                int current_sum = nums[i] + nums[x] + nums[y];
                if (abs(target - current_sum) < abs(target - closest_sum)) 
                    closest_sum = current_sum;

                if (current_sum < target)
                    x++;
                else
                    y--;
            }
        }
        return closest_sum;
    }
};

signed main() {

}