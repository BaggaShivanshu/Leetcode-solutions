// Kth Smallest Element in a BST
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
    
    int smaller;
    int ans;
    
    void inOrder(TreeNode* root,int k)
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            inOrder(root->left,k);
            
            smaller++;
            if(smaller==k)
                ans=root->val;
            inOrder(root->right,k);
        }
        
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
        inOrder(root, k);
        return ans;
        
    }
};