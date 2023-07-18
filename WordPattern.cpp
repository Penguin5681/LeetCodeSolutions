// 290. Word Pattern

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> Mp_1; // pattern
        unordered_map<string, int> Mp_2; // string;

        istringstream in(s);
        string word;

        int it = 0;
            for (word; in >> word; it++) {
                if (it == pattern.size() or Mp_1[pattern[it]] != Mp_2[word])
                    return false;
                
                Mp_1[pattern[it]] = Mp_2[word] = it + 1;

            }
        return it == pattern.size();
    }
};

signed main(void) {

}