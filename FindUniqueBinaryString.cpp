// 1980. Find Unique Binary String

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> numSet(nums.begin(), nums.end());

        for (int i = 0; i < (1 << nums[0].size()); i++) {
            string binaryString = bitset<18>(i).to_string().substr(18 - nums[0].size());

            if (numSet.find(binaryString) == numSet.end())
                return binaryString;
        }      
        return "";
    }
};

signed main() {
    Solution s;
    vector<string> test = {"111","011","001"};
    cout << s.findDifferentBinaryString(test);
}