#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, LongestIdealString) {
    Solution solution;
    ASSERT_EQ(solution.longestIdealString("abc", 2), 3);
    ASSERT_EQ(solution.longestIdealString("acfgbd", 2), 4);
    ASSERT_EQ(solution.longestIdealString("abcd", 3), 4);
}
