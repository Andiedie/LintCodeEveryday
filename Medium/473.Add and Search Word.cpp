struct TrieNode {
    bool isKey = false;
    TrieNode* child[26];
};

class WordDictionary {
public:
    /*
    * @param word: Adds a word into the data structure.
    * @return: nothing
    */
    void addWord(string &word) {
        // write your code here
        TrieNode *current = root;
        for (auto c : word) {
            int index = c - 'a';
            if (current->child[index] == nullptr) {
                current->child[index] = new TrieNode();
            }
            current = current->child[index];
        }
        current->isKey = true;
    }

    /*
    * @param word: A word could contain the dot character '.' to represent any one letter.
    * @return: if the word is in the data structure.
    */
    bool search(string &word) {
        // write your code here
        return helper(word, root);
    }
private:
    TrieNode *root = new TrieNode();
    bool helper(string word, TrieNode *r) {
        if (word.size() == 0) return r->isKey;
        string sub = word.substr(1);
        if (word.front() == '.') {
            for (TrieNode* node : r->child) {
                if (node && helper(sub, node)) return true;
            }
            return false;
        } else {
            int index = word.front() - 'a';
            return r->child[index] && helper(sub, r->child[index]);
        }
    }
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");
