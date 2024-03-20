#ifndef MAIN_H
#define MAIN_H

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x = 0, ListNode *next = nullptr) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2);
};

#endif // MAIN_H
