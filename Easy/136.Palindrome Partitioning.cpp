class Solution {
public:
    /*
    * @param s: A string
    * @return: A list of lists of string
    */
    vector<vector<string>> partition(string &s) {
        // write your code here
        helper(s);
        return ans;
    }
private:
    vector<vector<string>> ans;
    vector<string> cur;
    void helper(string str) {
        if (str.length()) {
            for (int i = 0; i < str.length(); i++) {
                string sub = str.substr(0, i + 1);
                if (check(sub)) {
                    cur.push_back(sub);
                    helper(str.substr(i + 1));
                    cur.pop_back();
                }
            }
        } else {
            ans.push_back(cur);
        }
    }
    bool check(string &str) {
        for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
            if (str[i] != str[j]) return false;
        }
        return true;
    }
};
