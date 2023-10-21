// 1425. Constrained Subsequence Sum

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n, 0);
        deque<int> maxSumIndices;

        int maxSum = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (!maxSumIndices.empty())
                dp[i] = max(nums[i], dp[maxSumIndices.front()] + nums[i]);
            else
                dp[i] = nums[i];

            while (!maxSumIndices.empty() && i - maxSumIndices.front() >= k)
                maxSumIndices.pop_front();

            while (!maxSumIndices.empty() && dp[i] >= dp[maxSumIndices.back()])
                maxSumIndices.pop_back();

            maxSumIndices.push_back(i);
            maxSum = max(maxSum, dp[i]);
        }

        return maxSum;
    }
};

signed main() {
    Solution solution;
    vector<int> nums1 = {10, 2, -10, 5, 20};
    int k1 = 2;
    cout << solution.constrainedSubsetSum(nums1, k1) << endl;  // Output: 37

    vector<int> nums2 = {-1, -2, -3};
    int k2 = 1;
    cout << solution.constrainedSubsetSum(nums2, k2) << endl;  // Output: -1

    vector<int> nums3 = {10, -2, -10, -5, 20};
    int k3 = 2;
    cout << solution.constrainedSubsetSum(nums3, k3) << endl;  // Output: 23

    return 0;
}