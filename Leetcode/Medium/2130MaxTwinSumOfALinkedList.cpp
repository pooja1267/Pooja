#include "../LinkedList.h"
int pairSum(ListNode* head) {
        ListNode *fast = head, *slow = head, *slowPrev;
        while(fast && fast->next)
        {
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *head2 = slow;
        slowPrev->next = nullptr;

        ListNode *temp=NULL, *prev=head2, *curr = head2;
        while(curr)
        {
            curr = curr->next;
            prev->next = temp;
            temp = prev;
            prev = curr;
        }

        head2 = temp;
        int maxSum = 0;
        while(head2)
        {
            maxSum = max(maxSum, head->val + head2->val);
            head = head->next;
            head2 = head2->next;
        }
        return maxSum;    
        
    }