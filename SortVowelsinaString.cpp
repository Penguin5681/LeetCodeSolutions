// 2785. Sort Vowels in a String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        string rsl;
        vector<char> vowels;
        for (auto ch : s) {
            if (string("AEIOUaeiou").find(ch) != string::npos)
                vowels.push_back(ch);
        }
        sort(vowels.begin(), vowels.end(), greater<char>());
        for (auto ch : s) {
            if (string("AEIOUaeiou").find(ch) != string::npos) {
                rsl += vowels.back();
                vowels.pop_back();
            }
            else rsl += ch;
        }
        return rsl;
    }
};

signed main() {

}