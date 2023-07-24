// 2553. Separate the Digits in an Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
private: 
    vector<int> rsl;
public:
    vector<int> separateDigits(vector<int>& nums) {
        for (const auto it : nums) {
            string str_tmp = to_string(it);
            for (const auto it : str_tmp)
                rsl.push_back(it - '0');
        }
        return rsl;
    }
};

signed main(void) {

}