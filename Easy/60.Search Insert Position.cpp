class Solution {
public:
    /*
    * @param A: an integer sorted array
    * @param target: an integer to be inserted
    * @return: An integer
    */
    int searchInsert(vector<int> A, int target) {
        // write your code here
        auto it = A.begin();
        while (it != A.end()) {
            if (*it >= target) {
                return it - A.begin();
            }
            it++;
        }
        return A.size();
    }
};
