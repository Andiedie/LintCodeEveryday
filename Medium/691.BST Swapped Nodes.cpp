class Solution {
public:
    /*
    * @param : the given tree
    * @return: the tree after swapping
    */
    TreeNode * bstSwappedNode(TreeNode * root) {
        helper(root);
        vector<TreeNode*> v;
        for (int i = 0; i < vec.size(); i++) {
            if (i > 0) {
                if (vec[i].first < vec[i - 1].first) {
                    v.push_back(vec[i].second);
                }
            }
            if (i < vec.size() - 1) {
                if (vec[i].first > vec[i + 1].first) {
                    v.push_back(vec[i].second);
                }
            }
        }
        if (v.size())
            swap(v.front()->val, v.back()->val);
        return root;
    }
private:
    vector<pair<int, TreeNode*>> vec;
    void helper(TreeNode * root) {
        if (!root) return;
        helper(root->left);
        vec.push_back({ root->val, root });
        helper(root->right);
    }
};
