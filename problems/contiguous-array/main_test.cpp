// main_test.cpp
#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, FindMaxLength) {
    Solution solution;
    std::vector<int> nums1{0, 1};
    EXPECT_EQ(solution.findMaxLength(nums1), 2);

    std::vector<int> nums2{0, 1, 0};
    EXPECT_EQ(solution.findMaxLength(nums2), 2);

    std::vector<int> nums3{0, 1, 0, 1};
    EXPECT_EQ(solution.findMaxLength(nums3), 4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
