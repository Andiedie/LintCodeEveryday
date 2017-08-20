class Solution {
public:
    /**
    * @param string: An array of Char
    * @param length: The true length of the string
    * @return: The true length of new string
    */
    int replaceBlank(char string[], int length) {
        // Write your code here
        if (length <= 0) return 0;
        int spaceCount = 0;
        int cur = 0;
        while (cur < length) {
            if (string[cur++] == ' ') spaceCount++;
        }
        int ans = length + spaceCount * 2;
        while (cur >= 0) {
            if (string[cur] == ' ') {
                string[cur + 2 * spaceCount] = '0';
                string[cur + 2 * spaceCount - 1] = '2';
                string[cur + 2 * spaceCount - 2] = '%';
                spaceCount--;
            } else {
                string[cur + 2 * spaceCount] = string[cur];
            }
            cur--;
        }
        return ans;
    }
};
