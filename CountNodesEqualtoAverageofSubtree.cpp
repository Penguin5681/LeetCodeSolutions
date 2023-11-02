// 2265. Count Nodes Equal to Average of Subtree

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
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        int sum = 0;

        calculateAverage(root, count, sum);

        return count;
    }

private:
    std::pair<int, int> calculateAverage(TreeNode* node, int& count, int& sum) {
        if (node == nullptr) {
            return {0, 0};
        }

        auto left = calculateAverage(node->left, count, sum);
        auto right = calculateAverage(node->right, count, sum);

        int totalSum = left.first + right.first + node->val;
        int totalCount = left.second + right.second + 1;

        if (totalSum / totalCount == node->val) {
            count++;
        }

        return {totalSum, totalCount};
    }
};

signed main() {

}