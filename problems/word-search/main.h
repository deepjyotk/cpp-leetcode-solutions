#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <string>

class Solution {
private: 
    int rows, cols; 

public:
    bool withinRange(int x, int y);
    bool dfs(std::vector<std::vector<char>>& board, std::string& word, 
             std::vector<std::vector<bool>>& visited, int x, int y, int wordIndex);
    bool exist(std::vector<std::vector<char>>& board, std::string word);
};

#endif // MAIN_H
