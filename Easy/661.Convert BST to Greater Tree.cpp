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
    * @param root the root of binary tree
    * @return the new root
    */
    TreeNode* convertBST(TreeNode* root) {
        // Write your code here
        convert(root);
        return root;
    }
    void convert(TreeNode *root) {
        static int sum = 0;
        if (!root) return;
        if (root->right) {
            convert(root->right);
        }
        root->val = (sum += root->val);
        if (root->left) {
            convert(root->left);
        }
    }
};
