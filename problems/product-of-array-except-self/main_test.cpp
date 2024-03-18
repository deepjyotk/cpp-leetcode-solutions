#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, ProductExceptSelf) {
    Solution sol;
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> expected = {24, 12, 8, 6};
    EXPECT_EQ(sol.productExceptSelf(nums), expected);

    nums = {0, 1, 2, 3, 4};
    expected = {24, 0, 0, 0, 0};
    EXPECT_EQ(sol.productExceptSelf(nums), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
