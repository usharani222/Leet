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
    void inorder(TreeNode* root,vector<int> &v)
    {
        if(!root) 
        {
            v.push_back(-13);
            return;
        }
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p&&!q) return true;
        if(!p||!q) return false;
        vector<int> v1,v2;
        inorder(p,v1);
        inorder(q,v2);
        if(v1.size()!=v2.size()) return false;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};