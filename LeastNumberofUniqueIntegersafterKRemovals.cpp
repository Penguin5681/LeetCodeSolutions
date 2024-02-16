// 1481. Least Number of Unique Integers after K Removals

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> frequencyMap;
        for (int num : arr) 
            frequencyMap[num]++;

        vector<int> frequencies;
        for (const auto& entry : frequencyMap) 
            frequencies.push_back(entry.second);
        
        sort(frequencies.begin(), frequencies.end());

        int uniqueCount = frequencies.size();
        for (int freq : frequencies) {
            if (k >= freq) {
                k -= freq;
                uniqueCount--;
            } 
            else 
                break;
        }

        return uniqueCount;
    }
};

signed main() {

}