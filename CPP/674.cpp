// Longest Continuous Increasing Subsequence
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        if(nums.size()==1)
            return 1;
        
        int currSize=1;
        int ans=1;
        for(int i=1; i< nums.size();i++ )
        {
            if(nums[i] > nums[i-1])
                currSize++;
            else
                currSize = 1;
            ans = max(currSize, ans);
            
        }
        return ans;
        
    }
};