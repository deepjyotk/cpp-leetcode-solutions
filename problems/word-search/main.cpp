#include "main.h"

bool Solution::withinRange(int x, int y) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

bool Solution::dfs(std::vector<std::vector<char>>& board, std::string& word, 
                   std::vector<std::vector<bool>>& visited, int x, int y, int wordIndex) {
    if (wordIndex == word.size()) {
        return true;
    }

    visited[x][y] = true;
    int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    for (int di = 0; di < 4; di++) {
        int newx = x + dir[di][0];
        int newy = y + dir[di][1];

        if (withinRange(newx, newy) && !visited[newx][newy] && board[newx][newy] == word[wordIndex]) {
            if (dfs(board, word, visited, newx, newy, wordIndex + 1)) {
                return true;
            }
        }
    }

    visited[x][y] = false;
    return false;
}

bool Solution::exist(std::vector<std::vector<char>>& board, std::string word) {
    rows = board.size();
    cols = board[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == word[0]) {
                std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
                if (dfs(board, word, visited, i, j, 1)) {
                    return true;
                }
            }
        }
    }

    return false;
}
