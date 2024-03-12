#include "main.h"
#include <gtest/gtest.h>

TEST(RemoveZeroSumConsecutiveNodesFromLinkedList, TestExample) {
    // Add test code here
    Solution solution;

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(-3);
    head->next->next->next = new ListNode(3);
    ListNode* result = solution.removeZeroSumSublists(head);
    EXPECT_EQ(result->val, 3); 
}
TEST(RemoveZeroSumConsecutiveNodesFromLinkedList, TestExample2) {
    Solution solution;
    ListNode* head = new ListNode(0);
    head->next = new ListNode(0);
    head->next->next = new ListNode(-3);
    head->next->next->next = new ListNode(3);
    ListNode* result = solution.removeZeroSumSublists(head);
    EXPECT_TRUE(result == nullptr); 
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
