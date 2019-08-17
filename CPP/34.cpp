// Find First and Last Position of Element in Sorted Array
int findLeft(vector<int>& nums, int target, int left, int right)
{
    if(left<=right)
    {
        int middle = (left+right)/2;
        
        if(nums[middle] >= target)
            return findLeft(nums, target, left, middle-1);
        else
            return findLeft(nums, target, middle+1, right);
    }
    return left;
}

int findRight(vector<int>& nums, int target, int left, int right)
{
    if(left<=right)
    {
        int middle = (left+right)/2;
        
        if(nums[middle] > target)
            return findRight(nums, target, left, middle-1);
        else
            return findRight(nums, target, middle+1, right);
    }
    return left;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        std::vector<int> ans;
        if(nums.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int left = findLeft(nums, target, 0, nums.size()-1);
        
        
        
        int right = findRight(nums, target, 0, nums.size()-1);
       
        if( left<= nums.size()-1 && nums[left]== target)
        {
            ans.push_back(left);
            ans.push_back(right-1);
        }
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        return ans;
    }
};