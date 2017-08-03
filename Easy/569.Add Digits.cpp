class Solution {
public:
    /**
    * @param num a non-negative integer
    * @return one digit
    */
    int addDigits(int num) {
        // Write your code here
        int ans = num;
        while (ans > 9) {
            num = ans;
            ans = 0;
            while (num) {
                ans += num % 10;
                num /= 10;
            }
        }
        return ans;
    }
};
