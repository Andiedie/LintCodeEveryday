class Solution {
public:
    /**
    * @param nums: The integer array.
    * @param target: Target number to find.
    * @return: The first position of target. Position starts from 0.
    */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        return search(array, target, 0, array.size() - 1);
    }
    int search(vector<int> &arr, int target, int first, int last) {
        if (first > last) return -1;
        if (first == last) {
            if (arr[first] == target)
                return first;
            return -1;
        }
        int mid = (first + last) / 2;
        if (target > arr[mid]) return search(arr, target, mid + 1, last);
        return search(arr, target, first, mid);
    }
};
