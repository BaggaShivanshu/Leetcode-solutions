// Sum of Root To Leaf Binary Numbers
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
    void sum(TreeNode* root, string path)
    {
        if(root==NULL)
            return;
        if(root->left == NULL && root->right == NULL)
        {
            // hurray this is a leaf node.
            path+=to_string(root->val);
            int i = std::stoi(path, nullptr, 2);
            std::cout<<path<<" ";
            ans+=i;
            return;
        }
        path+=to_string(root->val);
        sum(root->left,path );
        sum(root->right, path);

    }
    int sumRootToLeaf(TreeNode* root) {
        ans=0;
        sum(root, "");
        return ans;
        
    }
};