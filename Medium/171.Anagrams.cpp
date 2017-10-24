class Solution {
public:
    /*
    * @param strs: A list of strings
    * @return: A list of strings
    */
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        map<string, vector<string>> m;
        vector<string> res;
        for (auto &str : strs) {
            int alphabet[26] = { 0 };
            for (auto c : str) {
                alphabet[c - 'a']++;
            }
            string key;
            key.reserve(10);
            for (int i = 0; i < 26; i++) {
                if (alphabet[i]) {
                    key += char(i + 'a');
                    key += alphabet[i];
                }
            }
            auto it = m.find(key);
            if (it == m.end()) {
                m.insert({ key, vector<string>{str} });
            } else {
                it->second.push_back(str);
            }
        }
        for (auto &p : m) {
            if (p.second.size() > 1) {
                res.insert(res.end(), p.second.begin(), p.second.end());
            }
        }
        return res;
    }
};
