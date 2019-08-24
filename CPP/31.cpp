// Next Permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        int x = -1;
        int y = -1;
        
        for(int i=nums.size()-2; i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                x=i;
                break;
            }
        }
        if(x==-1)
        {
            std::sort(nums.begin(), nums.end());
            return;
        }
        
        for(int i = nums.size()-1; i>x; i--)
        {
            if(nums[i]> nums[x])
            {
                y=i;
                break;
            }
        }
        
        std::swap(nums[x], nums[y]);
        
        std::reverse(nums.begin()+x+1, nums.end());
        
    }
};