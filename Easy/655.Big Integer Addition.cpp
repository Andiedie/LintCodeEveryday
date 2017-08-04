class Solution {
public:
    /**
    * @param num1 a non-negative integers
    * @param num2 a non-negative integers
    * @return return sum of num1 and num2
    */
    string addStrings(string& num1, string& num2) {
        // Write your code here
        string a = num1.size() > num2.size() ? num1 : num2;
        string b = num1.size() > num2.size() ? num2 : num1;
        for (int i = b.size() - 1; i >= 0; i--) {
            a[i + a.size() - b.size()] += b[i] - '0';
        }
        for (int i = a.size() - 1; i > 0; i--) {
            if (a[i] > '9') {
                a[i - 1]++;
                a[i] -= 10;
            }
        }
        if (a[0] > '9') {
            a[0] -= 10;
            a = '1' + a;
        }
        return a;
    }
};
