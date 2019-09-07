// Coin Change
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        std::vector<int> v(amount+1, INT_MAX);
        v[0]=0;
        for(int i=1; i< v.size();i++)
        {
            for(int j=0;j<coins.size();j++)
            {
               if(i-coins[j] >= 0 && v[i-coins[j]]!=INT_MAX)
                    v[i]= min(v[i], v[i-coins[j]] +1);       
            }
        }
        if(v[amount]==INT_MAX)
            return -1;
        return v[amount];
        
    }
};