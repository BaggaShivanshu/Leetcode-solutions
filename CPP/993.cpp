//  Cousins in Binary Tree
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
    bool areCousins(TreeNode* root1, TreeNode* root2, int depth1, int depth2, int x, int y )
    {
        if (root1==NULL || root2==NULL)
            return false;
        if(depth1!=depth2)
            return false;
        if(depth1==depth2)
        {
            if(root1->left && root2->left)
           {
                if(root1->left->val == x && root2->left->val ==y && root1->val!=root2->val)
                    return true;
           }
                
            if(root1->left && root2->right)
               if(root1->left->val == x && root2->right->val ==y && root1->val!=root2->val)
                    return true;
                
            if(root1->right && root2->left)
               if(root1->right->val == x && root2->left->val ==y && root1->val!=root2->val)
                    return true;
                
            if(root1->right && root2->right)
               if(root1->right->val == x && root2->right->val ==y && root1->val!=root2->val)
                    return true;
                
                
        }
        
        return areCousins(root1->left, root2->left, depth1+1, depth2+1, x, y)||areCousins(root1->left, root2->right, depth1+1, depth2+1, x, y)||areCousins(root1->right, root2->left, depth1+1, depth2+1, x, y)||areCousins(root1->right, root2->right, depth1+1, depth2+1, x, y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
       return areCousins(root, root, 0, 0, x,y);
        
    }
};