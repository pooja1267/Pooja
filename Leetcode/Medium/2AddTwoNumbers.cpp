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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *head = l1, *prev = nullptr;
        int carry = 0;
        while(l1 && l2)
        {
            l1->val = l1->val + l2->val + carry;
            if(l1->val >= 10)
            {
                carry = 1;
                l1->val = l1->val%10;
            }
            else
                carry = 0;

            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
        }

        if(!l1)
        {
            prev->next = l2;
            l1 = l2;
        }
        
        while(l1)
        {
            l1->val += carry;
            if(l1->val >=10)
            {
                carry = 1;
                l1->val %=10; 
            }
            else 
                carry = 0;
            prev = l1;
            l1 = l1->next;
        }

        if(carry)
        {
            ListNode *temp = new ListNode(carry);
            prev->next = temp;
        }
        return head;
    }
};