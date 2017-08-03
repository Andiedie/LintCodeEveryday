class Solution {
public:
    /**
    * @param A an integer array sorted in ascending order
    * @param target an integer
    * @return an integer
    */
    int findPosition(vector<int>& A, int target) {
        // Write your code here
        return binarySearch(A, target, 0, A.size() - 1);
    }
    int binarySearch(vector<int>& arr, int target, int begin, int end) {
        if (end < begin) return -1;
        if (begin == end) {
            if (target == arr[begin]) return begin;
            return -1;
        }
        int mid = (begin + end) / 2;
        if (target <= arr[mid])
            return binarySearch(arr, target, begin, mid);
        else
            return binarySearch(arr, target, mid + 1, end);
    }
};
