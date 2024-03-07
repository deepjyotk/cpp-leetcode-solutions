#include "middle-of-the-linked-list.h"

ListNode* Solution::middleNode(ListNode* head) {
    ListNode* slow = head, *fast = head;

    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}