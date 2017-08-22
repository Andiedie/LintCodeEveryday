class Solution {
public:
    /**
    * @param s: The first string
    * @param b: The second string
    * @return true or false
    */
    bool anagram(string s, string t) {
        // write your code here
        if (s.length() != t.length()) return false;
        int arr[127] = { 0 };
        for (int i = 0; i < s.size(); i++) {
            arr[s[i]]++;
            arr[t[i]]--;
        }
        for (int i = 0; i < 127; i++) {
            if (arr[i]) return false;
        }
        return true;
    }
};
