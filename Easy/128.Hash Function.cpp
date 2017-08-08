class Solution {
public:
    /**
    * @param key: A String you should hash
    * @param HASH_SIZE: An integer
    * @return an integer
    */
    int hashCode(string key, int HASH_SIZE) {
        // write your code here
        // long to avoid overflow
        long sum = 0;
        for (int i = 0; i < key.size(); i++) {
            // wow
            sum = (sum * 33 + (int)key[i]) % HASH_SIZE;
        }
        return (int)sum;
    }
};
