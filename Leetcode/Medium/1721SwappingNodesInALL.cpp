#include "../LinkedList.h"
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        // First count the number of nodes in the linkedlist
        ListNode* curr = head;
        int n = 0;
        while (curr) {
            n++;
            curr = curr->next;
        }

        if (n == 1)
            return head;

        if (k > n)
            return head;

        if (k > ((n + 1) / 2))
            k = n + 1 - k;

        int diff = n - 2 * (k - 1);
        diff--;

        // Now setting up the pointers;
        ListNode* dummy = new ListNode(-1, head);
        ListNode *first, *second, *prev_f, *prev_s;
        first = second = head;
        prev_f = prev_s = dummy;

        while (diff) {
            prev_s = second;
            second = second->next;
            diff--;
        }

        k--;
        while (k) {
            prev_f = first;
            first = first->next;
            prev_s = second;
            second = second->next;
            k--;
        }

        prev_f->next = second;
        prev_s->next = first;
        ListNode* temp = second->next;
        second->next = first->next;
        first->next = temp;

        return dummy->next;
    }
};