// Linked List Cycle

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
        bool isCyclic(ListNode* &head) {
        // Hare and Tortoise Algorithm
        ListNode* fast = head;     // Hare
        ListNode* slow = head;     // Tortoise

        while (fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (fast == slow) return true;
        }
        return false;
}

public:
    bool hasCycle(ListNode *head) {
        return isCyclic(head);
    }
};

signed main(void) {
    Solution s;
}