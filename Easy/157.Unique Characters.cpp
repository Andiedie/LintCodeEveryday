class Solution {
public:
    /**
    * @param str: a string
    * @return: a boolean
    */
    bool isUnique(string &str) {
        // write your code here
        int arr[127] = { 0 };
        auto it = str.begin();
        while (it != str.end()) arr[*it++]++;
        for (int i = 0; i < 127; i++) {
            if (arr[i] > 1) return false;
        }
        return true;
    }
};
