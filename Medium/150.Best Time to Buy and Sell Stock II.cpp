class Solution {
public:
    /*
    * @param prices: Given an integer array
    * @return: Maximum profit
    */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int minPrice = INT_MAX;
        int res = 0;
        for (auto p : prices) {
            if (p > minPrice) {
                res += p - minPrice;
                minPrice = p;
            } else if (p < minPrice) {
                minPrice = p;
            }
        }
        return res;
    }
};
