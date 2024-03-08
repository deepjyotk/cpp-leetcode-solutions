#include "count-elements-with-maximum-frequency.h"

int Solution::maxFrequencyElements(std::vector<int>& nums) {
    std::unordered_map<int, int> um;
    for (int num : nums) {
        um[num]++;
    }

    int max_freq = 0;
    int count_ele = 0;
    for (auto& p : um) {
        if (p.second > max_freq) {
            count_ele = 1;
            max_freq = p.second;
        } else if (p.second == max_freq) {
            count_ele++;
        }
    }

    return count_ele * max_freq;
}
