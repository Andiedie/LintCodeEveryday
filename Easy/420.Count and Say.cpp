class Solution {
public:
    /**
    * @param n the nth
    * @return the nth sequence
    */
    string countAndSay(int n) {
        // Write your code here
        if (n == 1) return "1";
        string last = countAndSay(n - 1);
        string::iterator it = last.begin();
        char current = ' ';
        int count = 0;
        string ans = "";
        while (it != last.end()) {
            if (current != *it) {
                if (count)
                    ans += to_string(count) + current;
                current = *it;
                count = 1;
            } else {
                count++;
            }
            it++;
        }
        ans += to_string(count) + current;
        return ans;
    }
};
