// 2433. Find The Original Array of Prefix Xor

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> arr(n);
        arr[0] = pref[0];

        for (int i = 1; i < n; i++) {
            arr[i] = pref[i] ^ pref[i - 1];
        }

        return arr;
    }
};


signed main(void) {
    Solution s;
    vector<int> pref = {5, 2, 0, 3, 1};
    for (auto it : s.findArray(pref))
        cout << it << " ";
}