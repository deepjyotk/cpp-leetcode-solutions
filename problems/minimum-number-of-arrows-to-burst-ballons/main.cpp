#include "main.h"
#include <algorithm>

int Solution::findMinArrowShots(std::vector<std::vector<int>>& points) {
    sort(begin(points), end(points));
    int res = 1;
    int n = points.size();

    int arrow = points[n - 1][0];

    for (int i = n - 2; i >= 0; i--) {
        if (points[i][1] < arrow) {
            res += 1;
            arrow = points[i][0];
        }
    }

    return res;
}
