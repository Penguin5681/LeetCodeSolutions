// 507. Perfect Number

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> divisors;
        for (int i = 1; i < num; ++i)
            if (num % i == 0) {divisors.push_back(i);}
        int sum = 0;
        for (const auto it : divisors) 
            sum += it;
        
        return sum == num;
    }
};

signed main(void) {}