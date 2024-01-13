// 1347. Minimum Number of Steps to Make Two Strings Anagram

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> A(26, 0);
        vector<int> B(26, 0);

        for (auto ch : s)
            A[ch - 'a']++;
        
        for (auto ch : t)
            B[ch - 'a']++;

        int rsl = 0;

        for (int i = 0; i < 26; i++) 
            if (A[i] > B[i])
                rsl += A[i] - B[i];
            
        return rsl;
    }
};

signed main() {

}