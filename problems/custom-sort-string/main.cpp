#include "main.h"

std::string Solution::customSortString(std::string order, std::string s) {
    std::unordered_map<char, int> count_char;

    for (const char& c : s) {
        count_char[c]++;
    }

    std::string res = "";
    for (const char& c : order) {
        if (count_char[c] > 0) {
            res += std::string(count_char[c], c);
            count_char[c] = 0;
        }
    }

    // Remaining characters
    for (char c = 'a'; c <= 'z'; c++) {
        if (count_char[c] > 0) {
            res += std::string(count_char[c], c);
            count_char[c] = 0;
        }
    }

    return res;
}
