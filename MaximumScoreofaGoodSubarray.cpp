// 1793. Maximum Score of a Good Subarray

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> left(n), right(n);

        stack<int> leftStack;
        for (int i = 0; i < n; i++) {
            while (!leftStack.empty() && nums[i] <= nums[leftStack.top()]) {
                leftStack.pop();
            }
            left[i] = leftStack.empty() ? -1 : leftStack.top();
            leftStack.push(i);
        }

        stack<int> rightStack;
        for (int i = n - 1; i >= 0; i--) {
            while (!rightStack.empty() && nums[i] <= nums[rightStack.top()]) {
                rightStack.pop();
            }
            right[i] = rightStack.empty() ? n : rightStack.top();
            rightStack.push(i);
        }

        int maxScore = 0;

        for (int i = 0; i < n; i++) {
            if (left[i] < k && k < right[i]) {
                int score = nums[i] * (right[i] - left[i] - 1);
                maxScore = max(maxScore, score);
            }
        }

        return maxScore;
    }
};

signed main() {
    
}