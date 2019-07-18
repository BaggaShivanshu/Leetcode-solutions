// Average of Levels in Binary Tree
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
    std::vector<std::vector<int>>v;
    void fillLevelOrder(TreeNode* root, int level)
    {
        if(root==NULL)
            return;
        if(v.size()==level) //we gotta create a new array
        {
            std::vector<int> temp;
            temp.push_back(root->val);
            v.push_back(temp);
        }
        else
        {
            v[level].push_back(root->val);
        }
        fillLevelOrder(root->left, level+1);
        fillLevelOrder(root->right, level+1);
        
    }
    vector<double> averageOfLevels(TreeNode* root) {
        fillLevelOrder(root,0);
        std::vector<double> ans;
        for(int i=0;i<v.size();++i)
        {
            double sum =0;
            for(int j=0;j<v[i].size();j++)
                sum+=v[i][j];
            
            ans.push_back(sum/v[i].size());
        }
        return ans;
        
    }
};