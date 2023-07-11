// 9. Palindrome Number

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 or x != 0 and x % 10 == 0) {return false;}
        int revNum = 0;
            while (x > revNum) {
                revNum = (revNum * 10) + (x % 10);
                x /= 10;
            }    
        return x == revNum or x == revNum / 10;
    }
};

signed main(void) {

}