// 2108. Find First Palindromic String in the Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const auto it : words) {
            if (isPallindrome(it))
                return it;
        } 
        return "";
    }

private:
    bool isPallindrome(const string s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) 
                return false;
            left++;
            right--;
        }
        return true;
    }
};

signed main() {

}