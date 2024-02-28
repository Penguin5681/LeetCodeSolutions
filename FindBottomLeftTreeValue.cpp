// 513. Find Bottom Left Tree Value

#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int end = 0;

        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        while (!nodeQueue.empty()) {
            int count = nodeQueue.size();

            for (int i = 0; i < count; i++) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();
                if (i == 0) 
                    end = currentNode->val;
                
                if (currentNode->left) 
                    nodeQueue.push(currentNode->left);

                if (currentNode->right) 
                    nodeQueue.push(currentNode->right);
            }
        }
        return end;
    }
};

signed main() {}