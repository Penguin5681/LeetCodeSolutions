// 2225. Find Players With Zero or One Losses

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> losses;
        vector<vector<int>> result(2); 

        for (auto& match : matches) {
            losses[match[1]]++;  
            if (losses[match[0]] == 0) {  
                losses[match[0]] = 0;  
            }
        }

        for (auto& entry : losses) {
            if (entry.second == 0) {
                result[0].push_back(entry.first);
            } else if (entry.second == 1) {
                result[1].push_back(entry.first);
            }
        }

        sort(result[0].begin(), result[0].end());
        sort(result[1].begin(), result[1].end());

        return result;
    }
};

int main() {
    
}