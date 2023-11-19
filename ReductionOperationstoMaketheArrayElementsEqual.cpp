// 1887. Reduction Operations to Make the Array Elements Equal

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        vector<int> V(*max_element(nums.begin(), nums.end()) + 1, 0);
        for (int i = 0; i < nums.size();) 
            V[nums[i++]]++;
            
        int x = 1; int y = 0;
        for (int i = *min_element(nums.begin(), nums.end()) + 1; i < V.size(); i++) {
            if (V[i] != 0) {
                y += V[i] * x;
                x++;
            }   
        }
        return y;
    }
};


signed main() {
    Solution s;
    vector<int> v = {7,9,10,8,6,4,1,5,2,3};
    cout << s.reductionOperations(v);
}