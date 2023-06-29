// 217. Contains Duplicate

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> M;
        for (int i : nums) {
            M[i]++;
        }
        for (auto pr : M) {
            if (pr.second >= 2)
            return true;
        }
        return false;
    }
};

class newSolution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size() - 1; ++i) {
                if (nums[i] == nums[i + 1]) return true;
            }
            return false;
        }
};

// Driver code

int main(void) {
    vector<int> nums = {1, 2, 3, 4};
    newSolution s;
    cout << s.containsDuplicate(nums);
}