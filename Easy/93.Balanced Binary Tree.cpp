class Solution {
public:
    /**
    * @param root: The root of binary tree.
    * @return: True if this Binary tree is Balanced, or false.
    */
    bool isBalanced(TreeNode *root) {
        // write your code here
        // 获取这棵树的最大高度，如果不平衡返回-1
        return maxDepth(root) != -1;
    }

    int maxDepth(TreeNode *root) {
        if (root == NULL) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        if (left == -1 || right == -1 || abs(left - right) > 1) {
            return -1;
        }
        return (left > right ? left : right) + 1;
    }
};
