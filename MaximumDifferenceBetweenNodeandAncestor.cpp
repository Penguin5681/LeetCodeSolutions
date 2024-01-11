// 1026. Maximum Difference Between Node and Ancestor

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
    int maxAncestorDiff(TreeNode* root) {
        return maxAncestorDiffHelper(root, INT_MAX, INT_MIN);
    }

private:
    int maxAncestorDiffHelper(TreeNode* node, int minValue, int maxValue) {
        if (!node) return maxValue - minValue;

        minValue = min(minValue, node->val);
        maxValue = max(maxValue, node->val);

        return max(maxAncestorDiffHelper(node->left, minValue, maxValue), maxAncestorDiffHelper(node->right, minValue, maxValue));
    }
};

signed main() {

}