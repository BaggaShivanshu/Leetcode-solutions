// Contiguous Array
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0)
                nums[i]=-1;
        
        int ans =INT_MIN;
        
        std::map<int, int> mymap;
        mymap.insert(make_pair(0,-1));
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(mymap.count(sum))
                ans = max(ans, i-mymap[sum]);
            else
                mymap.insert(make_pair(sum, i));
        }
        if(sum==0)
            return nums.size();
        if(ans==INT_MIN)
            return 0;
        return ans;
        
    }
};