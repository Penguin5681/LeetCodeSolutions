// 1913. Maximum Product Difference Between Two Pairs

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProductDifference(std::vector<int>& nums) {
        int n = nums.size();

        int max1 = *max_element(nums.begin(), nums.end());
        nums.erase(max_element(nums.begin(), nums.end()));
        int max2 = *max_element(nums.begin(), nums.end());

        int min1 = *min_element(nums.begin(), nums.end());
        nums.erase(min_element(nums.begin(), nums.end()));
        int min2 = *min_element(nums.begin(), nums.end());

        int result = (max1 * max2) - (min1 * min2);
        
        return result;
    }
};

signed main() {

}