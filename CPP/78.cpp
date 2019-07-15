// Subsets
std::vector<int> get_binary_array(int num)
{
    std::vector<int> v;
    while(num)
    {
        v.push_back(num%2);
        num/=2;
    }
    return v;
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        for(int i=0;i<pow(2, nums.size());i++)
        {
            std::vector<int> temp;
            int num = i;
            std::vector<int> binary_array = get_binary_array(num);
            
            for(int j=0;j<binary_array.size();j++)
            {
                if(binary_array[j])
                {
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
        
        
    }
};