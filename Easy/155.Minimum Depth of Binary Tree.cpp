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
public:
    /**
    * @param root: The root of binary tree.
    * @return: An integer
    */
    int minDepth(TreeNode *root) {
        if (!root) return 0;
        // write your code here
        return helper(root, 0);
    }
    int helper(TreeNode *root, int depth) {
        depth++;
        if (!root->left && !root->right) return depth;
        int left = INT_MAX, right = INT_MAX;
        if (root->left) left = helper(root->left, depth);
        if (root->right) right = helper(root->right, depth);
        return min(left, right);
    }
};
