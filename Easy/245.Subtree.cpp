class Solution {
public:
    /*
    * @param T1: The roots of binary tree T1.
    * @param T2: The roots of binary tree T2.
    * @return: True if T2 is a subtree of T1, or false.
    */
    bool isSubtree(TreeNode * T1, TreeNode * T2) {
        // write your code here
        if (isIdentical(T1, T2)) return true;
        return (T1 ? isSubtree(T1->left, T2) : false) || (T1 ? isSubtree(T1->right, T2) : false);
    }
    bool isIdentical(TreeNode * T1, TreeNode * T2) {
        if (!T1 && T2) return false;
        if (T1 && !T2) return false;
        if (!T1 && !T2) return true;
        if (T1->val != T2->val) return false;
        return isIdentical(T1->left, T2->left) && isIdentical(T1->right, T2->right);
    }
};
