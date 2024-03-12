#ifndef REMOVE_ZERO_SUM_CONSECUTIVE_NODES_FROM_LINKED_LIST_H
#define REMOVE_ZERO_SUM_CONSECUTIVE_NODES_FROM_LINKED_LIST_H

#include <unordered_map>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head);
};

#endif // REMOVE_ZERO_SUM_CONSECUTIVE_NODES_FROM_LINKED_LIST_H
