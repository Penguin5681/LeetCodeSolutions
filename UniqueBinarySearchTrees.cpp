// 96. Unique Binary Search Trees

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        if (n <= 1) return 1;
        int rsl = 0;
        for (int i = 0; i <= n - 1; ++i) {
            rsl += numTrees(i) * numTrees(n - 1 - i);
        }      
        return rsl;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.numTrees(3);
}
