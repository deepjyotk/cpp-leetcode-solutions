#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, PivotInteger) {
    Solution solution;


    EXPECT_EQ(solution.pivotInteger(8), 6);

    EXPECT_EQ(solution.pivotInteger(4), -1);

    EXPECT_EQ(solution.pivotInteger(1), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
