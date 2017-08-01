#include <climits>

class Solution {
public:
  /**
  * @param root the root of binary tree
  * @return the max node
  */
  TreeNode* maxNode(TreeNode* root) {
    // Write your code here
    if (root == nullptr) return nullptr;

    auto leftMaxNode = maxNode(root->left);
    auto rigthMaxNode = maxNode(root->right);

    return max(root, max(leftMaxNode, rigthMaxNode));
  }
private:
  TreeNode* max(TreeNode* a, TreeNode* b) {
    if (a == nullptr)
      return b;
    if (b == nullptr)
      return a;
    if (a->val > b->val)
      return a;
    return b;
  }
};
