// main.cpp
#include "main.h"

int Solution::findMaxLength(std::vector<int>& nums) {
    int curr = 0;
    int n = nums.size();
    std::unordered_map<int, int> um;

    um[curr] = -1;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            curr++;
        } else {
            curr--;
        }

        if (um.find(curr) != um.end()) {
            res = std::max(res, i - um[curr]);
        } else {
            um[curr] = i;
        }
    }

    return res;
}
