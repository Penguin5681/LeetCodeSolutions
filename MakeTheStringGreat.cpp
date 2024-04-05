// 1544. Make The String Great

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        string result = "";
        stack<char> stack;
        for (const auto ch : s) {
            if (!stack.empty() and abs(ch - stack.top()) == 32) {
                stack.pop();
            }
            else 
                stack.push(ch);
        }

        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }
        return result;
    }
};

signed main() {

}