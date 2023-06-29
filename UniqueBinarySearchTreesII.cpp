// 95. Unique Binary Search Trees II

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

class Solution {
public:
    vector<node*> helper(int start, int end) {
        vector<node*> trees;
        if (start > end) {
            trees.push_back(nullptr);
            return trees;
        }
        for (int i = start; i <= end; ++i) {
            vector<node*> leftSub = helper(start, i - 1);
            vector<node*> rightSub = helper(i + 1, end);
                for (int j = 0; j < leftSub.size(); ++j) {
                    node* left = leftSub[j];
                    for (int k = 0; k < rightSub.size(); ++k) {
                        node* right = rightSub[k];
                        node* newNode = new node(i);
                        newNode->left = left;
                        newNode->right = right;
                        trees.push_back(newNode);
                    }
                }
        }
        return trees;
    }

    vector<TreeNode*> generateTrees(int n) {
        vector<node*> uniqueBST = helper(1, n);
        return uniqueBST;
    }
};

void preOrderSeq(node* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    preOrderSeq(root->right);
    preOrderSeq(root->left);
}

// Driver Code:

signed main(void) {
    Solution s;
    vector<node*> V = s.generateTrees(3); // 5 diff structures
    int count = 1;
    for (auto i : V) {
        cout << count << ": ";
        preOrderSeq(i);
        cout << endl;
        count++;
    }
}

// Approach: 
/*
    1. Build BST for n = 1, n = 2, ... 
    2. Use those BSTs as a subtree(left and right) of the following n.
    3. Combine the left and right subtree and store it in a vector.
*/