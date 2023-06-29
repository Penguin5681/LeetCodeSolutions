// 102. Binary Tree Level Order Traversal

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;
        queue<TreeNode*> Q;
        Q.push(root);
            while (!Q.empty()) {
                int n = Q.size();
                vector<int> temp;
                for (int i = 0; i < n; ++i) {
                    TreeNode* temp1 = Q.front();
                    Q.pop();

                    if (i == n - 1)
                        temp.push_back(temp1->val);
                    if (temp1->left != nullptr)
                        Q.push(temp1->left);
                    if (temp1->right != nullptr)
                        Q.push(temp1->right);
                }
                ans.push_back(temp);
            }
            return ans;      
    }
};