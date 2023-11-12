// 815. Bus Routes

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target) {
            return 0; 
        }

        unordered_map<int, unordered_set<int>> stopToBuses;
        for (int i = 0; i < routes.size(); ++i) {
            for (int stop : routes[i]) {
                stopToBuses[stop].insert(i);
            }
        }

        queue<int> q;
        q.push(source);

        unordered_set<int> visitedRoutes;

        int numBuses = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; ++i) {
                int currentStop = q.front();
                q.pop();

                for (int bus : stopToBuses[currentStop]) {
                    if (visitedRoutes.count(bus) == 1) {
                        continue; 
                    }

                    visitedRoutes.insert(bus);

                    for (int nextStop : routes[bus]) {
                        if (nextStop == target) {
                            return numBuses + 1;
                        }
                        q.push(nextStop);
                    }
                }
            }
            numBuses++;
        }
        return -1;
    }
};

signed main() {
    Solution s;
    vector<vector<int>> V = {{1,2,7},{3,6,7}};
    cout << s.numBusesToDestination(V, 1, 6);
}