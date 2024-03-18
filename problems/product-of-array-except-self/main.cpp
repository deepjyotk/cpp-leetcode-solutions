#include "main.h"

std::vector<int> Solution::productExceptSelf(std::vector<int>& nums) {
    int product = 1;
    int count0s = 0;
    for (int n : nums) {
        if (n == 0) {
            count0s++;
        } else {
            product *= n;
        }
    }
    int n = nums.size();
    std::vector<int> res(n, 0);

    if (count0s > 1) {
        return res;
    } else if (count0s == 1) {
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                res[i] = product;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            res[i] = product / nums[i];
        }
    }

    return res;
}
