class Solution {
public:
    /*
    * @param A: a string
    * @param B: a string
    * @return: a boolean
    */
    bool Permutation(string A, string B) {
        // write your code here
        int arr[127] = { 0 };
        auto i = A.begin();
        while (i != A.end()) arr[*i++]++;
        i = B.begin();
        while (i != B.end()) arr[*i++]++;
        for (int i = 0; i < 127; i++) {
            if (arr[i] != 0 && arr[i] % 2 != 0) return false;
        }
        return true;
    }
};
