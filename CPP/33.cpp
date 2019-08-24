// Search in Rotated Sorted Array
int binarySearch(vector<int> & nums, int target, int left, int right)
{
    if(left<=right)
    {
        int middle = (left+right)/2;
        
        if(nums[middle] == target)
            return middle;
        else if (nums[middle]< target)
            return binarySearch(nums, target, middle+1, right);
        else
            return binarySearch(nums, target, left, middle-1);
    }
    return -1;
}
int findPivot(vector<int>&nums, int left, int right)
{
    if (right < left) 
        return -1; 
  
    if (right == left) 
        return left; 
  
   int mid = (left + right)/2; 
   if (mid < right && nums[mid] > nums[mid + 1]) 
    return mid; 
      
   if (mid > left && nums[mid] < nums[mid - 1]) 
    return (mid-1); 
      
   if (nums[left] >= nums[mid]) 
    return findPivot(nums, left, mid-1); 
      
   return findPivot(nums, mid + 1, right); 
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
            return -1;
        if(nums.size()==1 && target==nums[0])
            return 0;
        if(nums.size()==1 && target!=nums[0])
            return -1;
        
        int x = findPivot(nums, 0 , nums.size()-1) +1;
        
        std::cout<<x<<"\n";
        //return x;
        
        if(x <0|| x>=nums.size())
            return binarySearch(nums, target, 0, nums.size()-1);
        
        if(nums[x]==target)
            return x;
        
        if(target > nums[x] && target <= nums[nums.size()-1])
            return binarySearch(nums, target, x+1, nums.size()-1);
        
        return binarySearch(nums, target, 0, x-1);
        
    }
};