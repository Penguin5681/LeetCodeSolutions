// 62. Unique Paths

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    map<string, int> mp;
public:
    int uniquePaths(int m, int n) {
        const string key = to_string(m) + "," + to_string(n);
        if (m == 0 or n == 0)
            return 0;
        if (m == 1 and n == 1)
            return 1;
        if (mp[key])
            return mp[key];

        mp[key] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
        return mp[key];
    }
};

signed main(void) {
    
}