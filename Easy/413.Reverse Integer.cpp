class Solution {
public:
    /*
    * @param n: the integer to be reversed
    * @return: the reversed integer
    */
    int reverseInteger(int n) {
        // write your code here
        if (!n) return 0;
        bool negative = n < 0;
        if (negative) n = -n;
        string str = to_string(n);
        reverse(str.begin(), str.end());
        try {
            n = stoi(str);
        } catch (exception) {
            return 0;
        }
        if (negative) return -n;
        return n;
    }
};
