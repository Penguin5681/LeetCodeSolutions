// 456. 132 Pattern

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if (nums.size() < 3)
            return false;
        stack<int> st;
        int third = INT_MIN;
        
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < third)
                return true;
            while (!st.empty() and st.top() < nums[i]) {
                third = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};

signed main() {

}