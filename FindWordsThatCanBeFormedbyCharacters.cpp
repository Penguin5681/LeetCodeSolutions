// 1160. Find Words That Can Be Formed by Characters

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;
        
        unordered_map<char, int> charFrequency;
        for (char c : chars) {
            charFrequency[c]++;
        }

        for (const string& word : words) {
            if (canFormWord(word, charFrequency)) {
                result += word.length();
            }
        }

        return result;
    }

private:
    bool canFormWord(const string& word, unordered_map<char, int>& charFrequency) {
        unordered_map<char, int> wordFrequency;
        for (char c : word) {
            wordFrequency[c]++;
        }

        for (const auto& entry : wordFrequency) {
            if (charFrequency[entry.first] < entry.second) {
                return false;
            }
        }

        return true;
    }
};

signed main() {

}