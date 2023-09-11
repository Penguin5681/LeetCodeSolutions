// 1282. Group the People Given the Group Size They Belong To

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> tmp;
        vector<vector<int>> rsl;

        for (int i = 0; i < groupSizes.size(); i++) {
            int size = groupSizes[i];
            tmp[size].push_back(i);

            if (tmp[size].size() == size) {
                rsl.push_back(tmp[size]);
                tmp[size].clear();
            }
        }
        return rsl;
    }
};

signed main() {

}