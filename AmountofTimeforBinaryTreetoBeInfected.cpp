// 2385. Amount of Time for Binary Tree to Be Infected

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
    vector<TreeNode*> path;

    bool findStart(TreeNode* node, int start) {
        if (node->val == start) return true;

        if (node->left) {
            path.push_back(node->left);
            if (findStart(node->left, start)) return true;
            path.pop_back();
        }

        if (node->right) {
            path.push_back(node->right);
            if (findStart(node->right, start)) return true;
            path.pop_back();
        }

        return false;
    }

    int findDepth(TreeNode* root) {
        int depth = 0;
        if (root->left) depth = 1 + findDepth(root->left);
        if (root->right) depth = max(depth, 1 + findDepth(root->right));
        return depth;
    }

    int findDepth(TreeNode* root, TreeNode* edge) {
        if (root->left == edge) {
            if (root->right) return 1 + findDepth(root->right);
            else return 0;
        } else if (root->left) {
            return 1 + findDepth(root->left);
        } else {
            return 0;
        }
    }

public:
    int amountOfTime(TreeNode* root, int start) {
        path.push_back(root);
        findStart(root, start);

        int maxDepth = findDepth(path.back());
        int currentLevel = 1;

        while (path.back() != root) {
            auto current = path.back();
            path.pop_back();
            maxDepth = max(maxDepth, currentLevel + findDepth(path.back(), current));
            currentLevel++;
        }

        return maxDepth;
    }
};

signed main() {

}