class Solution {
public:
    /**
    * @param nums: a vector of integers
    * @return: nothing
    */
    void partitionArray(vector<int> &nums) {
        // write your code here
        if (!nums.size()) return;
        auto left = nums.begin();
        auto right = nums.end() - 1;
        while (left < right) {
            while (*left % 2 == 1 && left < right) left++;
            while (*right % 2 == 0 && left < right) right--;
            if (left < right) {
                int temp = *left;
                *left = *right;
                *right = temp;
            }
        }
    }
};
