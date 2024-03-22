// main.cpp
#include "main.h"

bool Solution::isPalindrome(ListNode* head) {
    ListNode* slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* prev = nullptr;
    ListNode* curr = slow;

    while (curr) {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }

    ListNode* front = head;
    ListNode* back = prev;

    while (back != slow) {
        if (back->val != front->val) return false;
        back = back->next;
        front = front->next;
    }

    return true;
}
