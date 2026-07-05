#include "../LinkedList.h"
ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        //unordered_set<int> hashSet(nums.begin(), nums.end());
        bitset<100001> st;
        for (int num : nums)
            st[num] = true;

        ListNode *curr = head, *prev;
        ListNode *dummy = new ListNode(-1, head);
        prev = dummy;
        while(curr)
        {
            if(/*hashSet.find(curr->val) != hashSet.end()*/st[curr->val])
            {
                prev->next = curr->next;
            }
            else
            {
                prev = curr;
            }
            curr = curr->next;
        }
        return dummy->next;
    }