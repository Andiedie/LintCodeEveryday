class Solution {
public:
    /*
    * @param s: A string
    * @return: whether the string is a valid parentheses
    */
    bool isValidParentheses(string s) {
        // write your code here
        stack<char> stack;
        auto it = s.begin();
        while (it != s.end()) {
            if (*it == ')') {
                if (stack.top() == '(') stack.pop();
                else return false;
            } else if (*it == ']') {
                if (stack.top() == '[') stack.pop();
                else return false;
            } else if (*it == '}') {
                if (stack.top() == '{') stack.pop();
                else return false;
            } else stack.push(*it);
            it++;
        }
        if (stack.empty()) return true;
        return false;
    }
};
