// Construct Binary Tree from Inorder and Postorder Traversal
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
    int postTraversed;
    TreeNode* buildTreeByInAndPost(vector<int>& inorder, vector<int>& postorder, int start, int end)
    {
        if(start>end)
            return NULL;
        TreeNode* root = new TreeNode(postorder[postTraversed]);
        postTraversed--;
        if(start == end)
            return root;
        int positionInInOrder = search(inorder, start, end, root->val);
        root->right = buildTreeByInAndPost(inorder, postorder , positionInInOrder+1 , end) ;
        root->left = buildTreeByInAndPost(inorder, postorder ,start , positionInInOrder-1) ;
        return root;
    }
    int search(vector<int> inorder, int start, int end, int toSearch)
    {
        for(int i=start; i<=end; i++)
            if(inorder[i]==toSearch)
                return i;
        return -1;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        postTraversed = postorder.size()-1;
        return buildTreeByInAndPost(inorder, postorder, 0 , postorder.size()-1);
        
    }
};