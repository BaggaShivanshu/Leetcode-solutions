// Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //kadane's algorithm
        
         int maxPossible = nums[0];
        int currentMax =  nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            currentMax = max(nums[i], nums[i]+currentMax);
           // cout<<currentMax<<"\n";
            maxPossible = max(currentMax, maxPossible);
        }
        return maxPossible;
    }
};