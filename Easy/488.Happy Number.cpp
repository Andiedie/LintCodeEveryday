class Solution {
public:
    /**
    * @param n an integer
    * @return true if this is a happy number or false
    */
    bool isHappy(int n) {
        // Write your code here
        if (n < 1) return false;
        unordered_set<int> already;
        already.insert(n);
        while (true) {
            int next = 0;
            while (n) {
                next += (n % 10) * (n % 10);
                n /= 10;
            }
            if (next == 1) return true;
            if (already.find(next) != already.end()) return false;
            already.insert(next);
            n = next;
        }
    }
};
