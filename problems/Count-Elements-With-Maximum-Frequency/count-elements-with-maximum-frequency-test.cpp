#include "count-elements-with-maximum-frequency.h"
#include <gtest/gtest.h>

TEST(SolutionTest, MaxFrequencyElements) {
    Solution solution;
    std::vector<int> nums1{1, 2, 2, 3, 3, 3};
    EXPECT_EQ(solution.maxFrequencyElements(nums1), 3); 

    std::vector<int> nums2{1};
    EXPECT_EQ(solution.maxFrequencyElements(nums2), 1); 

    std::vector<int> nums3{4, 4, 4, 4};
    EXPECT_EQ(solution.maxFrequencyElements(nums3), 4); 

    std::vector<int> nums4{1, 1, 2, 2, 2,2, 3, 3, 3, 3};
    EXPECT_EQ(solution.maxFrequencyElements(nums4), 8); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
