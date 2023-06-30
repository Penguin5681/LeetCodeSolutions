// 144. Binary Tree Preorder Traversal

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
private:
    vector<int> rsl;
    void preOrder(struct TreeNode* root) {
        if (root == nullptr) return;
        rsl.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
      preOrder(root);
      return rsl;
    }
};