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
    * @param root: a TreeNode, the root of the binary tree
    * @return: nothing
    */
    void flatten(TreeNode *root) {
        // write your code here
        vector<TreeNode*> v;
        helper(root, v);
        for (int i = 0; i < v.size(); i++) {
            TreeNode *current = v[i];
            current->left = NULL;
            current->right = i >= v.size() - 1 ? NULL : v[i + 1];
            auto c =current;
        }
    }
    void helper(TreeNode *root, vector<TreeNode*> &v) {
        if (!root) return;
        v.push_back(root);
        helper(root->left, v);
        helper(root->right, v);
    }
};
