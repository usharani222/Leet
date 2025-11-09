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
    void num(TreeNode* root,int n,int &ans)
    {
        if(!root) return;
        n=n*10+(root->val);
        if(!root->left&&!root->right) ans+=n;
        if(root->left) num(root->left,n,ans);
        if(root->right) num(root->right,n,ans);
        return;
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        num(root,0,ans);
        return ans;
    }
};