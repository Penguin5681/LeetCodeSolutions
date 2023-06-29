// 4. Median of Two Sorted Arrays

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums2.size(); ++i) 
            nums1.push_back(nums2[i]);   

        sort(nums1.begin(), nums1.end());
        
        int n = nums1.size();
        
        if (n % 2 != 0) return nums1[n / 2];
        return (nums1[n / 2] + nums1[n / 2 - 1]) / 2.00000;
    }
};

signed main(void) {
    Solution s;
    vector<int>  nums1 = {1,2}, nums2 = {3,4};
    cout << s.findMedianSortedArrays(nums1, nums2); // 2.5
}