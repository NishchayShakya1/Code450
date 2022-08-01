/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(vector<int> & v, TreeNode* node)
    {
        if(!node) return;
        inorder(v, node->left);
        v.push_back(node->val);
        inorder(v, node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorder(v, root);
        return v;
    }
};