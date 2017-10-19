class Solution {
public:
    /*
    * @param numbers: Give an array numbers of n integer
    * @return: Find all unique triplets in the array which gives the sum of zero.
    */
    vector<vector<int>> threeSum(vector<int> &numbers) {
        // write your code here
        vector<vector<int>> ans;
        sort(numbers.begin(), numbers.end());
        auto it = numbers.begin();
        while (it != numbers.end()) {
            if (*it > 0) break;
            if (it != numbers.begin() && *it == *(it - 1)) {
                it++; continue;
            }
            auto nega = it + 1;
            auto posi = numbers.end() - 1;
            while (nega < posi) {
                int sum = *nega + *posi + *it;
                if (sum == 0) {
                    ans.push_back(vector<int>{*it, *nega, *posi});
                    posi--;
                    while (*posi == *(posi + 1)) posi--;
                    nega++;
                    while (*nega == *(nega - 1)) nega++;
                } else if (sum > 0) {
                    posi--;
                } else {
                    nega++;
                }
            }
            it++;
        }
        return ans;
    }
};
