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
    * @param root the root of the binary tree
    * @return all root-to-leaf paths
    */
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        vector<string> ans;
        if (!root) return ans;
        search(root, ans, to_string(root->val));
        return ans;
    }

    void search(TreeNode* root, vector<string> &ans, string path) {
        if (!root->left && !root->right) {
            ans.push_back(path);
            return;
        }
        if (root->left) {
            int pos = path.length();
            path += "->" + to_string(root->left->val);
            search(root->left, ans, path);
            path.erase(pos);
        }
        if (root->right) {
            int pos = path.length();
            path += "->" + to_string(root->right->val);
            search(root->right, ans, path);
            path.erase(pos);
        }
    }
};
