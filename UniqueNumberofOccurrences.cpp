// 1207. Unique Number of Occurrences

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurrenceCount;
    
        for (int num : arr) 
            occurrenceCount[num]++;
    
        unordered_set<int> uniqueCounts;

        for (const auto& entry : occurrenceCount) 
            if (!uniqueCounts.insert(entry.second).second) 
                return false;

        return true;
    }
};

signed main() {

}