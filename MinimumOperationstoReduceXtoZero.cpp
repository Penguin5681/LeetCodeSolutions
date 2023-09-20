#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int rsl = 0;
        int current_sum = 0;
        int target = 0;
        for (auto it : nums)
            target += it;
        target -= x;

        if (target == 0)
            return nums.size();

        int i = 0;
        for (auto j = 0; j < nums.size(); j++) {
            current_sum += nums[j];
            while (i <= j and current_sum > target) {
                current_sum -= nums[i];
                i++;
            }
            if (current_sum == target) rsl = max(rsl, j - i + 1);
        }

        return rsl ? rsl - nums.size() : -1;
    }
};

signed main() {

}