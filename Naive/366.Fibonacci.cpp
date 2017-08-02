class Solution {
public:
    /*
    * @param : an integer
    * @return: an ineger f(n)
    */
    int fibonacci(int n) {
        // write your code here
        return factorial_tail(n, 0, 1);
    }
private:
    int factorial_tail(int n, int a, int b) {
        if (n == 1)
            return a;
        if (n == 2)
            return b;
        return factorial_tail(n - 1, b, a + b);
    }
};
