// Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int x = abs(nums[i])-1;
            if(nums[x]<0)
                return x+1;
            else
                nums[x]= -nums[x];    
        }
        return 1;
        
    }
};