class Solution {
public:

    /*
    * @param digits: a number represented as an array of digits
    * @return: the result
    */
    vector<int> plusOne(vector<int> digits) {
        // write your code here
        if (!digits.size()) return digits;
        auto it = digits.end() - 1;
        (*it)++;
        while (it != digits.begin()) {
            if (*it > 9) {
                *it -= 10;
                *(it - 1) += 1;
            }
            it--;
        }
        if (*it > 9) {
            *it -= 10;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
