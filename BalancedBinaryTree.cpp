// 110. Balanced Binary Tree

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
    int getHeight(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(getHeight(root->left), getHeight(root->right)) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        if (isBalanced(root->left) == false) return false;
        if (isBalanced(root->right) == false) return false;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        if (abs(lh - rh) <= 1)
            return true;
        return false;
    }
};