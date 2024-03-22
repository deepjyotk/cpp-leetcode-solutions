// main_test.cpp
#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, IsPalindrome) {
    Solution solution;
    
    // Test case 1: Odd number of elements
    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1))));
    EXPECT_TRUE(solution.isPalindrome(head1));

    // Test case 2: Even number of elements
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1, new ListNode(2)))));
    EXPECT_FALSE(solution.isPalindrome(head2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
