// 17. Letter Combinations of a Phone Number

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    vector<string> rsl;
    map<int, string> digitMap; 
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "") return rsl;
        digitMap[2] = "abc";
        digitMap[3] = "def"; 
        digitMap[4] = "ghi";
        digitMap[5] = "jkl";
        digitMap[6] = "mno";
        digitMap[7] = "pqrs";
        digitMap[8] = "tuv";
        digitMap[9] = "wxyz";
        string curr = "";
        createCombinations(digits, curr, 0);
        return rsl;
    }
private:
    void createCombinations(string digits, string &curr, int idx) {
        if (idx == digits.length()) {rsl.push_back(curr); return;}
        for (auto ch : digitMap[digits[idx] - '0']) {
            curr.push_back(ch);
            createCombinations(digits, curr, idx + 1);
            curr.pop_back();
        }
    }
};

signed main(void) {
    Solution S;
    string s = "2";
    for (auto i : S.letterCombinations(s)) cout << i << " ";
}