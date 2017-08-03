class Solution {
public:
    /*
    * @param a: An integer
    * @param b: An integer
    * @return: The sum of a and b
    */
    int aplusb(int a, int b) {
        // write your code here
        // http://www.jianshu.com/p/73ed1d1c5a6d
        if (b == 0) return a;
        return aplusb(a ^ b, (a & b) << 1);
    }
};
