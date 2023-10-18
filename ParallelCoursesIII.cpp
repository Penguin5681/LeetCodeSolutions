// 2050. Parallel Courses III

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> graph(n);
        vector<int> inDegree(n, 0);

        for (const vector<int>& rel : relations) {
            int prevCourse = rel[0] - 1; 
            int nextCourse = rel[1] - 1;
            graph[prevCourse].push_back(nextCourse);
            inDegree[nextCourse]++;
        }

        queue<int> q;
        vector<int> completionTime(n, 0);

        for (int i = 0; i < n; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
                completionTime[i] = time[i];
            }
        }

        int minMonths = 0;

        while (!q.empty()) {
            int currentCourse = q.front();
            q.pop();

            for (int nextCourse : graph[currentCourse]) {
                inDegree[nextCourse]--;
                completionTime[nextCourse] = max(completionTime[nextCourse], completionTime[currentCourse] + time[nextCourse]);

                if (inDegree[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }

            minMonths = max(minMonths, completionTime[currentCourse]);
        }

        return minMonths;
    }
};

signed main() {

}