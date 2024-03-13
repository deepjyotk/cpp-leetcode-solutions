#include "main.h"
#include <gtest/gtest.h>

TEST(CustomSortStringTest, BasicTest1) {
    Solution solution;
    std::string order = "cba";
    std::string s = "abcd";

    std::string expected = "cbad";
    std::string result = solution.customSortString(order, s);

    ASSERT_EQ(expected, result);
}

TEST(CustomSortStringTest, BasicTest2){
    Solution solution;
    std::string order = "bcafg";
    std::string s = "abcd";

    std::string expected = "bcad";

    ASSERT_EQ(expected, solution.customSortString(order, s));
}





int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
