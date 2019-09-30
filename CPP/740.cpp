// Delete And Earn
int findDeleteAndEarn(std::vector<int>& nums, int currPos, std::vector<int>& memo)
{
    if(currPos<0)
        return 0;
    int x = memo[currPos];
    
    if(x==-1)
        x = max(findDeleteAndEarn(nums, currPos-1, memo), findDeleteAndEarn(nums, currPos-2, memo)+nums[currPos]*currPos);
    
    memo[currPos] = x;
    return x;
}
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        std::vector<int> v(10001, 0);
        for(int i=0;i<nums.size();i++)
            v[nums[i]]++;
        
     
        
        
        std::vector<int> memo(v.size(), -1);
         
        return findDeleteAndEarn(v, v.size()-1, memo);
        
        
        
    }
};