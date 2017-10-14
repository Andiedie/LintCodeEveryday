class Solution {
public:
    /*
    * @param : a given string
    * @param : another given string
    * @return: An array of missing string
    */
    vector<string> missingString(string str1, string str2) {
        // Write your code here
        vector<string> vec1, vec2, res;
        split(str1, back_inserter(vec1));
        split(str2, back_inserter(vec2));
        auto it = vec1.begin();
        while (it != vec1.end()) {
            if (find(vec2.begin(), vec2.end(), *it) == vec2.end()) {
                res.push_back(*it);
            }
            it++;
        }
        return res;
    }
private:
    template<typename Out>
    void split(const std::string &s, Out result) {
        istringstream iss(s);
        copy(istream_iterator<string>(iss), istream_iterator<string>(), result);
    }
};
