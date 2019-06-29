// Balanced Binary Tree
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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(height(root->left)+1, height(root->right)+1);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return (abs(leftHeight-rightHeight)<2 && isBalanced(root->left) && isBalanced(root->right) );
        
    }
};