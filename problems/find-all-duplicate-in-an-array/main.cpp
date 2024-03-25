#include "main.h"
#include <cmath>

std::vector<int> Solution::findDuplicates(std::vector<int>& nums) {
    std::vector<int> res; 
    for(int i = 0; i < nums.size(); i++) {
        int cI = std::abs(nums[i]) - 1;

        if (nums[cI] < 0) {
            res.push_back(cI + 1);
        } else {
            nums[cI] *= -1;
        }
    }

    return res;
}
