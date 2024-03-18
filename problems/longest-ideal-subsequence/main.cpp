#include "main.h"
#include <cmath>
#include <algorithm>

int Solution::solve(std::string &s, int index, int prevChar) {
    if (index >= s.length()) {
        return 0;
    }

    if (dp[prevChar][index] != -1) {
        return dp[prevChar][index];
    }

    int ans = 0;
    if (prevChar == 26 || std::abs(static_cast<int>(s[index] - 'a') - prevChar) <= k) {
        ans = 1 + solve(s, index + 1, static_cast<int>(s[index] - 'a'));
        ans = std::max(ans, solve(s, index + 1, prevChar));
    } else {
        ans = solve(s, index + 1, prevChar);
    }

    return dp[prevChar][index] = ans;
}

int Solution::longestIdealString(std::string s, int k) {
    dp.clear();
    dp.resize(27, std::vector<int>(s.length() + 1, -1));
    this->k = k;

    return solve(s, 0, 26);
}
