// Binary Tree Right Side View
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
    std::vector<int> ans;
    int maxLevel;
    
    void fillRightSideView(TreeNode* root, int currentLevel)
    {
        if(root==NULL)
            return;
        if (currentLevel > maxLevel)
        {
            maxLevel = currentLevel;
            ans.push_back(root->val);
        }
        fillRightSideView(root->right, currentLevel+1);
        fillRightSideView(root->left, currentLevel+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        maxLevel = -1;
        fillRightSideView(root, 0 );
        return ans;
        
        
    }
};