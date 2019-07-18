// Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        bool found = false;
        
        while(true)
        {
            int x = nums[rand()%nums.size()];
            int counter = count(nums.begin(), nums.end(), x);
            if(counter > nums.size()/2)
                return x;
            
        }
        
    }
};