// Path Sum
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
    bool findPathSum(TreeNode* root, int currentSum, int targetSum)
    {
        if(root==NULL)
            return false;
        if(root->left ==NULL && root->right ==NULL)
            return targetSum == currentSum + root->val;
        return findPathSum(root->left, currentSum+root->val, targetSum)|| findPathSum(root->right, currentSum+root->val, targetSum);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        int target = sum;
        return findPathSum(root, 0, target);
    }
};