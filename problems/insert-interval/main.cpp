#include "main.h"
#include <algorithm>

std::vector<std::vector<int>> Solution::insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
    int n = intervals.size();
    int target = newInterval[0];
    int left = 0, right = n - 1;

    // Binary search to find the position to insert newInterval
    while (left <= right) {
        int mid = (left + right) / 2;
        if (intervals[mid][0] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Insert newInterval at the found position
    intervals.insert(intervals.begin() + left, newInterval);

    std::vector<std::vector<int>> res;
    res.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i - 1][1] >= intervals[i][0]) {
                res.pop_back() ;
                intervals[i][0] = std::min(intervals[i][0] , intervals[i-1][0]) ;
                intervals[i][1] = std::max(intervals[i][1] , intervals[i-1][1] ) ; 
                res.push_back(intervals[i]) ;
        } else {
            res.push_back(intervals[i]);
        }
    }

    return res;
}
