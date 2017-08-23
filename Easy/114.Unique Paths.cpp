class Solution {
public:
    /*
    * @param m: positive integer (1 <= m <= 100)
    * @param n: positive integer (1 <= n <= 100)
    * @return: An integer
    */
    int arr[101][101] = { { 0 } };
    int uniquePaths(int m, int n) {
        // write your code here
        return helper(1, 1, m, n);
    }
    int helper(int x, int y, int m, int n) {
        if (x == m && y == n) return 0;
        if (x == m || y == n) return 1;
        int down, right;
        if (!arr[x + 1][y])arr[x + 1][y] = helper(x + 1, y, m, n);
        down = arr[x + 1][y];
        if (!arr[x][y + 1])arr[x][y + 1] = helper(x, y + 1, m, n);
        right = arr[x][y + 1];
        return down + right;
    }
};
