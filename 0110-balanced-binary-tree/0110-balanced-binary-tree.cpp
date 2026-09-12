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
    bool ans=true;
    int help(TreeNode* root){
        if(!root)return 0;
        int l=1+help(root->left);
        int r=1+help(root->right);
        if(abs(r-l)>1)ans=false;
        return max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        help(root);
        return ans;
    }
};