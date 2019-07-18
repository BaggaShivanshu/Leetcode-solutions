// Maximum Gap
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        if(nums.size()<2)
            return 0;
        int ans = INT_MIN;
        for(int i=1;i<nums.size();i++)
            ans= std::max(ans, nums[i]-nums[i-1]);
        return ans;
    }
};