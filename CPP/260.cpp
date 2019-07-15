// Single Number III
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorOfAll = 0;
        for(int i=0;i<nums.size();i++)
            xorOfAll^=nums[i];
        
        int mask = xorOfAll& (-xorOfAll);
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&mask) >0)
                a=a^nums[i];
            else
                b=b^nums[i];
        }
        std::vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;        
    }
};