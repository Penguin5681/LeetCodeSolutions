// 42. Trapping Rain Water

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < height.size(); i++) {
            while (!st.empty() and height[st.top()] < height[i]) {
                int current_ = st.top();
                st.pop();
                if (st.empty())
                    break;
                int difference = i - st.top() - 1;
                ans += difference * (min(height[st.top()], height[i]) - height[current_]);
            }
            st.push(i);
        }      
        return ans;
    }
};

signed main() {

}