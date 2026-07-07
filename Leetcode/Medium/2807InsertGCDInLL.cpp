#include "../LinkedList.h"
#include <algorithm>
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next)
            return head;

        ListNode *n1 = head;
        ListNode *n2 = head->next;
        while(n2)
        {
            int gcd = std::gcd(n1->val, n2->val);
            ListNode *temp = new ListNode(gcd);
            n1->next = temp;
            temp->next = n2;
            n1 = n2;
            n2 = n2->next;
        }
        return head;
    }
};