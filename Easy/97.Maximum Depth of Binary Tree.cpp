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
    int maxDepth(TreeNode *root) {
        // write your code here
        return helper(root, 0);
    }
    int helper(TreeNode *root, int count) {
        if (!root) return count;
        return max(helper(root->left, count + 1), helper(root->right, count + 1));
    }
};
