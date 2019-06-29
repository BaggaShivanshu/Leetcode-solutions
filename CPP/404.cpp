// Sum of Left Leaves
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
    int findSumOfLeftLeaves(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int sum  = 0;
        if(root->left && root->left->left ==NULL && root->left->right ==NULL)
            sum+=(root->left->val);
        return sum + findSumOfLeftLeaves(root->left)+findSumOfLeftLeaves(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return findSumOfLeftLeaves(root);
        
        
    }
};