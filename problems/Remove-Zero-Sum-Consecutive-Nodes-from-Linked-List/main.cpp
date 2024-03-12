#include "main.h"

ListNode* Solution::removeZeroSumSublists(ListNode* head) {
    ListNode* dummy = new ListNode(0, head);
    ListNode* curr = dummy->next;
    std::unordered_map<int, ListNode*> um;
    um[0] = dummy;

    int currsum = 0;
    while (curr) {
        currsum += curr->val;

        if (um.find(currsum) != um.end()) {
            ListNode* p1 = um[currsum];
            ListNode* p2 = p1->next;

            int toDeleteVal = currsum + (p2 ? p2->val : 0);
            while (p2 != curr) {
                um.erase(toDeleteVal);
                p2 = p2->next;
                toDeleteVal += p2 ? p2->val : 0;
            }
            p1->next = curr->next;
            curr = curr->next;
        } else {
            um[currsum] = curr;
            curr = curr->next;
        }
    }

    return dummy->next;
}
