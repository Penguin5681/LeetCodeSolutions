// 1716. Calculate Money in Leetcode Bank

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int curr_day = 1;
        int amount_to_put = 1;

        while (curr_day <= n) {
            total += amount_to_put;
            amount_to_put++;

            if (curr_day % 7 == 0) 
                amount_to_put = max(amount_to_put - 6, 1);
            curr_day++;
        }        
        return total;
    }
};

signed main() {

}