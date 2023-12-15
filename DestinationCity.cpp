// 1436. Destination City

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> pathSet;

        for (auto path : paths)  {
            pathSet.insert(path[0]);
            pathSet.insert(path[1]);
        }

        for (auto path : paths)
            pathSet.erase(path[0]);

        return *pathSet.begin();
    }
};

signed main() {

}