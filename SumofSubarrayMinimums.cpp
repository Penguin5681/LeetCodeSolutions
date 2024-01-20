// 907. Sum of Subarray Minimums

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> s1, s2;

        for (int i = 0; i < n; ++i) {
            while (!s1.empty() && arr[i] < arr[s1.top()]) {
                s1.pop();
            }
            left[i] = s1.empty() ? i + 1 : i - s1.top();
            s1.push(i);
        }

        for (int i = n - 1; i >= 0; --i) {
            while (!s2.empty() && arr[i] <= arr[s2.top()]) {
                s2.pop();
            }
            right[i] = s2.empty() ? n - i : s2.top() - i;
            s2.push(i);
        }

        long long result = 0;
        for (int i = 0; i < n; ++i) {
            result = (result + static_cast<long long>(arr[i]) * left[i] * right[i]) % MOD;
        }

        return static_cast<int>(result);
    }
};

signed main() {

}