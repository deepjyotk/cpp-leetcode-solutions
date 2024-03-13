#include "gtest/gtest.h"
#include "problem1.h" // Adjust this include path to where your Solution class is defined
#include <vector>

class TwoSumTest : public ::testing::Test {
protected:
    Solution solution; // Assuming Solution is the class containing the twoSum method
};

TEST_F(TwoSumTest, TestEmptyVector) {
    std::vector<int> nums = {};
    int target = 0;
    std::vector<int> expected = {};
    ASSERT_EQ(solution.twoSum(nums, target), expected);
}

TEST_F(TwoSumTest, TestNoSolution) {
    std::vector<int> nums = {1, 2, 3};
    int target = 6;
    std::vector<int> expected = {}; // Assuming your method returns an empty vector when no solution is found
    ASSERT_EQ(solution.twoSum(nums, target), expected);
}

TEST_F(TwoSumTest, TestValidSolution) {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> expected = {0, 1}; // Assuming the solution is indices [0, 1] for this input
    std::vector<int> result = solution.twoSum(nums, target);
    ASSERT_EQ(result.size(), 2);
    ASSERT_EQ(nums[result[0]] + nums[result[1]], target); // This ensures that the result actually sums up to the target
}

TEST_F(TwoSumTest, TestMultiplePairs) {
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    std::vector<int> expected = {1, 2}; // Assuming the solution is indices [1, 2] for this input
    std::vector<int> result = solution.twoSum(nums, target);
    ASSERT_EQ(result.size(), 2);
    ASSERT_EQ(nums[result[0]] + nums[result[1]], target); // This checks if the result indices indeed sum up to the target
}

// Additional test cases can be added here as needed

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
