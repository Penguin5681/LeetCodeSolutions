// 653. Two Sum IV - Input is a BST

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
    vector<int> rsl;
    void inOrderSequence(node* root, vector<int> &V) {
        if (root == nullptr) return;
        inOrderSequence(root->left, V);
        V.push_back(root->val);
        inOrderSequence(root->right, V);
    }
    bool findTarget(TreeNode* root, int k) {
        inOrderSequence(root, rsl);
        int left = 0;
        int right = rsl.size() - 1;
            while (left < right) {
                if (rsl[left] + rsl[right] == k)
                    return true;
                else if (rsl[left] + rsl[right] > k) 
                    right--;
                else
                    left++;
            }
        return false;
    }
};

