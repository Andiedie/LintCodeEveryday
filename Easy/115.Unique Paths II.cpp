class Solution {
public:
    /*
    * @param obstacleGrid: A list of lists of integers
    * @return: An integer
    */
    int dp[100][100] = { {0} };
    int uniquePathsWithObstacles(vector<vector<int>> grid) {
        // write your code here
        if (!grid.size() || !grid[0].size()) return 0;
        int m = grid.size() - 1, n = grid[0].size() - 1;
        if (grid[0][0] || grid[m][n]) return 0;
        for (int x = m; x >= 0; x--) {
            for (int y = n; y >= 0; y--) {
                if (x == m && y == n) dp[x][y] = 1;
                else {
                    if (x == m || !grid[x + 1][y]) dp[x][y] += dp[x + 1][y];
                    if (y == n || !grid[x][y + 1]) dp[x][y] += dp[x][y + 1];
                }
            }
        }
        return dp[0][0];
    }
};
