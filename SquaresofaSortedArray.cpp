// 977. Squares of a Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        auto square = [&](int a) {return a * a;};

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = square(nums[i]);
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};

signed main() {
    vector<int> v = {-4,-1,0,3,10};
    vector<int> v1 = {-7,-3,2,3,11};

    Solution s;
    for (auto it : s.sortedSquares(v))
        cout << it << " ";

    cout << '\n';

    for (auto it : s.sortedSquares(v1))
        cout << it << " ";
}