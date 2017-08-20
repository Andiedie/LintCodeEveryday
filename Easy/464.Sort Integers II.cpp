class Solution {
public:
    /**
    * @param A an integer array
    * @return void
    */
    void sortIntegers2(vector<int>& A) {
        // Write your code here
        quickSort(A, 0, A.size() - 1);
    }
    void quickSort(vector<int> &arr, int begin, int end) {
        if (begin >= end) return;
        int left = begin, right = end;
        int key = arr[(left + right) / 2];
        while (left <= right) {
            while (left <= right && arr[left] < key) left++;
            while (left <= right && arr[right] > key) right--;
            if (left <= right) swap(arr[left++], arr[right--]);
        }
        quickSort(arr, left, end);
        quickSort(arr, begin, right);
    }
};
