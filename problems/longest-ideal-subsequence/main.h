#include <string>
#include <vector>

class Solution {
private:
    int k;
    std::vector<std::vector<int>> dp;
    int solve(std::string &s, int index, int prevChar);

public:
    int longestIdealString(std::string s, int k);
};
