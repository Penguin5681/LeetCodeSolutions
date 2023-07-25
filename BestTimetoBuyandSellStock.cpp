// 121. Best Time to Buy and Sell Stock

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Two pointer approach (Sliding Window)
        int left = 0; // left = buy 
        int right = 1; // right = sell
        int max_profit = 0;
        int current_profit;
            while (right < prices.size()) {
                if (prices[left] < prices[right]) {
                    current_profit = prices[right] - prices[left];
                    max_profit = max(max_profit, current_profit);
                }
                else 
                    left = right; right++;
            }
        return max_profit;
    }
};

signed main(void) {

}