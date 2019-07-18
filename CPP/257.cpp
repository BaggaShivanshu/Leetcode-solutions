// Binary Tree Paths
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
    std::vector<string> v;
    void findAllPaths(TreeNode* root, string path)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(path  + to_string(root->val));
            return;
        }
        path+=to_string(root->val)+"->";
        findAllPaths(root->left, path);
        findAllPaths(root->right, path);
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        findAllPaths(root, "");
        return v;
        
    }
};