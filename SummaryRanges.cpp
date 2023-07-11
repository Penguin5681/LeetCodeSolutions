// 228. Summary Ranges

#include <bits/stdc++.h>

using namespace std;

class Solution {
private: vector<string> rsl;
public:
    vector<string> summaryRanges(vector<int>& nums) {
        for (auto X(0), Y(0); Y < nums.size(); ++Y) {
            if (Y + 1 == nums.size() or nums[Y + 1] != nums[Y] + 1) {
                rsl.emplace_back(X != Y ? to_string(nums[X]) + "->" + to_string(nums[Y]) : to_string(nums[X]));
                X = 1 + Y;
            }
        }
        return rsl;
    }
};

signed main(void) {

}