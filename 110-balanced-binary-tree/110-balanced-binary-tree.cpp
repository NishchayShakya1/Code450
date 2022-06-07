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
    
    bool Balanced(TreeNode* root, int *height){
        if(root==NULL){
            return true;
        }
        
        int rh=0, lh=0;
        
        if(Balanced(root->left, &lh)==false){
            return false;
        }
        
        if(Balanced(root->right, &rh)==false){
            return false;
        }
        
        *height = max(lh,rh)+1;
        if(abs(lh-rh)<=1){
            return true;
        }
        
        return false;
        
    }
    bool isBalanced(TreeNode* root) {
        int height =0;
        return Balanced(root, &height);
    }
};