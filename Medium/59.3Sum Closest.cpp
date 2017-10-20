class Solution {
public:
    /*
    * @param numbers: Give an array numbers of n integer
    * @param target: An integer
    * @return: return the sum of the three integers, the sum closest target.
    */
    int threeSumClosest(vector<int> &numbers, int target) {
        // write your code here
        int ans = INT_MIN;
        sort(numbers.begin(), numbers.end());
        auto it = numbers.begin();
        while (it != numbers.end()) {
            if (it != numbers.begin() && *it == *(it - 1)) {
                it++; continue;
            }
            auto nega = it + 1;
            auto posi = numbers.end() - 1;
            while (nega < posi) {
                int sum = *nega + *posi + *it;
                if (sum == target) {
                    return sum;
                } else if (sum > target) {
                    posi--;
                } else {
                    nega++;
                }
                if (abs(sum - target) < abs(ans - target)) {
                    ans = sum;
                }
            }
            it++;
        }
        return ans;
    }
};
