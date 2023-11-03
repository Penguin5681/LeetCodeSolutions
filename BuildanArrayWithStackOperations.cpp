// 1441. Build an Array With Stack Operations

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    const string PUSH = "Push";
    const string POP = "Pop";
    vector<string> rsl;
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int current = 1;
        for (auto it : target) {
            while (current < it) {
                rsl.push_back(PUSH);
                rsl.push_back(POP);
                current++;
            }
            rsl.push_back(PUSH);
            current++;
        }
        return rsl;
    }
};

signed main() {
    Solution s;
    vector<int> t = {1, 3};
    for (auto it : s.buildArray(t, 3))
        cout << it << " ";
}