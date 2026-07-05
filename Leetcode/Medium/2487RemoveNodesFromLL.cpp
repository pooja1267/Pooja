#include "../LinkedList.h"
ListNode* reverseList(ListNode* head) {
        ListNode *temp = nullptr, *prev = head, *curr = head;
        while (curr) {
            curr = curr->next;
            prev->next = temp;
            temp = prev;
            prev = curr;
        }
        return temp;
    }

    void traverse(ListNode* head) {
        while (head) {
            cout << head->val << "\t";
            head = head->next;
        }
        cout << endl;
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head->next)
            return head;

        head = reverseList(head);
     

        ListNode *prev = head, *curr = head->next;
        int currMax = head->val;
        while (curr) {
            if (curr->val < currMax)
                prev->next = curr->next;
            else
            {
                prev = curr;
                currMax = curr->val;
            }

            curr = curr->next;
        }

      
        head = reverseList(head);
        return head;
    }