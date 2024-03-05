// 1750. Minimum Length of String After Deleting Similar Ends

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        if (s.size() == 1) 
            return 1;
        
        int idx = 0;

        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (s[left] == s[right]) {
                while (s[left] == s[left + 1] and left < right) left++;
                while (s[right] == s[right - 1] and left < right) right--;
                left++;
                right--;
            }
            else
                break;
        }

        int rsl = right - left + 1;
        if (rsl < 0) return 0;
        return rsl;
    }
};

signed main() {

}