class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, int dig) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == dig) {
                return false;
            }
        }

        for (int j = 0; j < 9; j++) {
            if (board[j][col] == dig) {
                return false;
            }
        }

        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;

        for (int i = srow; i <= srow + 2; i++) {
            for (int j = scol; j <= scol + 2; j++) {
                if (board[i][j] == dig) {
                    return false;
                }
            }
        }

        return true;
    }

    bool checksudkou(vector<vector<char>>& board, int row, int col) {

        if (row == 9) {
            return true;
        }
        int nextrow = row, nextcol = col + 1;
        if (nextcol ==  9) {
            nextrow = row + 1;
            nextcol = 0;
        }
        if (board[row][col] != '.') {
            return checksudkou(board, nextrow, nextcol);
        }
        for (int dig = '1'; dig <= '9'; dig++) {
            if (isSafe(board, row, col, dig)) {
                board[row][col] = dig;
                if (checksudkou(board, nextrow, nextcol)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        checksudkou(board, 0, 0);
    }
};