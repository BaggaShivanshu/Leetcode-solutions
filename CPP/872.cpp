// Leaf-Similar Trees
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
    std::vector<int> leafsequence;
    void getLeafSequence(TreeNode* root)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            leafsequence.push_back(root->val);
        getLeafSequence(root->left);
        getLeafSequence(root->right);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        getLeafSequence(root1);
        std::vector<int> sequence1 = leafsequence;
        
        leafsequence.clear();
        
        getLeafSequence(root2);
        std::vector<int> sequence2 = leafsequence;
        
        return sequence1==sequence2;
        
    }
};