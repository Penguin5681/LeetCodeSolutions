// 114. Flatten Binary Tree to Linked List

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
    void flatten(TreeNode* root) {
        if (root == nullptr or root->left == nullptr and root->right == nullptr) return;      
        if (root->left != nullptr) {
            flatten(root->left);
            TreeNode* temp = root->right;
            root->right = root->left;
            root->left = nullptr;
            TreeNode* T = root->right;
                while (T->right != nullptr) 
                    T = T->right;
                T->right = temp;
        }
        flatten(root->right);
        return;
    }
};