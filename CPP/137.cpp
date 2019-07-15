// Single Number II

/* Failing becuase of negative numbers :(
std::vector<int> getBinary(int num)
{
    std::vector<int> v;
    while(num)
    {
        v.push_back(num%2);
        num/=2;
    }
    std::reverse(v.begin(), v.end());
    return v;
}
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::vector<int> v(32,0);
        
        //let's fill this array.
        for(int i=0;i<nums.size();i++)
        {
            std::vector<int> inBits = getBinary(nums[i]);
            for(int j= inBits.size()-1; j>=0; j--)
            {
                v[j]+=inBits[j];
                v[j]%=3;
            }
        }
        std::reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            std::cout<<v[i]<<"";
        std::cout<<"\n";
    
        // let's traverse this array;
        int ans =0;
        for(int i=0;i<v.size();i++)
        {
            ans+=(v[i]*pow(2,v.size()-1-i));
        }
        return ans;
        
    }
};
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long  actualSum =0;
        std::set<long long > mySet;
        for(int i=0;i<nums.size();i++)
        {
            actualSum+=nums[i];
            mySet.insert(nums[i]);
        }
        long long sum = 3*std::accumulate(mySet.begin(), mySet.end(), (long long )0);
        return (sum - actualSum)/2;
        
    }
};