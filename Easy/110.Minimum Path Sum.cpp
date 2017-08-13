class Solution {
public:
    /**
    * @param grid: a list of lists of integers.
    * @return: An integer, minimizes the sum of all numbers along its path
    */
    int minPathSum(vector<vector<int>> &grid) {
        // write your code here
        int dp[1000][1000];
        if (grid.size() == 0 || grid[0].size() == 0) return 0;
        int row = grid.size(), column = grid[0].size();
        dp[0][0] = grid[0][0];
        for (int i = 1; i < row; i++)
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        for (int i = 1; i < column; i++)
            dp[0][i] = dp[0][i - 1] + grid[0][i];
        for (int i = 1; i < row; i++)
            for (int j = 1; j < column; j++)
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        return dp[row - 1][column - 1];
    }
};
