// Find Largest Value in Each Tree Row
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
    vector<int> largestValues(TreeNode* root) {
        std::vector<int> ans;
        if(root==NULL)
            return ans;
        
        std::vector<int> levels;
        std::queue<std::pair<TreeNode*, int > > q;
        
        q.push(make_pair(root, 0));
        
        int prevLevel = -1;
        int currentLevel = -1;
        int maxOfThisLevel = INT_MIN;
        while(!q.empty())
        {
            std::pair<TreeNode*, int> topElement = q.front();
            TreeNode* top = topElement.first;
            int topLevel  = topElement.second;
            
            if(topLevel == currentLevel)
            {
                maxOfThisLevel = max(maxOfThisLevel, top->val);
            }
            else
            {
                // level has changed.
                currentLevel++;
                if(currentLevel!=0)
                ans.push_back(maxOfThisLevel);
                maxOfThisLevel = top->val;
            }
            
            q.pop();
            if(top->left)
                q.push(make_pair(top->left, topLevel+1));
            if(top->right)
                q.push(make_pair(top->right, topLevel+1));
        }
        ans.push_back(maxOfThisLevel);
        return ans;
        
    }
};