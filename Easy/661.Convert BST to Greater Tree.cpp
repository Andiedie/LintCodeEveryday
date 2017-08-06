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
        convert(root->right);
        sum += root->val;
        root->val = sum;
        convert(root->left);
    }
};
