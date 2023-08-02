// 105. Construct Binary Tree from Preorder and Inorder Traversal

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
TreeNode *tree(vector<int> &preorder , int preLow , int preHigh, vector<int> &inorder , int inLow , int inHigh) {
    if(preLow>preHigh or inLow > inHigh) return nullptr;

    TreeNode *root = new TreeNode(preorder[preLow]);
    int inIndex = inLow;

    while(inorder[inIndex] != root->val) inIndex++;
        int countLeft = inIndex - inLow;
        root->left = tree(preorder , preLow + 1 , preLow + countLeft , inorder ,inLow , inIndex - 1 );
        root->right = tree(preorder , preLow + countLeft + 1 , preHigh , inorder , inIndex + 1 , inHigh);
        return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return tree(preorder , 0 , preorder.size() - 1 , inorder , 0 , inorder.size() -1 );
    }
};

signed main(void) {

}