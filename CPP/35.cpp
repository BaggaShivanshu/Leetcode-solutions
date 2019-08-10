// Search Insert Position
int binarySearch(vector<int>& nums, int target, int left, int right)
{
    if(left<=right)
    {
        int middle = (left+right)/2;
        if(nums[middle] < target)
        {
           return binarySearch(nums, target, middle+1, right); 
        }
        else if(nums[middle]> target)
        {
            return binarySearch(nums, target, left, middle-1);
        }
        else
            return middle;
    }
    return left;
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        return binarySearch(nums, target, 0, nums.size()-1);
        
    }
};