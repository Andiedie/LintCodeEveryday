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
    * @param A: A sorted (increasing order) array
    * @return: A tree node
    */
    TreeNode *sortedArrayToBST(vector<int> &A) {
        // write your code here
        return convert(A, 0, A.size() - 1);
    }
    TreeNode *convert(vector<int> &v, int first, int last) {
        if (first > last) return NULL;
        int mid = (last - first) / 2 + first;
        TreeNode *root = new TreeNode(v[mid]);
        root->left = convert(v, first, mid - 1);
        root->right = convert(v, mid + 1, last);
        return root;
    }
};
