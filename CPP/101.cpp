// Symmetric tree
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
    bool checkSymmetric(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        if(p!=NULL && q!=NULL)
        {
            return p->val == q->val && checkSymmetric(p->left, q->right) && checkSymmetric(p->right, q->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        
        return checkSymmetric(root, root);
        
    }
};