// 1657. Determine if Two Strings Are Close

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        unordered_map<char, int> freq1, freq2;
        for (char c : word1) {
            freq1[c]++;
        }
        for (char c : word2) {
            freq2[c]++;
        }

        unordered_set<char> chars1, chars2;
        for (char c : word1) {
            chars1.insert(c);
        }
        for (char c : word2) {
            chars2.insert(c);
        }

        if (chars1 != chars2) {
            return false;
        }

        unordered_set<int> freqSet1, freqSet2;
        for (auto& entry : freq1) {
            freqSet1.insert(entry.second);
        }
        for (auto& entry : freq2) {
            freqSet2.insert(entry.second);
        }

        return freqSet1 == freqSet2;
    }
};

signed main() {

}