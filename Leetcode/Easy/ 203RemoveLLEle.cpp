#include<iostream>
using namespace std;
 struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;

        ListNode *prev = NULL, *curr = head, *temp;
        while(curr)
        {
            if(curr->val == val)
            {
                temp = curr;
                if(curr == head)
                {
                    head = curr->next;
                }
                else
                {
                    prev->next = curr->next;           
                           
                }
                curr = curr->next; 
                delete(temp);
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }