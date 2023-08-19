// 83. Remove Duplicates from Sorted List

#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        auto* current_node = head;
        while (current_node and current_node->next) {
            if (current_node->val == current_node->next->val) {
                current_node->next = current_node->next->next;
                continue;
            }
            else
                current_node = current_node->next;
        }
        return head;
    }
};

int main(void) {}
