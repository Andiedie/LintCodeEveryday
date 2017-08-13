class Solution {
public:
    /**
    * @param nums an integer array
    * @return nothing, do this in-place
    */
    void moveZeroes(vector<int>& nums) {
        // Write your code here
        auto it = nums.begin();
        int count = 0;
        while (it != nums.end()) {
            if (*it == 0) {
                it = nums.erase(it);
                count++;
            } else {
                it++;
            }
        }
        while (count--) nums.push_back(0);
    }
};
