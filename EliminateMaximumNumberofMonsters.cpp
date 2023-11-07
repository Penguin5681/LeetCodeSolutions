// 1921. Eliminate Maximum Number of Monsters

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> times(n);

        for (int i = 0; i < n; i++) {
            times[i] = (dist[i] + speed[i] - 1) / speed[i]; // Round up division
        }

        sort(times.begin(), times.end());

        int eliminatedMonsters = 0;
        for (int i = 0; i < n; i++) {
            if (times[i] <= eliminatedMonsters) {
                return eliminatedMonsters;
            }
            eliminatedMonsters++;
        }

        return eliminatedMonsters;
    }
};


signed main() {

}