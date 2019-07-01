// Range Sum of BST
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
    int ans;
    void findSum(TreeNode* root, int L, int R)
    {
        if(root==NULL)
            return;
        if(root->val>= L && root->val <=R)
            ans+=root->val;
        findSum(root->left, L, R);
        findSum(root->right, L, R);
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        findSum(root, L, R);
        return ans;
    }
};