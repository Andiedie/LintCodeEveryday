class Solution {
public:
    /**
    * @param A: A string includes Upper Case letters
    * @param B: A string includes Upper Case letter
    * @return:  if string A contains all of the characters in B return true
    *           else return false
    */
    bool compareStrings(string A, string B) {
        // write your code here
        int alphabet[26] = { 0 };
        for (int i = 0; i < A.size(); i++) {
            alphabet[A[i] - 'A']++;
        }
        for (int i = 0; i < B.size(); i++) {
            alphabet[B[i] - 'A']--;
            if (alphabet[B[i] - 'A'] < 0) {
                return false;
            }
        }
        return true;
    }
};
