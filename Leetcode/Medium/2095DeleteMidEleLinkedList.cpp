#include "../LinkedList.h"
ListNode* deleteMiddle(ListNode* head) {
        if(head && !head->next)
        {
            
            head = nullptr;
            return head;
        }

        ListNode *fast=head, *slow = head, *slowPrev = NULL;
        while(fast && fast->next)
        {
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        slowPrev->next = slow->next;
        delete(slow);
        return head;
    }