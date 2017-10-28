class Solution {
public:
    /*
    * @param m: An integer m denotes the size of a backpack
    * @param A: Given n items with size A[i]
    * @param V: Given n items with value V[i]
    * @return: The maximum value
    */
    int backPackII(int m, vector<int> &A, vector<int> &V) {
        // write your code here
        vector<int> vec(m + 1);
        for (int i = 0; i < A.size(); i++) {
            for (int j = m; j > 0; j--) {
                if (j >= A[i]) {
                    vec[j] = max(vec[j], vec[j - A[i]] + V[i]);
                }
            }
        }
        return vec.back();
    }
};
