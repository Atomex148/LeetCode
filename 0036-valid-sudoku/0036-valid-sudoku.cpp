class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> set;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                if (set.find("row" + to_string(i) + to_string(board[i][j])) == set.end()
                    && set.find("col" + to_string(j) + to_string(board[i][j])) == set.end()
                    && set.find("sec" + to_string(i / 3) + to_string(j / 3) + to_string(board[i][j])) == set.end()) {

                    set.insert("row" + to_string(i) + to_string(board[i][j]));
                    set.insert("col" + to_string(j) + to_string(board[i][j]));
                    set.insert("sec" + to_string(i / 3) + to_string(j / 3) + to_string(board[i][j]));

                }
                else return false;
            }
        }

        return true;
    }
};