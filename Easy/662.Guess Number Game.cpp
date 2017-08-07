// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    /**
    * @param n an integer
    * @return the number you guess
    */
    int guessNumber(int n) {
        // Write your code here
        return helper(1, n);
    }
    int helper(int first, int last) {
        int mid = first + (last - first) / 2;
        int status = guess(mid);
        if (status < 0) return helper(first, mid - 1);
        else if (status > 0) return helper(mid + 1, last);
        return mid;
    }
};
