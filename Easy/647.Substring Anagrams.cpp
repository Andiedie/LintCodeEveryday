class Solution {
public:
    /**
    * @param s a string
    * @param p a non-empty string
    * @return a list of index
    */
    vector<int> findAnagrams(string& s, string& p) {
        // Write your code here
        vector<int> ans;
        int srr[26] = { 0 }, prr[26] = { 0 };
        int ssize = s.size(), psize = p.size();
        if (ssize < psize) return ans;
        for (int i = 0; i < psize; i++) srr[s[i] - 'a']++;
        for (int i = 0; i < psize; i++) prr[p[i] - 'a']++;
        for (int j = psize; j <= ssize; j++) {
            bool isOK = true;
            for (int i = 0; i < 26; i++) {
                if (srr[i] != prr[i]) {
                    isOK = false;
                    break;
                }
            }
            if (isOK) ans.push_back(j - psize);
            if (j == ssize) return ans;
            srr[s[j] - 'a']++;
            srr[s[j - psize] - 'a']--;
        }
        return ans;
    }
};
