// 242. Valid Anagram

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// Driver Code

int main(void) {
    string s = "anagram";
    string t = "anagarm";
    Solution sT;
    cout << sT.isAnagram(s, t);
}