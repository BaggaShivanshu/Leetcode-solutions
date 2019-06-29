// Path Sum II
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
    std::vector<std::vector<int>> ans;
    
    void findAllPathSum(TreeNode* root, std::vector<int> list,int currentSum, int targetSum)
    {
        if(root==NULL)
            return;
        if(root->left ==NULL && root-> right==NULL)
        {
            if(currentSum+root->val == targetSum)
            {
                list.push_back(root->val);
                ans.push_back(list);
            }
        }
        currentSum +=root->val;
        list.push_back(root->val);
        findAllPathSum(root->left, list, currentSum, targetSum );
        findAllPathSum(root->right, list, currentSum, targetSum );

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        std::vector<int> temp;
        findAllPathSum(root, temp,0, sum);
        return ans;
        
    }
};