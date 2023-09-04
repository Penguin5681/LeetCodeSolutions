// 345. Reverse Vowels of a String

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    static bool isVowel(char ch) {
        return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'
        or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U';
    }

public:
    string reverseVowels(string s) {
        int lo = 0;
        int hi = s.size() - 1;

        while (lo <= hi) {
            if (isVowel(s[lo]) and isVowel(s[hi])) {
                swap(s[lo], s[hi]);
                lo++; hi--;
            }
            else if (!isVowel(s[lo]) or isVowel(s[hi]))
                lo++;
            else if (isVowel(s[lo]) or !isVowel(s[hi]))
                hi--;
            else {
                lo++;
                hi--;
            }
        }
        return s;
    }
};

signed main() {

}