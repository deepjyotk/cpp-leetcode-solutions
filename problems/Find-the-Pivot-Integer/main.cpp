#include "main.h"

int Solution::pivotInteger(int n) {
    int l = 1, r = n;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        int l_sum = mid * (mid + 1) / 2;
        int r_sum = n * (n + 1) / 2 - (mid - 1) * mid / 2;

        if (l_sum == r_sum) {
            return mid;
        } else if (l_sum < r_sum) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1;
}
