// 779. K-th Symbol in Grammar

#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n == 1) {
            return 0; 
        }
        
        int mid = (1 << (n - 2)); 
        
        if (k <= mid) {
            return kthGrammar(n - 1, k); 
        } else {
            return 1 - kthGrammar(n - 1, k - mid); 
        }
    }
};

signed main() {
    Solution s;
    cout << s.kthGrammar(2, 2);
}