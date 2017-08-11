class Solution {
public:
    /**
    * @param A and B: sorted integer array A and B.
    * @return: A new sorted integer array
    */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> ans;
        auto ait = A.begin(), bit = B.begin();
        while (ait != A.end() && bit != B.end())
            ans.push_back(*ait < *bit ? *ait++ : *bit++);
        while (ait != A.end())
            ans.push_back(*ait++);
        while (bit != B.end())
            ans.push_back(*bit++);
        return ans;
    }
};
