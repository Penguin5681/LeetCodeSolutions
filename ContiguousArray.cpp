// 525. Contiguous Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> sumIndexMap;
        int maxLength = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += (nums[i] == 0) ? -1 : 1;
            if (sum == 0) 
                maxLength = i + 1;
            else if (sumIndexMap.find(sum) != sumIndexMap.end()) 
                maxLength = max(maxLength, i - sumIndexMap[sum]);
            else 
                sumIndexMap[sum] = i;
        }
        return maxLength;
    }
};


signed main() {

}