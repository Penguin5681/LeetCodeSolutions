// 1464. Maximum Product of Two Elements in an Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxA = 0; 
        int maxB = 0;
        for (auto it : nums) {
            if (it > maxA) {
                maxB = maxA;
                maxA = it; 
            }
            else if (it > maxB) 
                maxB = it;
        }
        return (maxA - 1) * (maxB - 1);
    }
};

signed main() {
    
}