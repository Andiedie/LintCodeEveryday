class Solution {
public:
    /*
    * @param matrix: An array of integers
    * @return: An array of integers
    */
    vector<int> printZMatrix(vector<vector<int>> matrix) {
        // write your code here
        vector<int> ans;
        if (matrix.size() == 0 || matrix[0].size() == 0) return ans;
        int rowCount = matrix.size();
        int columnCount = matrix[0].size();
        int row = 0, column = 0;
        int dr = -1, dc = 1;
        ans.push_back(matrix[row][column]);
        for (int i = 0; i < rowCount * columnCount - 1; i++) {
            if (row + dr >= 0 && row + dr < rowCount
                && column + dc >= 0 && column + dc < columnCount) {
                row += dr;
                column += dc;
            } else {
                if (dr == -1 && dc == 1) {
                    column + 1 < columnCount ? column++ : row++;
                    dr = 1; dc = -1;
                } else {
                    row + 1 < rowCount ? row++ : column++;
                    dr = -1; dc = 1;
                }
            }
            ans.push_back(matrix[row][column]);
        }
        return ans;
    }
};
