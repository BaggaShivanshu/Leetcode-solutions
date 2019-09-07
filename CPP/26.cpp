// Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        
        int ans = 0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[ans])
            {
                std::swap(nums[i], nums[ans+1]);
                ans++;
            }
            
        }
        return ans+1;
        
    }
};