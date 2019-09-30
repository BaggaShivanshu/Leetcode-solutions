// House Robber
int robHouses(std::vector<int>& nums, int currpos, std::vector<int>& memo)
{
    if(currpos<0)
        return 0;
    
    int x=memo[currpos];
    if(x==-1)
        x =  max(robHouses(nums,currpos-1, memo), robHouses(nums,currpos-2, memo )+nums[currpos]);
    
    memo[currpos]=x;
    return memo[currpos];
}
class Solution {
public:
    int rob(vector<int>& nums) {
        std::vector<int> memo(nums.size(),-1);
        return robHouses(nums, nums.size()-1, memo);
    }
};