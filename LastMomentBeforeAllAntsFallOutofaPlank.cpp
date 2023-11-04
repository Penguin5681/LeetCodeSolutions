// 1503. Last Moment Before All Ants Fall Out of a Plank

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int max_time_left = 0;
        int max_time_right = 0;
        
        for (int position : left) 
            max_time_left = max(max_time_left, position);

        for (int position : right) 
            max_time_right = max(max_time_right, n - position);

        return max(max_time_left, max_time_right);
    }
};

signed main() {

}