// 1535. Find the Winner of an Array Game

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int current = arr[0];
        int win_count = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > current) {
                current = arr[i];
                win_count = 0;
            }
            if (++win_count == k)
                break;
        }
        return current;
    }
};

signed main() {

}