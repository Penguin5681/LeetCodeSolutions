// 18. 4Sum

#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

class Solution {
private:
    vector<vector<int>> rsl;
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.empty()) return rsl;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            ll targetSum0 = target - nums[i];
                for (int j = i + 1; j < nums.size(); ++j) {
                    ll targetSum1 = targetSum0 - nums[j];
                    int low = j + 1;
                    int high = nums.size() - 1;
                        while (low < high) {
                            int twoSum = nums[low] + nums[high];
                            if (twoSum < targetSum1) {low++;}
                            else if (twoSum > targetSum1) {high--;}
                            else {
                                vector<int> quads(4, 0);
                                quads[0] = nums[i]; quads[1] = nums[j];
                                quads[2] = nums[low]; quads[3] = nums[high];
                                rsl.push_back(quads);
                                while (low < high and nums[low] == quads[2]) {low++;}
                                while (low < high and nums[high] == quads[3]) {high--;}
                            }
                        } 
                        while (j + 1 < nums.size() and nums[j + 1] == nums[j]) {j++;}
                }
                        while (i + 1 < nums.size() and nums[i + 1] == nums[i]) {i++;}
        }
            return rsl;
    }
};

signed main(void) {

}