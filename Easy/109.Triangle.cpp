class Solution {
public:
    /*
    * @param triangle: a list of lists of integers
    * @return: An integer, minimum path sum
    */
    int minimumTotal(vector<vector<int>> triangle) {
        // write your code here
        vector<int> dp(triangle.back());
        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j < triangle[i].size(); j++) {
                dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
            }
        }
        return dp[0];
    }
};
