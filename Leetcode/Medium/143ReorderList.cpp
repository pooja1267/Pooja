/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include "../LinkedList.h"
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next)
            return;

        //Find the middle of the ll
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr, *curr, *next= nullptr;
        if(fast)
        {
            curr = slow->next;
        }
        else
        {
            curr = slow;
        }

        while(curr)
        {
            next= curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode *revHead = prev;
        ListNode *firstHalf = head;

        while(revHead)
        {
            ListNode *temp = revHead;
            revHead = revHead->next;
            temp->next = firstHalf->next;
            firstHalf->next = temp;
            firstHalf = temp->next;
        }
        if(firstHalf)
            firstHalf->next = nullptr;
    }
};