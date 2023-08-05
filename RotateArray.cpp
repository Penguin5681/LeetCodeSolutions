// 189. Rotate Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    void reverse(vector<int> &nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
            k %= nums.size();
            reverse(nums, 0, nums.size() - 1);
            reverse(nums, 0, k - 1);
            reverse(nums, k, nums.size() - 1);
    }
};

signed main(void) {

}