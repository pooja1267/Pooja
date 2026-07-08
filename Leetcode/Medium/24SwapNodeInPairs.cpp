#include "../LinkedList.h"
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next)
            return head;

        ListNode *dummy = new ListNode(-1,head);
        ListNode *prev = dummy;
        ListNode *curr = head;
        while(curr && curr->next)
        {
            ListNode *first = curr;
            ListNode *second = curr->next;
            ListNode *temp = second->next;
            second->next = first;
            first->next = temp;
            prev->next = second;
            curr = temp;
            prev = first;
        }
        return dummy->next;   
    }
};