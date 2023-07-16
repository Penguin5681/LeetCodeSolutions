// 234. Palindrome Linked List

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using node = ListNode;

class Solution {
private:
    vector<node*> nodes;
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL and head->next == NULL)
            return (head);
        while (head != NULL) {
            nodes.push_back(head);
            head = head->next;
        }
        int j = nodes.size() - 1;
        for (int i = 0; i < nodes.size() / 2; ++i) {
            if (nodes[i]->val != nodes[j]->val) return false;
            j--;
        }
        return true;
    }
};