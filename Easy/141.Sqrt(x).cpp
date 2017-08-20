class Solution {
public:
    /*
    * @param x: An integer
    * @return: The sqrt of x
    */
    int sqrt(int x) {
        // write your code here
        double ans = 1;
        for (int i = 0; i < 100; i++) {
            ans = (ans + x / ans) / 2;
        }
        return static_cast<int>(ans);
    }
};
