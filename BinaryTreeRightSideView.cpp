// 199. Binary Tree Right Side View

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            int n = Q.size();
            for (int i = 0; i < n; ++i) {
                TreeNode* curr = Q.front();
                Q.pop();

                if (i == n - 1)
                    ans.push_back(curr->val);
                if (curr->left != nullptr)
                    Q.push(curr->left);
                if (curr->right != nullptr)
                    Q.push(curr->right);
            }
        }
        return ans;      
    }
};

signed main() {
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(12);
    root->left->left = new TreeNode(6);
    root->left->left->left = new TreeNode(15);
    root->left->right = new TreeNode(7);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(51);
    
    /*
            1
          /   \
         12    5
        / \  /  \
       6  7  13  51
      /
     15
    
    */
    Solution s;
    vector<int> ans = s.rightSideView(root);
    for (int i : ans) cout << i << " ";
}