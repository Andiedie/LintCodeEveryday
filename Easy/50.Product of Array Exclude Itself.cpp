class Solution {
public:
    /*
    * @param : Given an integers array A
    * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
    */
    vector<long long> productExcludeItself(vector<int> nums) {
        // write your code here
        vector<long long> left, right, ans;
        if (!nums.size()) return ans;
        left.push_back(1); right.push_back(1);
        auto begin = nums.begin();
        auto rbegin = nums.rbegin();
        while (begin != nums.end() - 1) {
            left.push_back(*begin * left.back());
            right.insert(right.begin(), *rbegin * right.front());
            begin++; rbegin++;
        }
        auto l = left.begin(), r = right.begin();
        while (l != left.end()) {
            ans.push_back(*(l++) * *(r++));
        }
        return ans;
    }
};
