// Convert Sorted Array to Binary Search Tree
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
    TreeNode* arrayToBST(vector<int>& nums, int left, int right)
    {
        if(left> right)
            return NULL;
        int middle = (left+right)/2;
        TreeNode* root = new TreeNode(nums[middle]);
        root->left = arrayToBST(nums, left, middle-1);
        root->right = arrayToBST(nums, middle+1, right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return arrayToBST(nums, 0,nums.size()-1);
        
        
    }
};