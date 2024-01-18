// 70. Climbing Stairs

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    unordered_map<int, int> memo;

public:
    int climbStairs(int n) {
        if (memo.find(n) != memo.end())
            return memo[n];
    
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;

        int ways = climbStairs(n - 1) + climbStairs(n - 2);
        memo[n] = ways;
        return ways;
    }
};

signed main() {

}