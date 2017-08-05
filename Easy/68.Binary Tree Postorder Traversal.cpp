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
    * @return: Postorder in vector which contains node values.
    */
public:
    vector<int> postorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> ans;
        traversal(root, ans);
        return ans;
    }
    void traversal(TreeNode *root, vector<int> &ans) {
        if (!root) return;
        traversal(root->left, ans);
        traversal(root->right, ans);
        ans.push_back(root->val);
    }
};
