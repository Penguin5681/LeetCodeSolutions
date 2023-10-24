// 515. Find Largest Value in Each Tree Row

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
public:
    vector<int> largestValues(TreeNode* root) {
        if (!root)
            return rsl;

        std::queue<TreeNode*> q;
        q.push(root);
    
        while (!q.empty()) {
            int levelMax = INT_MIN;
            int levelSize = q.size();

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                levelMax = std::max(levelMax, node->val);

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }

            rsl.push_back(levelMax);
        }
        return rsl;
    }
};

signed main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);

    Solution s;

    for (auto it : s.largestValues(root))
        cout << it << " ";
}