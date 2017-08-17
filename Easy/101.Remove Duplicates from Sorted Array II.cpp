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
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[len] != nums[i] || count < 2) {
                count++;
                if (nums[len] != nums[i])
                    count = 1;
                nums[++len] = nums[i];
            }
        }
        return len + 1;
    }
};
