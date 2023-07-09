// 69. Sqrt(x)

#include <bits/stdc++.h>

using namespace std;

// Epic Solution

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int first  = 0;
        int last = x;
        while (first <= last) {
            int mid = (first + last) / 2;
            if (pow(mid, 2) == x) return mid;
            else if (pow(mid, 2) > x) last = mid - 1;
            else first = mid + 1;
        }
        return last;
    }
};

// Not so Epic Solution
/*
    class Solution {
    public:
    int mySqrt(int x) {
        return pow(x, 0.5);
    }
};
*/