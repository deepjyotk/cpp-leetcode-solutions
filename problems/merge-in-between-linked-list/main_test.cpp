#include "main.h"
#include <gtest/gtest.h>

// Helper function to create a list from a vector
ListNode* vectorToList(const std::vector<int>& v) {
    ListNode dummy;
    ListNode* tail = &dummy;
    for (int num : v) {
        tail->next = new ListNode(num);
        tail = tail->next;
    }
    return dummy.next;
}

// Helper function to convert a list to a vector
std::vector<int> listToVector(ListNode* head) {
    std::vector<int> result;
    while (head) {
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

TEST(MergeInBetweenTest, BasicTest) {
    Solution solution;
    ListNode* list1 = vectorToList({0, 1, 2, 3, 4, 5});
    ListNode* list2 = vectorToList({1000000, 1000001, 1000002});
    ListNode* result = solution.mergeInBetween(list1, 3, 4, list2);
    std::vector<int> expected = {0, 1, 2, 1000000, 1000001, 1000002, 5};
    std::vector<int> resultVec = listToVector(result);
    ASSERT_EQ(resultVec, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
