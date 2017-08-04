class Solution {
    /**
    * @param root: The root of binary tree.
    * @return: Inorder in vector which contains node values.
    */
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> ans;
        inorder(root, ans);
        return ans;
    }
    void inorder(TreeNode *root, vector<int> &ans) {
        if (!root) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
};
