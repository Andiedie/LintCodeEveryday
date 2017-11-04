class Solution {
public:
    /*
    * @param num1: a non-negative integers
    * @param num2: a non-negative integers
    * @return: return product of num1 and num2
    */
    string multiply(string &num1, string &num2) {
        // write your code here
        if (num1 == "0" || num2 == "0") return "0";
        int n = num1.size() + num2.size();
        int *res = new int[n];
        for (int i = 0; i < n; i++) res[i] = 0;
        if (num1.length() < num2.length()) swap(num1, num2);
        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {
                res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            }
        }
        for (int i = n - 1; i > 0; i--) {
            res[i - 1] += res[i] / 10;
            res[i] %= 10;
        }
        string ans;
        for (int i = 0; i < n; i++) {
            if (res[i] == 0 && ans.empty()) continue;
            ans += char(res[i] + '0');
        }
        return ans;
    }
};
