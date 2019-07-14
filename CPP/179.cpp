//  Largest Number
bool myComparator(int a, int b)
{
    std:string first = std::to_string(a);
    std::string second = std::to_string(b);
    
    return first+second> second+first;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        std::sort(nums.begin(), nums.end(), myComparator);
        std::string ans="";
        for(int i=0;i<nums.size();i++)
            ans+=std::to_string(nums[i]);
        if (ans<"1")
            return "0";
        return ans;
        
    }
};