// 344. Reverse String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void swap(char &ch1, char &ch2) {
        char temp = ch1;
        ch1 = ch2;
        ch2 = temp;
    }
public:
    void reverseString(vector<char>& s) {
        int lo = 0;
        int hi = s.size() - 1;
        while (lo <= hi) {
            swap(s[lo], s[hi]);
            lo++;
            hi--;
        }          
    }
};

signed main() {

}