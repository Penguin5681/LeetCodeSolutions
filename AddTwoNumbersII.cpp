// 445. Add Two Numbers II

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> nodesLL1;
        stack<int> nodesLL2;
        int carry_num = 0;
        int rsl = NULL;
        while (l1 != NULL) {
            nodesLL1.push(l1->val);
            l1 = l1->next;
        }
        while (l2 != NULL) {
            nodesLL2.push(l2->val);
            l2 = l2->next;
        }
        node* rsl_list = nullptr;
        while (!nodesLL1.empty() or !nodesLL2.empty() or carry_num != 0) {
            int sum = (!nodesLL1.empty() ? nodesLL1.top() : 0) + (!nodesLL2.empty() ? nodesLL2.top() : 0) + carry_num;
            carry_num = sum / 10;
            node* tempNode = new node(sum % 10);
            tempNode->next = rsl_list;
            rsl_list = tempNode;

            if (!nodesLL1.empty()) nodesLL1.pop();
            if (!nodesLL2.empty()) nodesLL2.pop();
        }
        return rsl_list;

    }
};

signed main(void) {
    
}