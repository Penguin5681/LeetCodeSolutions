// 19. Remove Nth Node From End of List

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;        
        ListNode newHead(-1);
        newHead.next = head;

        ListNode *slow = &newHead;
        ListNode *fast = &newHead;

            for (int i = 0; i < n; ++i)
                fast = fast->next;
        
            while (fast->next) {
                fast = fast->next;
                slow = slow->next;
            }
        ListNode *toDelete = slow->next;
        slow->next = slow->next->next;
        
        delete toDelete; 
        return newHead.next;
    }
};

signed main(void) {

}