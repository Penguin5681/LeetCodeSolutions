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
public:
    ListNode* middleNode(ListNode* head) {
        node* slow = head;
        node* fast = head;

        while (fast->next and fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return fast->next ? slow->next:slow;
    }
};