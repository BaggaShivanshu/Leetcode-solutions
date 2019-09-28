// Binary Search Tree to Greater Sum Tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


void inOrder(TreeNode* root, int &count)
{
    if(root==NULL)
        return;
    
    count+=root->val;
    inOrder(root->left, count);
    inOrder(root->right, count);
}

void setTree(TreeNode* root, int &count)
{
    if(root==NULL)
        return;
    
    setTree(root->left, count);    
    int x = root-> val;
    root->val = count;
    count-=x;
    setTree(root->right, count);
}
class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
        int count =0;        
        inOrder(root, count);
        std::cout<<count<<" ";
        setTree(root, count);
        
        return root;
    }
};