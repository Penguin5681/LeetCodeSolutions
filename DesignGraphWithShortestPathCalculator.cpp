// 2642. Design Graph With Shortest Path Calculator

#include <bits/stdc++.h>

using namespace std;

class Graph {
private:
    int n;
    unordered_map<int, vector<pair<int, int>>> adjList;

public:
    Graph(int n, vector<vector<int>>& edges) {
        this->n = n;

        for (auto& edge : edges) {
            int from = edge[0];
            int to = edge[1];
            int cost = edge[2];
            adjList[from].push_back({to, cost});
        }
    }

    void addEdge(vector<int> edge) {
        int from = edge[0];
        int to = edge[1];
        int cost = edge[2];
        adjList[from].push_back({to, cost});
    }

    int shortestPath(int node1, int node2) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        unordered_map<int, int> distance;

        pq.push({0, node1});
        distance[node1] = 0;

        while (!pq.empty()) {
            int curNode = pq.top().second;
            int curDist = pq.top().first;
            pq.pop();

            if (curNode == node2) {
                return curDist;
            }

            for (const auto& neighbor : adjList[curNode]) {
                int nextNode = neighbor.first;
                int edgeCost = neighbor.second;
                int newDist = curDist + edgeCost;

                if (!distance.count(nextNode) || newDist < distance[nextNode]) {
                    distance[nextNode] = newDist;
                    pq.push({newDist, nextNode});
                }
            }
        }

        return -1; // If no path exists
    }
};

// signed main() {
    
// }