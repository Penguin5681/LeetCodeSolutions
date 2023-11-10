// 1743. Restore the Array From Adjacent Pairs

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
    {
        unordered_map<int, vector<int>> graph;
        for (auto &prs : adjacentPairs)
        {
            int u = prs[0], v = prs[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        unordered_set<int> visitedVert;
        queue<int> que;
        que.push(adjacentPairs[0][0]);
        int lastVertVist = -1;
        while (!que.empty())
        {
            auto currVert = que.front();
            lastVertVist = currVert;
            que.pop();
            visitedVert.insert(currVert);
            for (auto neigh : graph[currVert])
            {
                if (!visitedVert.count(neigh))
                    que.push(neigh);
            }
        }
        visitedVert.clear();
        vector<int> orgArr;
        buildArray(lastVertVist, graph, orgArr, visitedVert);
        return orgArr;
    }

private:
    void buildArray(int src, unordered_map<int, vector<int>> &graph, vector<int> &orgArr, unordered_set<int> &visitedVert)
    {
        if (visitedVert.count(src))
        {
            return;
        }
        visitedVert.insert(src);
        orgArr.push_back(src);
        for (auto neigh : graph[src])
        {
            if (!visitedVert.count(neigh))
                buildArray(neigh, graph, orgArr, visitedVert);
        }
    }
};

signed main()
{
}