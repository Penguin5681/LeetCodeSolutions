// 872. Leaf-Similar Trees

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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafValues1, leafValues2;
        collectLeafValues(root1, leafValues1);
        collectLeafValues(root2, leafValues2);

        return leafValues1 == leafValues2;
    }

private:
    void collectLeafValues(TreeNode* root, vector<int>& leafValues) {
        if (!root)
            return;

        if (!root->left && !root->right) {
            leafValues.push_back(root->val);
        }

        collectLeafValues(root->left, leafValues);
        collectLeafValues(root->right, leafValues);
    }
};

signed main() {

}