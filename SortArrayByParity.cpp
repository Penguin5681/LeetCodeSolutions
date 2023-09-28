#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> evens;

        for (auto it : nums) {
            if (it % 2 == 0)
                evens.push_back(it);
        }

        for (auto it : nums) {
            if (it % 2 != 0)
                evens.push_back(it);
        }
        return evens;
    }
};