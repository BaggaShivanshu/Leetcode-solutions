// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> mymap;
        std::vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int firstNum = nums[i];
            int secondNum= target-firstNum;
            if(mymap.count(secondNum)==1)
            {
                ans.push_back(mymap[secondNum] );
                ans.push_back(i);
                return ans;
            }
            else
                mymap[nums[i]]=i;
        }
        return ans;
        
    }
};