// Invert Binary Tree
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
    void invertBinaryTree(TreeNode* root)
    {
        if(root==NULL)
            return;
        std::swap(root->left, root->right);
        invertBinaryTree(root->left);
        invertBinaryTree(root->right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        invertBinaryTree(root);
        return root;
        
    }
};