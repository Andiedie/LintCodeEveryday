class Solution {
public:
    /*
    * @param words: A list of words
    * @return: Return how many different rotate words
    */
    int countRotateWords(vector<string> words) {
        // Write your code here
        if (words.empty()) return 0;
        vector<string> ans;
        auto it = words.begin();
        ans.push_back(*it++);
        while (it != words.end()) {
            bool hasPer = any_of(ans.begin(), ans.end(), [&it](string& str) {
                if (it->length() != str.length()) return false;
                string temp = str + str;
                return temp.find(*it) != -1;
            });
            if (!hasPer) ans.push_back(*it);
            it++;
        }
        return ans.size();
    }
};
