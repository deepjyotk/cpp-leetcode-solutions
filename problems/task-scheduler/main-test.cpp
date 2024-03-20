#include "main.h"
#include <gtest/gtest.h>

TEST(LeastIntervalTest, Example1) {
    Solution solution;
    std::vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n = 2;
    EXPECT_EQ(solution.leastInterval(tasks, n), 8); // A -> B -> idle -> A -> B -> idle -> A -> B
}

TEST(LeastIntervalTest, Example2) {
    Solution solution;
    std::vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B', 'C', 'C', 'D', 'D'};
    int n = 2;
    EXPECT_EQ(solution.leastInterval(tasks, n), 10); // A -> B -> C -> A -> B -> C -> A -> B -> D -> D
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
