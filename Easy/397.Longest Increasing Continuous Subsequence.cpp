class Solution {
public:
    /*
    * @param : An array of Integer
    * @return: an integer
    */
    int longestIncreasingContinuousSubsequence(vector<int> A) {
        // write your code here
        if (A.size() < 3) return A.size();
        int flag = 0;
        int ans = 0;
        int count = 0;
        auto it = A.begin() + 1;
        while (it != A.end()) {
            int diff = *it - *(it - 1);
            if (flag == 0) {
                flag = diff / abs(diff);
                count = 2;
            } else if (flag == diff / abs(diff)) {
                count++;
            } else {
                flag = -flag;
                ans = max(ans, count);
                count = 2;
            }
            it++;
        }
        return max(ans, count);
    }
};
