class Solution {
public:
    /*
    * @param numbers: Give an array
    * @param target: An integer
    * @return: Find all unique quadruplets in the array which gives the sum of zero
    */
    vector<vector<int>> fourSum(vector<int> numbers, int target) {
        // write your code here
        set<vector<int>> ans;
        sort(numbers.begin(), numbers.end());
        for (int i = 0; i < int(numbers.size() - 3); i++) {
            for (int j = i + 1; j < int(numbers.size() - 2); j++) {
                int left = j + 1;
                int right = numbers.size() - 1;
                while (left < right && left < numbers.size() - 1) {
                    int sum = numbers[i] + numbers[j] + numbers[left] + numbers[right];
                    if (sum == target) {
                        ans.insert(vector<int>({ numbers[i], numbers[j], numbers[left], numbers[right] }));
                        left++;
                        right++;
                    } else if (sum > target) {
                        right--;
                    } else {
                        left++;
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
