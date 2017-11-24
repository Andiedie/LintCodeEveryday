class Solution {
public:
    /*
    * @param A: an array
    * @return: total of reverse pairs
    */
    long long reversePairs(vector<int> &A) {
        // write your code here
        return mergeSort(A, 0, A.size() - 1);
    }
private:
    long long mergeSort(vector<int> &A, int start, int end) {
        if (start >= end) return 0;
        long long sum = 0;
        int mid = (start + end) / 2;
        sum += mergeSort(A, start, mid);
        sum += mergeSort(A, mid + 1, end);
        sum += merge(A, start, mid, end);
        return sum;
    }
    long long merge(vector<int> &A, int start, int mid, int end) {
        int left = start;
        int right = mid + 1;
        vector<int> temp;
        long long sum = 0;
        while (left <= mid && right <= end) {
            if (A[left] <= A[right]) {
                temp.push_back(A[left++]);
            } else {
                temp.push_back(A[right++]);
                sum += mid - left + 1;
            }
        }
        while (left <= mid) temp.push_back(A[left++]);
        while (right <= end) temp.push_back(A[right++]);
        for (int i = 0; i < temp.size(); i++)
            A[i + start] = temp[i];
        return sum;
    }
};
