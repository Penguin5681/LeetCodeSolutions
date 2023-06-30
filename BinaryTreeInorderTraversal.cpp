// 94. Binary Tree Inorder Traversal

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
private:
    vector<int> rsl;
    void inOrder(TreeNode *root) {
        if (root == nullptr) return;
        inOrder(root->left);
        rsl.push_back(root->val);
        inOrder(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return rsl;
    }
};