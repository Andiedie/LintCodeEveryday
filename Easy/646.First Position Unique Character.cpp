class Solution {
public:
    /**
    * @param s a string
    * @return it's index
    */
    int firstUniqChar(string& s) {
        // Write your code here
        int arr[256] = { 0 };
        string::iterator it = s.begin();
        while (it != s.end()) {
            arr[*(it++)]++;
        }
        it = s.begin();
        while (it != s.end()) {
            if (arr[*(it++)] == 1) return --it - s.begin();
        }
        return -1;
    }
};
