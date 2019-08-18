// Find Bottom Left Tree Value
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
    int findBottomLeftValue(TreeNode* root) {
        
        std::queue<TreeNode*> q;
        q.push(root);
        
        int ans=0;
        
        while(!q.empty())
        {
            TreeNode* top = q.front();
            ans = top->val;
            q.pop();
            
            if(top->right)
                q.push(top->right);
            if(top->left)
                q.push(top->left);
            
            
        }
        return ans;
        
    }
};