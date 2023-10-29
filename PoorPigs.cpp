// 458. Poor Pigs

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets-- == 1)
            return 0;
        int base = minutesToTest / minutesToDie + 1;
        int rsl = 0;

        while (buckets > 0) {
            buckets = buckets / base;
            rsl++;
        }
        return rsl;
    }
};

signed main() {
    Solution s;
    cout << s.poorPigs(4, 15, 15) << " " << s.poorPigs(4, 15, 30);
}