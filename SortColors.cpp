#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++) {
            while(i >= l && i <= r && (nums[i] == 0 || nums[i] == 2)) {
                if(nums[i] == 0) swap(nums[i], nums[l++]);
                else if(nums[i] == 2) swap(nums[i], nums[r--]);
            }
        }
    }
};

signed main() {
    
}