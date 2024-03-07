#include "middle-of-the-linked-list.h"
#include <gtest/gtest.h>

TEST(SolutionTest, MiddleNode) {
    // Test setup
    ListNode* tail = new ListNode(5);
    ListNode* node4 = new ListNode(4, tail);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head = new ListNode(1, node2);

    Solution solution;
    ListNode* middle = solution.middleNode(head);

    // Test if the middle node is correct
    EXPECT_EQ(middle->val, 4);

    // Clean up
    delete head;
    delete node2;
    delete node3;
    delete node4;
    delete tail;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
