// 1897. Redistribute Characters to Make All Strings Equal

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> charCount;
        for (const string& word : words) {
            for (char c : word) {
                charCount[c]++;
            }
        }

        int numWords = words.size();
        for (const auto& entry : charCount) {
            if (entry.second % numWords != 0) {
                return false;
            }
        }

        return true;
    }
};

signed main() {

}