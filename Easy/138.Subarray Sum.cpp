class Solution {
public:
    /**
    * @param nums: A list of integers
    * @return: A list of integers includes the index of the first number
    *          and the index of the last number
    */
    vector<int> subarraySum(vector<int> nums) {
        // write your code here
        int sum = 0;
        auto it = nums.begin();
        while (it != nums.end()) sum += *it++;
        it = nums.begin();
        auto rit = nums.rbegin();
        while (sum != 0) {
            if (*it * sum > 0) {
                sum -= *it++;
            } else {
                sum -= *rit++;
            }
        }
        vector<int> ans;
        ans.push_back(it - nums.begin());
        ans.push_back(nums.size() - (rit - nums.rbegin()) - 1);
        return ans;
    }
};
