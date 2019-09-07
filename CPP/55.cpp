// Jump Game
bool jump(const vector<int> & nums)
{
    std::vector<bool> v(nums.size(), false);
    int lastTrue =0;
    v[0]=true;
    for(int i=0;i<nums.size();i++)
    {
        if(!v[i])
            return false;
        int x = nums[i];
        int toAdd = x+i-lastTrue;
        
        if(toAdd > 0 )
        {
          
            for( int j=1; j<= toAdd;j++)
                v[j+lastTrue] = true;
            
            lastTrue +=toAdd;
        }
       
    }
    return true;
    
}
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        return jump(nums);
    }
};