// Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes =0;
        int ones =0;
        int twos =0;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i]==0)
                zeroes++;
            else if (nums[i]==1)
                ones++;
            else
                twos++;
        }
        int i=0;
        for(;i<zeroes;i++)
            nums[i]=0;
        for(;i<zeroes+ones;i++)
            nums[i]=1;
        for(;i<zeroes+ones+twos;i++)
            nums[i]=2;
        
    }
};