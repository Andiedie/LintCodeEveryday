class Solution {
public:
    /*
    * @param s: A string
    * @return: A string
    */
    string reverseWords(string s) {
        // write your code here
        string ans = "";
        int begin = 0;
        while (begin != -1) {
            int end = s.find(' ', begin);
            if (end == -1) {
                if (begin >= s.size()) break;
                end = s.size();
            } else if (end == begin) {
                begin++;
                continue;
            }
            reverse(s.begin() + begin, s.begin() + end);
            if (ans.size()) ans.push_back(' ');
            ans.append(s.begin() + begin, s.begin() + end);
            begin = end + 1;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
