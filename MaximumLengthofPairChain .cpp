// 646. Maximum Length of Pair Chain

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int> &V1, const vector<int> &V2){
            return V1[1] < V2[1];
        });
        int current_ = -2000;
        int rsl = 0;
        for (const auto it: pairs) {
            if (it[0] > current_) {
                current_ = it[1];
                rsl++;
            }
        }
        return rsl;
    }
};

signed main() {

}