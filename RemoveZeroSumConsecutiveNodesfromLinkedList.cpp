// 1171. Remove Zero Sum Consecutive Nodes from Linked List

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        unordered_map<int, ListNode*> sumMap;
        int sum = 0;
        ListNode* current = dummy;

        while (current != nullptr) {
            sum += current->val;

            if (sumMap.find(sum) != sumMap.end()) {
                ListNode* temp = sumMap[sum]->next;
                int tempSum = sum + temp->val;
                while (temp != current) {
                    sumMap.erase(tempSum);
                    temp = temp->next;
                    tempSum += temp->val;
                }
                sumMap[sum]->next = current->next;
            } else {
                sumMap[sum] = current;
            }

            current = current->next;
        }

        return dummy->next;
    }
};

signed main() {

}