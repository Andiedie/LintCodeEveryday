class Solution {
public:
    /*
    * @param triangle: a list of lists of integers
    * @return: An integer, minimum path sum
    */
    int minimumTotal(vector<vector<int>> triangle) {
        // write your code here
        vector<vector<int>> dp(triangle);
        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j < triangle[i].size(); j++) {
                dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
            }
        }
        return dp[0][0];
    }
};
