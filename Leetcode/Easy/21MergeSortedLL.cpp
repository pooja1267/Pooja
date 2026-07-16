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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2)
            return list1;
        else if(!list1)
            return list2;
        else if(!list2)
            return list1;

        
        ListNode *prev = new ListNode(-1 , list1);
        ListNode *head = prev;
        while(list1 && list2)
        {
            if(list2->val < list1->val)
            {
                ListNode *temp = list2;
                list2 = list2->next;
                temp->next = prev->next;
                prev->next= temp;
                prev = temp;
                
            }
            else if(list2->val > list1->val)
            {
                prev = list1;
                list1 = list1->next;
            }
            else 
            {
                //prev = list1;
                ListNode *temp = list2;
                list2= list2->next;
                temp->next = list1->next;
                list1->next = temp;
                list1 = temp->next;
                prev = temp;
            }
        }

        if(list2)
            prev->next = list2;

        return head->next;
    }
};