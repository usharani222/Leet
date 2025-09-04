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
    // Compare two trees
    bool isSame(TreeNode* a, TreeNode* b) {
        if(!a && !b) return true;
        if(!a || !b) return false;
        if(a->val != b->val) return false;
        return isSame(a->left, b->left) && isSame(a->right, b->right);
    }

    // Traverse the main tree and check candidates
    bool traverse(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;

        // if values match, check subtree
        if(root->val == subRoot->val && isSame(root, subRoot))
            return true;

        // otherwise keep looking in left and right
        return traverse(root->left, subRoot) || traverse(root->right, subRoot);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root || !subRoot) return false;
        return traverse(root, subRoot);
    }
};