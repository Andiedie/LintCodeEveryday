class Solution {
public:
    /*
    * @param nums: a list of n integers
    * @return: true if there is a 132 pattern or false
    */
    bool find132pattern(vector<int> &nums) {
        if (nums.size() < 3) return false;
        // write your code here
        stack<int> s;
        int third = INT_MIN;
        auto it = nums.rbegin();
        while (it != nums.rend()) {
            if (third > *it) return true;
            else while (!s.empty() && *it > s.top()) {
                third = s.top();
                s.pop();
            }
            s.push(*it);
            it++;
        }
        return false;
    }
};
