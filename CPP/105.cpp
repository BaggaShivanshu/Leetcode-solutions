// Construct Binary Tree from Preorder and Inorder Traversal
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
    int position;
    TreeNode* buildTreeByInAndPre(vector<int>& preorder, vector<int>& inorder, int start, int end)
    {
        if (start > end)
            return NULL;
        TreeNode* root = new TreeNode(preorder[position]);
        position++;
        
        if(start == end)
            return root;
        int inIndex = search(inorder, start, end, root->val);
        root->left = buildTreeByInAndPre(preorder, inorder, start, inIndex-1);
        root->right = buildTreeByInAndPre(preorder, inorder, inIndex+1, end);
        return root;
    }
    int search(vector<int>&inorder, int start, int end, int toSearch)
    {
        for(int i=start; i<=end; i++)
            if(inorder[i]==toSearch)
                return i;
        return -1;
            
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return buildTreeByInAndPre(preorder, inorder, 0, preorder.size()-1);
        
    }
};