// 77. Combinations

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    vector<vector<int>> rsl;
    void util(int idx, int k, vector<int> &current, int n) {
        if (current.size() == k) {
            rsl.push_back(current);
            return;
        }

        for (int i = idx; i < n + 1; ++i) {
            current.push_back(i);
            util(i + 1, k, current, n);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        util(1, k, current, n);
        return rsl;
    }
};

signed main(void) {

}