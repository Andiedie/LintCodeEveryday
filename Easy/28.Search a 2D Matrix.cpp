class Solution {
public:
    /*
    * @param matrix: matrix, a list of lists of integers
    * @param target: An integer
    * @return: a boolean, indicate whether matrix contains target
    */
    bool searchMatrix(vector<vector<int>> matrix, int target) {
        // write your code here
        if (!matrix.size() || !matrix[0].size()) return false;
        return search(matrix, target, 0, matrix.size() * matrix[0].size() - 1);
    }
    bool search(vector<vector<int>> &matrix, int target, int left, int right) {
        if (left > right) return false;
        int mid = left + (right - left) / 2;
        int row = mid / matrix[0].size();
        int column = mid % matrix[0].size();
        if (target == matrix[row][column]) return true;
        if (target < matrix[row][column]) return search(matrix, target, left, mid - 1);
        if (target > matrix[row][column]) return search(matrix, target, mid + 1, right);
    }
};
