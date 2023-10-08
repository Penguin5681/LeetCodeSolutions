// 1458. Max Dot Product of Two Subsequences

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    long long DP[510][510][2];
    bool filled = false;
public:
    long long maxDotProduct(vector<int>& nums1, vector<int>& nums2, int i = 0, int j = 0, bool flag = false) {
        if (!filled) {
            memset(DP, -1, sizeof(DP));
            filled = true;
        }
        if (DP[i][j][flag] != -1)
            return DP[i][j][flag];
        if (i == nums1.size() or j == nums2.size())
            return !flag ? INT_MIN : 0;
        long long rsl = nums1[i] * nums2[j] + maxDotProduct(nums1, nums2, i + 1, j + 1, true);
        rsl = max(rsl, maxDotProduct(nums1, nums2, i + 1, j + 1, flag));
        rsl = max(rsl, maxDotProduct(nums1, nums2, i, j + 1, flag));
        rsl = max(rsl, maxDotProduct(nums1, nums2, i + 1, j, flag));
        return DP[i][j][flag] = rsl;
    }
};

signed main() {
    Solution s;
    vector<int> v = {13,-7,12,-15,-7,8,3,-7,-5,13,-15,-8,5,7,-1,3,-11,-12,2,-12};   
    vector<int> v0 = {-1,13,-4,-2,-13,2,-4,6,-9,13,-8,-3,-9};
    cout << s.maxDotProduct(v, v0);
}