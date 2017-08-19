class Solution {
public:
    /**
    * @param str: a string
    * @param offset: an integer
    * @return: nothing
    */
    void rotateString(string &str, int offset) {
        // wirte your code here
        if (!str.size()) return;
        offset = offset % str.size();
        str.insert(str.begin(), str.end() - offset, str.end());
        str.erase(str.end() - offset, str.end());
    }
};
