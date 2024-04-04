#include "main.h"
#include <gtest/gtest.h>

TEST(SolutionTest, TestExist) {
    Solution sol;
    std::vector<std::vector<char>> board = {{'A','B','C','E'}, {'S','F','C','S'}, {'A','D','E','E'}};
    std::string word = "ABCCED";

    ASSERT_TRUE(sol.exist(board, word));
}

TEST(SolutionTest, TestNotExist) {
    Solution sol;
    std::vector<std::vector<char>> board = {{'A','B','C','E'}, {'S','F','C','S'}, {'A','D','E','E'}};
    std::string word = "ABCB";

    ASSERT_FALSE(sol.exist(board, word));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
