// Jump Game II
void print(std::vector<int> v)
{
    for(auto x: v)
        std::cout<<x<<" ";
    std::cout<<"\n";
}
class Solution {
public:
    int jump(vector<int>& nums) {
        std::vector<int> ans(nums.size(), INT_MAX);
        ans[0] = 0;
        int x = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int currNum = nums[i];
            int toMark = i + currNum;
            for(int j = x+1; j<= toMark && j< nums.size(); j++)
                ans[j]= min(ans[i]+1, ans[j]);
            x = min(toMark, (int) nums.size());
        }
        return ans[ans.size()-1];
        
    }
};