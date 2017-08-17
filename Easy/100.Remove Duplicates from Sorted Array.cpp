class Solution {
public:
    /**
    * @param A: a list of integers
    * @return : return an integer
    */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        if (!nums.size()) return 0;
        int len = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[len] != nums[i]) {
                nums[++len] = nums[i];
            }
        }
        return len + 1;
    }
};
