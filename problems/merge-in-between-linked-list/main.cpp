#include "main.h"

ListNode* Solution::mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode *l1e = list1, *l1s = list1;

    for (int i = 0; i < a - 1; ++i) {
        l1e = l1e->next;
    }

    for (int i = 0; i < b + 1; ++i) {
        l1s = l1s->next;
    }

    ListNode *l2e = list2;
    while (l2e->next) {
        l2e = l2e->next;
    }

    l1e->next = list2;
    l2e->next = l1s;

    return list1;
}
