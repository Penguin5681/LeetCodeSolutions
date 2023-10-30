// 1356. Sort Integers by The Number of 1 Bits

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            
            int countA = countSetBits(a);
            int countB = countSetBits(b);
            
            if (countA == countB) {
                return a < b;
            }

            return countA < countB; 
        });

        return arr;
    }
};


signed main() {
    
}