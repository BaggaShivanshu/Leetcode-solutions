//  Validate Binary Search Tree
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
    bool validBstCheck(TreeNode* root, long long max, long long min)
    {
        if(root==NULL)
            return true;
        if(root->val >= max || root->val <= min)
            return false;
        return validBstCheck(root->left, root->val, min) && validBstCheck(root->right, max, root->val);
    }
    bool isValidBST(TreeNode* root) {
        
        return validBstCheck(root, LLONG_MAX, LLONG_MIN);
        
    }
};