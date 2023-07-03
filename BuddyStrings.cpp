// 859. Buddy Strings

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        if (s == goal) {
            vector<int> frequencyArray(26, 0);
            for (const auto it : s) {
                frequencyArray[it - 'a']++;
                if (frequencyArray[it - 'a'] == 2) return true;
            }
        }

        vector<int> idx;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != goal[i]) {
                idx.push_back(i);
            }
            if (idx.size() > 2) return false;
        }
        return idx.size() == 2 and s[idx[1]] == goal[idx[0]] and s[idx[0]] == goal[idx[1]];
    }
};

signed main(void) {
    Solution s;
    if (s.buddyStrings("ab", "ba")) cout << "yes";
    else cout << "no";
}