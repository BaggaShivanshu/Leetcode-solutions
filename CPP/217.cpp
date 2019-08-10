// Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> myset;
        for(int i=0;i<nums.size();i++)
        {
            if(myset.count(nums[i]))
                return true;
            myset.insert(nums[i]);
        }
        return false;
        
    }
};