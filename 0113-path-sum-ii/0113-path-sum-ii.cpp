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
    void path(TreeNode* root,int sum,vector<int> c,vector<vector<int>> &ans,int n)
    {
        if(!root) return;
        c.push_back(root->val);
        n+=root->val;
        if(!root->left&&!root->right&&sum==n) ans.push_back(c);
        if(root->left) path(root->left,sum,c,ans,n);
        if(root->right) path(root->right,sum,c,ans,n);
        return ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>> ans;
        vector<int> c;
        path(root,targetSum,c,ans,0);
        return ans;
    }
};