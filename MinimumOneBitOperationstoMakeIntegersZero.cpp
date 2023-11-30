// 1611. Minimum One Bit Operations to Make Integers Zero

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumOneBitOperations(int n) {
        std::unordered_map<int, int> memo;
        return dfs(n, memo);
    }

private:
    int dfs(int n, std::unordered_map<int, int>& memo) {
        if (n == 0) {
            return 0;
        }
        
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        int msb = 31 - __builtin_clz(n);  
        int result;
        
        if (msb == 0) {
            result = 1 + dfs(n ^ 1, memo);
        } else {
            result = (1 << (msb + 1)) - 1 - dfs(n ^ (1 << msb), memo);
        }

        memo[n] = result;
        return result;
    }
};

signed main() {

}