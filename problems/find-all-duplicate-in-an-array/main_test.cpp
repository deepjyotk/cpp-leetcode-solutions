#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, FindDuplicates) {
    Solution solution;
    std::vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> expected = {2, 3};
    std::vector<int> result = solution.findDuplicates(nums);
    EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
