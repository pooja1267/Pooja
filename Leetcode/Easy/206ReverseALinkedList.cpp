#include "../LinkedList.h"
ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *prev = head, *temp = NULL;
        while(curr)
        {
            curr = curr->next;
            prev->next = temp;
            temp = prev;
            prev = curr;
        }
        return temp;
    }