class Solution {
public:
    /**
    * @param nums: A list of integers
    * @return: A integer indicate the sum of max subarray
    */
    int maxSubArray(vector<int> nums) {
        // write your code here
        if (nums.size() <= 0) return 0;
        int ans = INT_MIN, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            ans = max(ans, sum);
            sum = max(0, sum);
        }
        return ans;
    }
};
