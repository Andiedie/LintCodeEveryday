class Solution {
public:
    /**
    * @param s A string
    * @return the length of last word
    */
    int lengthOfLastWord(string& s) {
        // Write your code here
        int count = 0;
        auto it = s.end();
        while (it != s.begin()) {
            it--;
            if (*it == ' ') break;
            count++;
        }
        return count;
    }
};
