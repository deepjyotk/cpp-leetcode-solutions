#ifndef PROBLEM_H
#define PROBLEM_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x = 0, ListNode *next = nullptr) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head);
};

#endif // PROBLEM_H
