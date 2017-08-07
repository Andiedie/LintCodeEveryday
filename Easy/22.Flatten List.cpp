/**
* // This is the interface that allows for creating nested lists.
* // You should not implement it, or speculate about its implementation
* class NestedInteger {
*   public:
*     // Return true if this NestedInteger holds a single integer,
*     // rather than a nested list.
*     bool isInteger() const;
*
*     // Return the single integer that this NestedInteger holds,
*     // if it holds a single integer
*     // The result is undefined if this NestedInteger holds a nested list
*     int getInteger() const;
*
*     // Return the nested list that this NestedInteger holds,
*     // if it holds a nested list
*     // The result is undefined if this NestedInteger holds a single integer
*     const vector<NestedInteger> &getList() const;
* };
*/
class Solution {
public:
    // @param nestedList a list of NestedInteger
    // @return a list of integer
    vector<int> flatten(vector<NestedInteger> &nestedList) {
        // Write your code here
        return helper(nestedList);
    }
    vector<int> helper(const vector<NestedInteger> &nested) {
        auto it = nested.begin();
        vector<int> ans;
        while (it != nested.end()) {
            if (it->isInteger()) {
                ans.push_back(it->getInteger());
            } else {
                const vector<NestedInteger> &v = it->getList();
                vector<int> flat = helper(v);
                ans.insert(ans.end(), flat.begin(), flat.end());
            }
            it++;
        }
        return ans;
    }
};
