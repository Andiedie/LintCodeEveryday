class Solution {
public:
    /**
    * @param s a string
    * @param t a string
    * @return true if the characters in s
    * can be replaced to get t or false
    */
    bool isIsomorphic(string& s, string& t) {
        // Write your code here
        char arrA[128] = { 0 };
        char arrB[128] = { 0 };
        if (s.size() != t.size()) return false;
        if (!s.size()) return true;
        for (int i = 0; i < s.size(); i++) {
            int indexA = s[i], indexB = t[i];
            if (!arrA[indexA] && !arrB[indexB]) {
                arrA[indexA] = t[i];
                arrB[indexB] = s[i];
            } else {
                if (arrA[indexA] != t[i] || arrB[indexB] != s[i])
                    return false;
            }
        }
        return true;
    }
};
