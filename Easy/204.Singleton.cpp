class Solution {
public:
    /**
    * @return: The same instance of this class every time
    */
    static Solution* getInstance() {
        // write your code here
        if (!instance) instance = new Solution();
        return instance;
    }
private:
    static Solution *instance;
};
Solution *Solution::instance = NULL;
