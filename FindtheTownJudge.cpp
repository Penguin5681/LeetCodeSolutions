// 997. Find the Town Judge

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n + 1, 0);  
        vector<int> outDegree(n + 1, 0); 

        for (const auto& relation : trust) {
            outDegree[relation[0]]++;
            inDegree[relation[1]]++;
        }

        for (int i = 1; i <= n; ++i) {
            if (inDegree[i] == n - 1 && outDegree[i] == 0) {
                return i; 
            }
        }

        return -1;
    }
};

signed main() {
    Solution s;
    vector<vector<int>> trust1 = {{1, 2}};
    vector<vector<int>> trust2 = {{1, 3}, {2, 3}};

    cout << s.findJudge(2, trust1) << endl;
    cout << s.findJudge(3, trust2);
}