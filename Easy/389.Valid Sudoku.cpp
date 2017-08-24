class Solution {
public:
    /*
    * @param board: the board
    * @return: whether the Sudoku is valid
    */
    bool isValidSudoku(vector<vector<char>> board) {
        // write your code here
        int arr[10] = { 0 };
        for (int i = 0; i < 9; i++) {
            fill(arr, arr + 10, 0);
            for (int j = 0; j < 9; j++) {
                char temp = board[i][j];
                if (temp != '.' && arr[temp - '0']++)
                    return false;
            }
        }
        for (int i = 0; i < 9; i++) {
            fill(arr, arr + 10, 0);
            for (int j = 0; j < 9; j++) {
                char temp = board[j][i];
                if (temp != '.' && arr[temp - '0']++)
                    return false;
            }
        }
        for (int i = 0; i < 9; i++) {
            fill(arr, arr + 10, 0);
            int row = i / 3;
            int column = i % 3;
            for (int r = 0; r < 3; r++) {
                for (int c = 0; c < 3; c++) {
                    char temp = board[r + row * 3][c + column * 3];
                    if (temp != '.' && arr[temp - '0']++)
                        return false;
                }
            }
        }
        return true;
    }
};
