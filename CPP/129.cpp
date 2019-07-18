// Sum Root to Leaf Numbers
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
    void findSumToLeaf(TreeNode* root, string path)
    {
        if(root==NULL)
            return;
        if(root->left ==NULL && root->right ==NULL)
        {
            path+=to_string(root->val);
            int num = std::stoi( path );
            ans+=num;
            // wow this is the leaf node.
        }
        findSumToLeaf(root->left, path+to_string(root->val));
        findSumToLeaf(root->right, path+to_string(root->val));
    }
    int sumNumbers(TreeNode* root) {
        ans=0;
        findSumToLeaf(root, "");
        return ans;
        
    }
};