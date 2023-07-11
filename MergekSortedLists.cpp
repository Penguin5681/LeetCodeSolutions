// 23. Merge k Sorted Lists

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
    node *mergeLL(node* &LL1, node* &LL2) {
        if (LL1 == nullptr) return LL2;
        if (LL2 == nullptr) return LL1;
        if (LL1->val <= LL2->val) {
            LL1->next = mergeLL(LL1->next, LL2);
            return LL1;
        }
        else {
            LL2->next = mergeLL(LL1, LL2->next);
            return LL2;
        }
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return nullptr;
        while (lists.size() > 1) {
            lists.push_back(mergeLL(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
};

signed main(void) {

}