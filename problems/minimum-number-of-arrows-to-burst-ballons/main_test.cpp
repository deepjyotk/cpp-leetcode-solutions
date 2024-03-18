#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, FindMinArrowShots) {
    Solution sol;
    std::vector<std::vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};

    EXPECT_EQ(sol.findMinArrowShots(points), 2);

    points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    EXPECT_EQ(sol.findMinArrowShots(points), 4);

    points = {{9,12},{1,10},{4,11},{8,12},{3,9},{6,9},{6,7}} ;
    EXPECT_EQ(sol.findMinArrowShots(points), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
