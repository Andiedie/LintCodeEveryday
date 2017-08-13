class Solution {
public:
    /**
    * @param nums: a list of integers
    * @return: A integer denote the sum of minimum subarray
    */
    int minSubArray(vector<int> nums) {
        // write your code here
        if (nums.size() <= 0) return 0;
        int ans = INT_MAX, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            ans = min(ans, sum);
            sum = min(0, sum);
        }
        return ans;
    }
};
