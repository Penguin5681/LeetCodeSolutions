// 1704. Determine if String Halves Are Alike

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        for (int i = 0; i < s.size() / 2; i++) {
            if (isVowel(s[i]))
                count++;
            if (isVowel(s[s.size() - 1 - i]))
                count--;
        }
        return count == 0;
    }

    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
    }
};

signed main() {
    Solution s;
    cout << s.halvesAreAlike("book");
    cout << '\n' << s.halvesAreAlike("textbook");
}