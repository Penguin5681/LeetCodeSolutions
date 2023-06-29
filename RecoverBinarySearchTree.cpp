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
auto start = chrono::high_resolution_clock::now();
class Solution {
public:
    void recoverTree(TreeNode* root) {
        node* first = nullptr;
        node* mid = nullptr;
        node* last = nullptr;
        node* prev = nullptr;

        util(root, &first, &mid, &last, &prev);     // Calculates the first, mid and last pointers
        // Case 1. When swapped nodes aren't adjacent
        if (first and last)
            swap(&first->val, &last->val);
        // Case 2. When swapped nodes are adjacent
        else if (first and mid)
            swap(&first->val, &mid->val);
    }
private:
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void util(node* root, node** first, node** mid, node** last, node** prev) {
        if (root == nullptr) return;
        // call for left subTree
        util(root->left, first, mid, last, prev);
        if (*prev and root->val < (*prev)->val) {
            if (!*first) {
                *first = *prev;
                *mid = root;
            }
            else {
                *last = root;
            }
        }
        *prev = root;
        // call for right subTree
        util(root->right, first, mid, last, prev);
    }
};

void inOrder(node* root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

signed main(void) {
    struct TreeNode* root = new node(1);
    root->left = new node(3);
    root->left->right = new node(2);
    inOrder(root);
    cout << endl;
    Solution S;
    S.recoverTree(root);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> time = end - start;
    cerr << time.count() * 1e3 << endl;

    inOrder(root);
}