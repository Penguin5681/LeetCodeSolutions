// 145. Binary Tree Postorder Traversal

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
    void postOrder(TreeNode *root) {
        if (root == nullptr) return;
        postOrder(root->left);
        postOrder(root->right);
        rsl.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return rsl;
    }
};