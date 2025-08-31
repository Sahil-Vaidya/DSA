class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int row, int col, char num) {
        // check row and col
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num) return false;
            if (board[i][col] == num) return false;
        }

        // check 3x3
        int sr = (row / 3) * 3, sc = (col / 3) * 3;
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                if (board[sr + r][sc + c] == num)
                    return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char num = '1'; num <= '9'; num++) {
                        if (isvalid(board, i, j, num)) {
                            board[i][j] = num; // do
                            if (solve(board)) return true; // explore
                            board[i][j] = '.'; // backtrack
                        }
                    }
                    return false; 
                }
            }
        }
        return true; 
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
