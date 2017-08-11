class Solution {
public:
    /**
    * @param nums: A list of integers.
    * @return: An integer denotes the middle number of the array.
    */
    int median(vector<int> &nums) {
        // write your code here
        priority_queue<int> que;
        int count = (nums.size() + 1) / 2;
        for (int i = 0; i < nums.size(); i++) {
            if (que.size() == count) {
                if (que.top() > nums[i]) {
                    que.pop();
                    que.push(nums[i]);
                }
            } else {
                que.push(nums[i]);
            }
        }
        return que.top();
    }
};
