class Solution {
public:
    /**
    * @param n: An integer
    * @return: An integer
    */
    int climbStairs(int n) {
        // write your code here
        return fibonacci(n, 1, 1);
    }
    int fibonacci(int n, int a, int b) {
        if (n <= 1) return b;
        return fibonacci(n - 1, b, a + b);
    }
};
