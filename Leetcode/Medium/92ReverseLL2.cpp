#include "../LinkedList.h"
ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

    ListNode* dummy = new ListNode(0, head);
    ListNode* prev = dummy;

    for (int i = 0; i < left - 1; ++i) {
        prev = prev->next;
    }

    
    ListNode* current = prev->next;
    ListNode* nextNode = nullptr;

    
    for (int i = 0; i < right - left; ++i) {
        nextNode = current->next;
        current->next = nextNode->next;
        nextNode->next = prev->next;
        prev->next = nextNode;
    }

    ListNode* result = dummy->next;
    delete dummy; // Clean up our dummy node to avoid memory leaks
    return result;
    }