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
    * @aaram a, b, the root of binary trees.
    * @return true if they are identical, or false.
    */
    bool isIdentical(TreeNode* a, TreeNode* b) {
        // Write your code here
        if (a == NULL || b == NULL) {
            if (a == b) return true;
            return false;
        }
        if (a->val == b->val)
            return isIdentical(a->left, b->left) && isIdentical(a->right, b->right);
        return false;
    }
};