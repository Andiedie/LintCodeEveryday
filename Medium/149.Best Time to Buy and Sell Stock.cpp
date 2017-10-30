class Solution {
public:
    /*
    * @param prices: Given an integer array
    * @return: Maximum profit
    */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int ans = 0;
        int minPrice = INT_MAX;
        if (prices.empty()) return ans;
        for (auto i : prices) {
            minPrice = min(minPrice, i);
            ans = max(i - minPrice, ans);
        }
        return ans;
    }
};
