// 58. Length of Last Word

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int last_count = 0; bool flag = false;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == ' ' and flag) 
                break;
            if (s[i] != ' ') {
                flag = true;
                last_count++;
            }
        }    
        return last_count;
    }
};

signed main() {

}