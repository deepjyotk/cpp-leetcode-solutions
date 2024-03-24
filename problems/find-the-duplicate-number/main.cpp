#include "main.h"
#include <cstdlib> // for std::abs

int Solution::findDuplicate(std::vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int co_i = std::abs(nums[i]) - 1;
        if(nums[co_i] < 0) {
            return co_i + 1;
        } else {
            nums[co_i] *= -1;
        }
    }

    return -1;
}
