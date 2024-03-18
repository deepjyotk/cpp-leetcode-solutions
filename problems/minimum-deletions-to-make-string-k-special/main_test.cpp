#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, MinimumDeletions) {
    Solution solution;
    ASSERT_EQ(solution.minimumDeletions("aabcaba", 0), 3);
    ASSERT_EQ(solution.minimumDeletions("dabdcbdcdcd", 2), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
