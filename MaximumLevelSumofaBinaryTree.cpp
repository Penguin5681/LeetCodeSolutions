// 1161. Maximum Level Sum of a Binary Tree

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

using node = TreeNode;

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<node*> Q;
        Q.push(root);
        int levelSum = 0;
        int maxSum = INT_MIN;
        int current_level = 1;
        int maxLevel = 1;
            while (!Q.empty()) {
                int size = Q.size();
                node* temp = Q.front();
                Q.pop();
                    for (int i = 0; i < size; ++i) {
                        levelSum += temp->val;

                        if (temp->left != nullptr) Q.push(temp->left);
                        if (temp->right != nullptr) Q.push(temp->right);
                    }
                    if (levelSum > maxSum) {
                        maxSum = levelSum;
                        maxLevel = current_level;
                    }
            }
        return maxLevel;
    }
};