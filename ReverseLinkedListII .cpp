// 92. Reverse Linked List II

#include "bits/stdc++.h"

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> NodeVal;
        int it = 0;
        node* tempNode = head;
        while (tempNode != nullptr) {
            NodeVal.push_back(tempNode->val);
            tempNode = tempNode->next;
            it++;
        }

        while (left < right) {
            swap(NodeVal[left - 1], NodeVal[right - 1]);
            left++; right--;
        }

        node* newHead = new node(NodeVal[0]);
        node* currentNode = newHead;
        for (int i = 1; i < NodeVal.size(); i++) {
            node* newNode = new node(NodeVal[i]);
            currentNode->next = newNode;
            currentNode = newNode;
        }

        return newHead;
    }
};