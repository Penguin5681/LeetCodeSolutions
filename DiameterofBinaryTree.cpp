// 543. Diameter of Binary Tree

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
    
    int diameterOfBinaryTree(TreeNode* root) {
        int h = 0;
        int ans = getDiameter(root, &h);
        return ans - 1;

    }

    int getDiameter(TreeNode* root, int *height) {      // Takes O(n) [Optimized]
    if (root == NULL) {
        *height = 0;
        return 0;
    }
    int lHeight = 0, rHeight = 0;
    int lDiameter = getDiameter(root->left, &lHeight);
    int rDiameter = getDiameter(root->right, &rHeight);
    int curr = lHeight + rHeight + 1;
    *height = max(lHeight, rHeight) + 1;
    return max(curr, max(lDiameter, rDiameter));
}
};