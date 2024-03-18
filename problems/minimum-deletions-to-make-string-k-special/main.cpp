#include "main.h"
#include <algorithm> // for std::sort and std::min

int Solution::minimumDeletions(std::string word, int k) {
    std::unordered_map<char, int> char_freq;
    for (char &c: word) {
        char_freq[c]++;
    }

    std::vector<int> freqCount;
    for (auto &x: char_freq) {
        freqCount.push_back(x.second);
    }

    std::sort(begin(freqCount), end(freqCount));
    int n = freqCount.size();
    int deleted_from_s = 0;
    int res = word.size();

    for (int i = 0; i < n; i++) {
        int currRes = deleted_from_s;

        for (int j = n - 1; j > i; j--) {
            if ((freqCount[j] - freqCount[i]) <= k) break;
            int allowed_freq = freqCount[i] + k;

            currRes += freqCount[j] - allowed_freq;
        }

        res = std::min(res, currRes);
        deleted_from_s += freqCount[i];
    }

    return res;
}
