#include "../LinkedList.h"
class Solution {
public:

    bool checkPalindrome(ListNode *&first, ListNode *last)
    {
        if(!last->next)
        {
            bool retVal = (first->val == last->val);
            first = first->next;
            return (retVal);
        }

        bool retVal = checkPalindrome(first, last->next);
        retVal = retVal && (first->val == last->val);
        first = first->next;
        return (retVal);
    }
    bool isPalindrome(ListNode* head) {

        if(!head->next)
            return true;

        return checkPalindrome(head, head);              
    }
};