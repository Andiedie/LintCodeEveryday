/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
    /**
    * @param root: The root of binary tree.
    * @return: Level order a list of lists of integer
    */
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        // write your code here
        vector<vector<int>> ans;
        level(root, 0, ans);
        return ans;
    }

    void level(TreeNode *root, int depth, vector<vector<int>> & ans) {
        if (!root) return;
        if (ans.size() <= depth) ans.push_back(vector<int>());
        vector<int> &current = ans[depth];
        current.push_back(root->val);
        level(root->left, depth + 1, ans);
        level(root->right, depth + 1, ans);
    }
};
