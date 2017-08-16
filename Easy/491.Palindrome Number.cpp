class Solution {
public:
    /*
    * @param num: a positive number
    * @return: true if it's a palindrome or false
    */
    bool isPalindrome(int num) {
        // write your code here
        string number = to_string(num);
        for (int i = 0; i < number.length() / 2; i++) {
            if (number[i] != number[number.length() - i - 1]) return false;
        }
        return true;
    }
};
