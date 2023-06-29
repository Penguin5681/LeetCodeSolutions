// 1008. Construct Binary Search Tree from Preorder Traversal

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

void inOrderSeq(TreeNode* root) {
    if (root == nullptr) return;
    inOrderSeq(root->left);
    cout << root->val << " ";
    inOrderSeq(root->right);
}

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.size() == 0) return nullptr;
        TreeNode* root = new TreeNode(preorder[0]);
        if (preorder.size() == 0) return  root;
        vector<int> left, right;
        for (int i = 0; i < preorder.size(); ++i) {
            if (preorder[i] > preorder[0])
                right.push_back(preorder[i]);
            else if (preorder[i] < preorder[0])
                left.push_back(preorder[i]);
        }
        root->left = bstFromPreorder(left);
        root->right = bstFromPreorder(right);
        return root;
    }
};

signed main(void) {
    Solution S;
    vector<int> preOrder = {3, 2, 1, 7, 5, 4, 6, 8};
    TreeNode* root = S.bstFromPreorder(preOrder);
    inOrderSeq(root); // If correct, this should return a sorted preOrder list
}