// 501. Find Mode in Binary Search Tree

#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> findMode(TreeNode *root)
    {
        vector<int> modes;
        int maxCount = 0;
        int currentCount = 0;
        int prevValue = 0;

        TreeNode *currentNode = root;
        TreeNode *pre = nullptr;

        while (currentNode != nullptr)
        {
            if (currentNode->left == nullptr)
            {
                if (prevValue == currentNode->val)
                {
                    currentCount++;
                }
                else
                {
                    currentCount = 1;
                    prevValue = currentNode->val;
                }

                if (currentCount > maxCount)
                {
                    modes.clear();
                    modes.push_back(currentNode->val);
                    maxCount = currentCount;
                }
                else if (currentCount == maxCount)
                {
                    modes.push_back(currentNode->val);
                }

                currentNode = currentNode->right;
            }
            else
            {
                pre = currentNode->left;
                while (pre->right != nullptr && pre->right != currentNode)
                {
                    pre = pre->right;
                }

                if (pre->right == nullptr)
                {
                    pre->right = currentNode;
                    currentNode = currentNode->left;
                }
                else
                {
                    pre->right = nullptr;

                    if (prevValue == currentNode->val)
                    {
                        currentCount++;
                    }
                    else
                    {
                        currentCount = 1;
                        prevValue = currentNode->val;
                    }

                    if (currentCount > maxCount)
                    {
                        modes.clear();
                        modes.push_back(currentNode->val);
                        maxCount = currentCount;
                    }
                    else if (currentCount == maxCount)
                    {
                        modes.push_back(currentNode->val);
                    }

                    currentNode = currentNode->right;
                }
            }
        }

        return modes;
    }
};

signed main()
{
}