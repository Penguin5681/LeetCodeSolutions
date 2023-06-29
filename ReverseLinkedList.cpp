// 206. Reverse Linked List

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
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;
        ListNode* current  = head;
        ListNode* next;
            while (current != nullptr) {
                next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }      
        return previous;
    }
};