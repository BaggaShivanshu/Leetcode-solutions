// Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        
        int i=0; int j= nums.size()-1;
        
        while(i<j)
        {
            if(nums[j]==val)
            {
                j--;
                continue;
            }
            if(nums[i]==val)
            {
                std::swap(nums[i], nums[j]);
                i--;
            }
            i++;
                
        }
        if(nums[i]==val)
            return 0;
        
        return i+1;
        
    }
};