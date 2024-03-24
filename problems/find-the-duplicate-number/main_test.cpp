#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, findDuplicate) {
    Solution sol;
    std::vector<int> nums1 = {1, 3, 4, 2, 2};
    EXPECT_EQ(sol.findDuplicate(nums1), 2);

    std::vector<int> nums2 = {3, 1, 3, 4, 2};
    EXPECT_EQ(sol.findDuplicate(nums2), 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
