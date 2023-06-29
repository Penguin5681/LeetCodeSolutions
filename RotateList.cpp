// 61. Rotate List

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr or head->next == nullptr or k == 0)
            return head;
        
        ListNode *temp = head;
        int size = 1;
            while (temp->next != NULL) {
                size++;
                temp = temp->next;
            }
        temp->next = head;
        k %= size;
            while (--size >= k) {
                temp = temp->next;
            }
        ListNode *rsl = temp->next; temp->next = nullptr;
        return rsl;
    }
};

signed main(void) {

}