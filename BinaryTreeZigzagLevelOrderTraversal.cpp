// 103. Binary Tree Zigzag Level Order Traversal

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

using node = TreeNode;

vector<vector<int>> zigzagLevelOrder(node* root) {
    vector<vector<int>> ans;
    if (root == NULL) return ans;
    queue<node*> Q;
    bool path = true; // false = Left to Right, true = Right to Left
    Q.push(root);
        while (!Q.empty()) {
            int size = Q.size();
            vector<int> row(size);
            for (int i = 0; i < size; ++i) {
                node* temp = Q.front();
                Q.pop();
                int idx = path ? i : size - 1 - i;
                row[idx] = temp->val;

                if (temp->left != NULL)
                    Q.push(temp->left);
                if (temp->right != NULL)
                    Q.push(temp->right); 
            }
            path = !path;
            ans.push_back(row);
        }
        return ans;
}

// Driver Code

signed main(void) {
    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    vector<vector<int>> rsl = zigzagLevelOrder(root);
    for (auto i : rsl) {
        for (auto j : i)
            cout << j << " ";
    }
}