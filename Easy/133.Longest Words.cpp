class Solution {
public:
    /**
    * @param dictionary: a vector of strings
    * @return: a vector of strings
    */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> ans;
        int max = 0;
        auto it = dictionary.begin();
        while (it != dictionary.end()) {
            if (it->size() < max) {
                it++;
                continue;
            }
            if (it->size() > max) {
                max = it->size();
                ans.clear();
            }
            ans.push_back(*(it++));
        }
        return ans;
    }
};
