class StringUtils {
public:
    /**
    * @param originalStr the string we want to append to
    * @param size the target length of the string
    * @param padChar the character to pad to the left side of the string
    * @return a string
    */
    static string leftPad(string& originalStr, int size, char padChar = ' ') {
        // Write your code heer
        string result = originalStr;
        while (result.size() < size)
            result = padChar + result;
        return result;
    }
};
