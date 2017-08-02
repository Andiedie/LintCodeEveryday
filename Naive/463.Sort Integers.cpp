class Solution {
public:
    /**
     * @param A an integer array
     * @return void
     */
    void sortIntegers(vector<int>& A) {
        // Write your code here
        if (A.size() == 0) return;
        for (size_t i = 0; i < A.size() - 1; i++) {
            for (size_t j = 0; j < A.size() - 1 - i; j++) {
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
    }
};
