// 1291. Sequential Digits

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    const string NUM = "123456789";
    vector<int> ans;
public:
    vector<int> sequentialDigits(int low, int high) {
        for (int i = 0; i < NUM.size(); i++) {
            string temp = "";
            for (int j = i; j < NUM.size(); j++) {
                temp += NUM[j];
                int num = stoi(temp);
                if (low <= num and num <= high)
                    ans.push_back(num);
            }
        }
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

signed main() {
    Solution s;
    
    for (auto it : s.sequentialDigits(100, 300))
        cout << it << " ";

    cout << endl;

    for (auto it : s.sequentialDigits(1000, 13000))
        cout << it << " ";
}