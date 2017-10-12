class Solution {
public:
    /*
     * @param : the given number
     * @return: whether whether there're two integers
     */
    bool checkSumOfSquareNumbers(int num) {
        // write your code here
        if (num < 0) return false;
        int right = floor(sqrt(num));
        if (right * right == num) return true;
        int left = 1;
        while (left < right) {
            int result = left * left + right * right;
            if (result == num) {
                return true;
            } else if (result > num) {
                right--;
            } else {
                left++;
            }
        }
        return false;
    }
};
