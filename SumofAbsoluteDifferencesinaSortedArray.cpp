// 1685. Sum of Absolute Differences in a Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    std::vector<int> getSumAbsoluteDifferences(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, 0);

        int rightSum = 0;
        for (int num : nums) 
            rightSum += num;

        int leftSum = 0;
        for (int i = 0; i < n; ++i) {
            rightSum -= nums[i];
            result[i] = (nums[i] * i - leftSum) + (rightSum - nums[i] * (n - 1 - i));
            leftSum += nums[i];
        }

        return result;
    }
};

int main() {
    Solution s;
    vector<int> n = {2, 3, 5};
    for (auto it : s.getSumAbsoluteDifferences(n))
        cout << it << " ";
}