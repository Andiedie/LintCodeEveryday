class Solution {
public:
    /**
    * @param root the root of binary tree
    * @param target an integer
    * @return all valid paths
    */
    vector<vector<int>> binaryTreePathSum(TreeNode *root, int target) {
        // Write your code here
        vector<vector<int>> ans;
        if (!root) return ans;
        vector<int> path;
        path.push_back(root->val);
        search(root, target, ans, path, root->val);
        return ans;
    }

    void search(TreeNode *root, int target, vector<vector<int>> &ans, vector<int> &path, int sum) {
        if (!root->left && !root->right) {
            if (sum == target) {
                ans.push_back(vector<int>(path));
            }
            return;
        }
        if (root->left) {
            path.push_back(root->left->val);
            search(root->left, target, ans, path, sum + root->left->val);
            path.erase(path.end() - 1);
        }
        if (root->right) {
            path.push_back(root->right->val);
            search(root->right, target, ans, path, sum + root->right->val);
            path.erase(path.end() - 1);
        }
    }
};
