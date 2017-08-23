class Solution {
public:
    /*
    * @param s: A string
    * @return: Whether the string is a valid palindrome
    */
    bool isPalindrome(string s) {
        // write your code here
        if (!s.size()) return true;
        auto it = s.begin();
        while (it != s.end()) {
            if (*it >= 'A' && *it <= 'Z') *it += 'a' - 'A';
            it++;
        }
        it = s.begin();
        auto rit = s.end() - 1;
        while (it < rit) {
            while ((*it < 'a' || *it > 'z') &&
                (*it < '0' || *it > '9') && it < rit) it++;
            while ((*rit < 'a' || *rit > 'z') &&
                (*rit < '0' || *rit > '9') && it < rit) rit--;
            if (*it++ != *rit--) return false;
        }
        return true;
    }
};
