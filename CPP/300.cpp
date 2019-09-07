// Longest Increasing Subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> v(nums.size(), 1);
        
        for(int i=1; i< nums.size(); i++)
        {
            for( int j=0;  j <i; j++)
            {
                if(nums[i] > nums[j ] && v[i]<v[j]+1)
                    v[i]=v[j]+1;;
            }
        }
        int ans=0;
        for(int i=0; i< v.size(); i++)
            ans = max(ans, v[i]);
        return ans;
    }
};