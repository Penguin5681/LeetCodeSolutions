// 112. Path Sum

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
         targetSum = targetSum - root->val;
        if (targetSum == 0 and !root->left and !root->right) return true;
        return hasPathSum(root->left, targetSum) or hasPathSum(root->right, targetSum);
    }
};

signed main(void) {

}