class Solution {
public:
    /**
    * @param s a string which consists of lowercase or uppercase letters
    * @return the length of the longest palindromes that can be built
    */
    int longestPalindrome(string& s) {
        // Write your code here
        int ans = 0;
        int alphabet[60] = { 0 };
        auto it = s.begin();
        while (it != s.end()) {
            int pos = *(it++) - 'A';
            alphabet[pos]++;
            if (alphabet[pos] == 2) {
                alphabet[pos] -= 2;
                ans += 2;
            }
        }
        for (int i = 0; i < 60; i++)
            if (alphabet[i] == 1) return ans + 1;
        return ans;
    }
};
