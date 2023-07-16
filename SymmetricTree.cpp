// 101. Symmetric Tree

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
private:
    bool isSymmetric(node* x, node* y) {
        if (x == NULL and y == NULL)
            return true;
        else if (x == NULL or y == NULL)
            return false;
        else if (x->val != y->val) 
            return false;
        
        return isSymmetric(x->left, y->right) and isSymmetric(x->right, y->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root->left, root->right);
    }
};

signed main(void) {

}