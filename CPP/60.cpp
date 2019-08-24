// Permutation Sequence
bool nextPermutation(vector<int>& nums) {
        
        
        int x = -1;
        int y = -1;
        
        for(int i=nums.size()-2; i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                x=i;
                break;
            }
        }
        if(x==-1)
        {
            
            return false;
        }
        
        for(int i = nums.size()-1; i>x; i--)
        {
            if(nums[i]> nums[x])
            {
                y=i;
                break;
            }
        }
        
        std::swap(nums[x], nums[y]);
        
        std::reverse(nums.begin()+x+1, nums.end());
    
        return true;
        
    }
void print(std::vector<int>& v){
    for(auto x:v)
        std::cout<<x<<" ";
    std::cout<<"\n";
}
class Solution {
public:
    string getPermutation(int n, int k) {
        
        std::vector<int> v;
        for(int i=1;i<=n;i++)
            v.push_back(i);
        
        std::string ans;
        int count = 0 ;
        
        
        do{
            count++;
            if(count==k)
                break;
        } while(nextPermutation(v));
        
        for(int i=0;i<v.size();i++)
            ans+=to_string(v[i]);
        
        return ans;
        
    }
};