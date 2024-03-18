#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, InsertInterval) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1, 3}, {6, 9}};
    std::vector<int> newInterval = {2, 5};
    std::vector<std::vector<int>> result = sol.insert(intervals, newInterval);
    std::vector<std::vector<int>> expected = {{1, 5}, {6, 9}};
    ASSERT_EQ(result, expected);
}

TEST(SolutionTest, InsertIntervalNewRange) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    std::vector<int> newInterval = {4, 8};
    std::vector<std::vector<int>> result = sol.insert(intervals, newInterval);
    std::vector<std::vector<int>> expected = {{1, 2}, {3, 10}, {12, 16}};
    ASSERT_EQ(result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
