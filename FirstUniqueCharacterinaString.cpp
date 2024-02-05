// 387. First Unique Character in a String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charFrequency;

        for (char c : s) 
            charFrequency[c]++;
        
        for (int i = 0; i < s.length(); i++) 
            if (charFrequency[s[i]] == 1) 
                return i; 
            
        return -1; 
    }
};

signed main() {

}