// 98. Validate Binary Search Tree

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

#define node TreeNode
using ll = long long;
/*
// Optimized Approach

If currentNode equals null, return true

If lowerLimit does not equal null and the value at currentNode is less than or equal to lowerLimit, return false

If upperLimit does not equal null and the value at currentNode is greater than or equal to upperLimit, return false

Recursively check that the left subtree of currentNode is a binary search tree, with the value of currentNode as the upper limit and 
lowerLimit as the lower limit. If the left subtree is not a binary search tree then return false.

Recursively check that the right subtree of currentNode is a binary search tree, with the value of currentNode as the lower limit and
upperLimit as the upper limit. If the right subtree is not a binary search tree, then return false.

Return true

*/
// The Below Solution fails for the test cases containing the value of INT_MIN || INT_MAX. e.g root = [INT_MAX, INT_MAX]
// class Solution {
// public:
//     bool isValidBSTHelper(node* root, ll lowerLimit, ll upperLimit) {
//         if (root == NULL) return true;
//         if (lowerLimit != INT_MIN and root->val <= lowerLimit) return false;
//         if (upperLimit != INT_MAX and root->val >= upperLimit) return false;
//         if (!isValidBSTHelper(root->left, lowerLimit, root->val)) return false;
//         if (!isValidBSTHelper(root->right, root->val, upperLimit)) return false;

//         return true;
//     }

//     bool isValidBST(node* root) {
//         ll min = -1000000000000, max = 1000000000000;
//         if (isValidBSTHelper(root, min, max)) return true;
//         return false;
//     }
// };

// Two Pointer method (Will Pass all the test Cases)
class Solution {
    public:
        bool isValidBSTHelper(node *root, int *lower, int *upper) {
            if (!root) return true; 
            if (lower and root->val <= *lower) return false;
            if (upper and root->val >= *upper) return false;
            return isValidBSTHelper(root->left, lower, &(root->val)) and isValidBSTHelper(root->right, &(root->val), upper);
        }

        bool isValidBST(node* root) {
            return isValidBSTHelper(root, NULL, NULL);
        }
};

signed main(void) {
    node* root = new node(2);
    root->left = new node(1);
    root->right = new node(3);
    Solution s;
    cout << s.isValidBST(root); // 1 if true, 0 otherwise
}

