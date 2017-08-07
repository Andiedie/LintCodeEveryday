class Solution {
public:
    /**
    *@param a, b: Two integer
    *return: An integer
    */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int _xor = a ^ b;
        int count = 0;
        while (_xor) {
            _xor = _xor & (_xor-1);
            count++;
        }
        return count;
    }
};
