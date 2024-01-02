// 2610. Convert an Array Into a 2D Array With Conditions

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) 
            return a.second > b.second;  
        else 
            return a.first < b.first;     
        
    }

    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> frequency;
        for (int num : nums) 
            frequency[num]++;

        vector<pair<int, int>> sortedNums;
        for (const auto& entry : frequency) 
            sortedNums.push_back(entry);

        sort(sortedNums.begin(), sortedNums.end(), compare);

        vector<vector<int>> result;
        for (const auto& entry : sortedNums) {
            int num = entry.first;
            int freq = entry.second;

            for (int i = 0; i < freq; ++i) {
                if (i >= result.size()) 
                    result.push_back({num});
                else 
                    result[i].push_back(num);
                
            }
        }
        return result;
    }
};

int main() {
    
}