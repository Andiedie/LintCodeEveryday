class Solution {
public:
    /*
    * @param A: An array of integers
    * @return: A long integer
    */
    long long permutationIndex(vector<int> A) {
        // write your code here
        int n = A.size();
        if (n == 1)
            return 1;
        long long smaller[30];
        for (int i = 0; i < n; ++i) {
            smaller[i] = 0;
            for (int j = 0; j < n; ++j)
                if (A[j] < A[i])
                    smaller[i] ++;
        }
        long long F[15];
        F[0] = 1;
        for (int i = 1; i < 15; ++i)
            F[i] = F[i - 1] * i;
        long long sum = 0;
        for (int i = 0, k = n - 1; i < n - 1; i++, k--) {
            sum += (long long)(smaller[i]) * F[k];
            for (int j = i + 1; j < n; ++j)
                if (smaller[i] < smaller[j])
                    smaller[j]--;
        }
        return sum + 1;

    }
};
