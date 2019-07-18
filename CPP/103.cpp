// Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> v;
    void levelOrdertraversal(TreeNode* root, int level)
    {
        if(root==NULL)
            return;
        if(v.size()<level+1)
        {
            // we need to ceate new array and push that array into v.
            std::vector<int> temp;
            temp.push_back(root->val);
            v.push_back(temp);
        }
        else
        {
            if(level%2)
            {
                v[level].insert(v[level].begin(), root->val);
            }
            else
            {
                v[level].push_back(root->val);
            }
        }
        levelOrdertraversal(root->left, level+1);
        levelOrdertraversal(root->right, level+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        
        levelOrdertraversal(root, 0);
        
        return v;
        
    }
};