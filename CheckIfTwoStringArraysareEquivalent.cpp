// 1662. Check If Two String Arrays are Equivalent

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word1_str = "";
        string word2_str = "";
        for (auto it : word1)
            word1_str += it;
        for (auto it : word2)
            word2_str += it;

        return word1_str == word2_str;
    }
};

signed main() {

}