class Solution {
public:
    /*
    * @param n: An integer
    * @param nums: An array
    * @return: the Kth largest element
    */
    int kthLargestElement(int n, vector<int> &nums) {
        // write your code here
        return kthSmallestElement(nums.size() - n + 1, nums, 0, nums.size() - 1);
    }
private:
    int kthSmallestElement(int n, vector<int> &nums, int begin, int end) {
        // write your code here
        if (begin == end) return nums[begin];
        int pivot = nums[rand() % (end - begin + 1) + begin];
        int left = begin;
        for (int i = left; i <= end; i++) {
            if (nums[i] < pivot) swap(nums[i], nums[left++]);
        }
        int right = left;
        for (int i = right; i <= end; i++) {
            if (nums[i] == pivot) swap(nums[i], nums[right++]);
        }

        int leftLength = left - begin;
        int middleLength = right - left;

        if (n <= leftLength) {
            return kthSmallestElement(n, nums, begin, begin + leftLength - 1);
        } else if (leftLength < n && n <= leftLength + middleLength) {
            return pivot;
        } else {
            return kthSmallestElement(n - leftLength - middleLength, nums, right, end);
        }
    }
};