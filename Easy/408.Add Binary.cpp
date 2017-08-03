class Solution {
public:
    /**
    * @param a a number
    * @param b a number
    * @return the result
    */
    string addBinary(string& a, string& b) {
        // Write your code here
        if (b.size() > a.size()) swap(a, b);
        string ans = a;
        for (int i = 0; i < b.size(); i++) {
            if (b[i] == '1')
                ans[i + a.size() - b.size()]++;
        }
        for (int i = ans.size() - 1; i >= 0; i--) {
            if (ans[i] > '1') {
                ans[i] -= 2;
                if (i == 0)
                  ans = '1' + ans;
                else
                  ans[i - 1]++;
            }
        }
        return ans;
    }
};
