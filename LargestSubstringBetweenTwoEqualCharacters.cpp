// 1624. Largest Substring Between Two Equal Characters

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> lastOccurrence;
        int maxLength = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (lastOccurrence.find(s[i]) != lastOccurrence.end()) 
                maxLength = max(maxLength, i - lastOccurrence[s[i]] - 1);
            else 
                lastOccurrence[s[i]] = i;
        }

        return maxLength;
    }
};

signed main() {
    Solution s;
    cout << s.maxLengthBetweenEqualCharacters("");
}