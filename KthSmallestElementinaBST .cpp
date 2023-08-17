// 230. Kth Smallest Element in a BST

#include "bits/stdc++.h"

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
    vector<int> inOrderSequence;
    void getInorder(TreeNode* root) {
        if (root == NULL)
            return;
        getInorder(root->left);
        inOrderSequence.push_back(root->val);
        getInorder(root->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        getInorder(root);
        sort(inOrderSequence.begin(), inOrderSequence.end());
        return inOrderSequence[k - 1];
    }
};

signed main () {

}