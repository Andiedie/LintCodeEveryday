class Solution {
public:
    /*
    * @param : a string to be split
    * @return: all possible split string array
    */
    vector<vector<string>> splitString(const string& s) {
        // write your code here
        auto skip1 = s.length() > 1 ? splitString(s.substr(1)) : vector<vector<string>>();
        auto skip2 = s.length() > 2 ? splitString(s.substr(2)) : vector<vector<string>>();
        if (s.length() == 1) skip1.push_back(vector<string>());
        if (s.length() == 2) skip2.push_back(vector<string>());
        for (auto &vec : skip1) {
            vec.insert(vec.begin(), s.substr(0, 1));
        }
        for (auto &vec : skip2) {
            vec.insert(vec.begin(), s.substr(0, 2));
        }
        copy(skip2.begin(), skip2.end(), back_inserter(skip1));
        if (skip1.empty()) skip1.push_back(vector<string>());
        return skip1;
    }
};
