// 735. Asteroid Collision

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ast;
        for (int i = 0; i < asteroids.size(); ++i) {
            if (ast.empty() or asteroids[i] > 0)
                ast.push(asteroids[i]);
            else {
                while (!ast.empty() and ast.top() > 0 and ast.top() < abs(asteroids[i])) 
                    ast.pop();
                if (!ast.empty() and ast.top() == abs(asteroids[i]))
                    ast.pop();
                else {
                    if (ast.empty() or ast.top() < 0)
                        ast.push(asteroids[i]);
                }
            }
        }
        vector<int> rsl(ast.size());
        for (int i = ast.size() - 1; i >= 0; i--) {
            rsl[i] = ast.top();
            ast.pop();
        }      
        return rsl;
    }
};

signed main(void) {

}