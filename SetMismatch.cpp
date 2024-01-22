// 645. Set Mismatch

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;
        int actualSum = 0;
        int duplicate = 0;

        for (int num : nums) {
            actualSum += num;
            if (count(nums.begin(), nums.end(), num) > 1) {
                duplicate = num;
            }
        }

        int missing = expectedSum - (actualSum - duplicate);

        return {duplicate, missing};
    }
};

signed main() {
    
}