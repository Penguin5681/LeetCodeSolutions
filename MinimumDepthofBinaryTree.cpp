// 111. Minimum Depth of Binary Tree

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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int leftHeight = minDepth(root->left);
        int rightHeight = minDepth(root->right);
        return leftHeight < rightHeight and leftHeight or !rightHeight ? leftHeight + 1 : rightHeight + 1;
    }
};

signed main(void) {

}