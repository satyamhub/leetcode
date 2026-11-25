
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int i = 0; i < 9; i++) {
            vector<bool> freqC(256, false);

            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (freqC[board[i][j]])
                        return false;

                    freqC[board[i][j]] = true;
                }
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            vector<bool> freqR(256, false);

            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    if (freqR[board[j][i]])
                        return false;

                    freqR[board[j][i]] = true;
                }
            }
        }
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                vector<bool> freq(256, false);

                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {

                        if (board[i][j] != '.') {
                            if (freq[board[i][j]])
                                return false;

                            freq[board[i][j]] = true;
                        }
                    }
                }
            }
        }

        return true;
    }
};
