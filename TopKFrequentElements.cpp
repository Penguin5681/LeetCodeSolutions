// 347. Top K Frequent Elements

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> MP;
        for (auto i : nums)
            MP[i]++;
        vector<pair<int, int>> P(MP.begin(), MP.end());
        sort(P.begin(), P.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.second > b.second;
        });
        vector<int> ans;
        for (int i = 0; i < k and i < P.size(); ++i) {
            ans.push_back(P[i].first);
        }
        return ans;
    }
};

// Driver Code

signed main(void) {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    Solution s;
    vector<int> V = s.topKFrequent(nums, k);
    for (int i : V) cout << i << " ";
}