// 2485. Find the Pivot Integer

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        double x = sqrt((n * (n + 1)) / 2);
        return fmod(x, 1.0) != 0 ? -1 : static_cast<int>(x); 
    }
};

signed main() {

}