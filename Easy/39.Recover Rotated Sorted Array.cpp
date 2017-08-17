class Solution {
public:
    /*
    * @param nums: An integer
    * @return:
    */

    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        auto it = nums.begin();
        if (it == nums.end()) return;
        it++;
        while (it != nums.end()) {
            if (*it < *nums.begin()) break;
            it++;
        }
        if (it != nums.end()) {
            int count = it - nums.begin();
            nums.reserve(nums.size() + count);
            copy_n(nums.begin(), count, back_inserter(nums));
            nums.erase(nums.begin(), nums.begin() + count);
        }
    }
};
