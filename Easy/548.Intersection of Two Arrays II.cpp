class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Write your code here
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>::iterator it1 = nums1.begin(), it2 = nums2.begin();
        while (it1 != nums1.end() && it2 != nums2.end()) {
            if (*it1 == *it2) {
                ans.push_back(*it1);
                it1++; it2++;
            } else if (*it1 < *it2) {
                it1++;
            } else {
                it2++;
            }
        }
        return ans;
    }
};
