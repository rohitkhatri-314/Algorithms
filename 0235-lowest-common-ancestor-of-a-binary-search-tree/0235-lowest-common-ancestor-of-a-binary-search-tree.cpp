/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* help(TreeNode* r, TreeNode* p, TreeNode* q){
        if(r->val==p->val or r->val==q->val or (r->val<q->val && r->val>p->val))return r;
        if(r->val<p->val)return help(r->right,p,q);
        return help(r->left,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* pnew=p;
        TreeNode* qnew=q;
        if(p->val >q->val){
            pnew=q;
            qnew=p;
        }
        return help(root,pnew,qnew);
    }
};