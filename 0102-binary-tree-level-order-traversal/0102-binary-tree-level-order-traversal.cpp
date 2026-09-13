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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)return ans;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            vector<int>res;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* ok=q.front();
                res.push_back(ok->val);
                if(ok->left)q.push(ok->left);
                if(ok->right)q.push(ok->right);
                q.pop();
            }
            ans.push_back(res);
        }
        return ans;
    }
};