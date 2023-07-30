// 160. Intersection of Two Linked Lists

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if (headA == NULL or headB == NULL) return NULL;
//         while (headA != NULL and headB != NULL and headA != headB) {
//             headA = headA->next;
//             headB = headB->next;

//             if (headA == headB) return headA;
//             if (headA == NULL) headA = headB;
//             if (headB == NULL) headB = headA;
//         }       
//         return headA; 
//     }
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr_A = headA;
        ListNode *ptr_B = headB;
        while (ptr_A != ptr_B) {
            ptr_A = ptr_A ? ptr_A->next : headB;
            ptr_B = ptr_B ? ptr_B->next : headA;
        }
        return ptr_A;
    }
};

signed main(void) {

}