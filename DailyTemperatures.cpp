// 739. Daily Temperatures

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> st;

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                result[prevIndex] = i - prevIndex;
            }
            st.push(i);
        }

        return result;
    }
};

signed main() {
    Solution s;
    vector<int> c1 = {73,74,75,71,69,72,76,73};
    vector<int> c2 = {30,40,50,60};
    vector<int> c3 = {30,60,90};
    
    for (auto it : s.dailyTemperatures(c1))
        cout << it << " " ;

    cout << endl;

    for (auto it : s.dailyTemperatures(c2))
        cout << it << " " ;

    cout << endl;

    for (auto it : s.dailyTemperatures(c3))
        cout << it << " " ;
}