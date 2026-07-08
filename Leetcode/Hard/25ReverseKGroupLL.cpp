#include "../LinkedList.h"
class Solution {
public:
    ListNode* reverseN(ListNode* head, int k, ListNode*& successor) {
        if (k == 1) {
            successor = head->next;
            return head;
        }

        ListNode* retVal = reverseN(head->next, k - 1, successor);
        head->next->next = head;
        head->next = successor;
        return retVal;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (k == 1)
            return head;

        if (!head->next)
            return head;

        ListNode* dummy = new ListNode(-1, head);
        ListNode* success = nullptr;
        ListNode *curr = head, *prev = dummy;
        int count = 0;
        while (curr) {

            count++;
            if (count == k) {
                bool reverse = true;
                ListNode* temp = prev->next;
                prev->next = reverseN(prev->next, k, success);
                prev = temp;
                curr = success;
                count = 0;
            } else
                curr = curr->next;
        }
            return dummy->next;
    }

};