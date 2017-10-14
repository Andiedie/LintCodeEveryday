class Solution {
public:
    /*
     * @param : the 1st string
     * @param : the 2nd string
     * @return: uncommon characters of given strings
     */
    string concatenetedString(string &s1, string &s2) {
        // write your code here
        bool alphabet[26] = {};
        for (char i : s2) {
            for (char j : s1) {
                if (j == i) {
                    alphabet[j - 'a'] = true;
                    break;
                }
            }
        }
        string res = s1 + s2;
        auto it = res.begin();
        while (it != res.end()) {
            if (alphabet[*it - 'a']) {
                res.erase(it);
            } else {
                it++;
            }
        }
        return res;
    }
};
