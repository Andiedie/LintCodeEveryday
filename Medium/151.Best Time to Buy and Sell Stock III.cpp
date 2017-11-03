class Solution {
public:
    /*
    * @param prices: Given an integer array
    * @return: Maximum profit
    */
    int maxProfit(vector<int> &prices) {
        // write your code here
        if (prices.size() < 2) return 0;
        vector<int> front(prices.size()), back(prices.size());
        for (int i = 1, minPrice = prices.front(); i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            front[i] = max(front[i - 1], prices[i] - minPrice);
        }

        for (int i = prices.size() - 2, maxPrice = prices.back(); i >= 0; i--) {
            maxPrice = max(maxPrice, prices[i]);
            back[i] = max(back[i + 1], maxPrice - prices[i]);
        }

        int res = 0;
        for (int i = 0; i < prices.size(); i++) {
            res = max(res, front[i] + back[i]);
        }
        return res;
    }
};
