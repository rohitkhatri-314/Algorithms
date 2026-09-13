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
    bool help(TreeNode* r, TreeNode* sr){
        if(!r)return false;
        return checker(r,sr) or help(r->left,sr) or help(r->right,sr);
    }
    bool checker(TreeNode *p, TreeNode* q){
        if(!p && !q)return true;
        if((!p && q) or (!q && p))return false;
        if(p->val !=q->val) return false;
        return checker(p->left,q->left) && checker(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return checker(root,subRoot) or help(root,subRoot);
    }
};