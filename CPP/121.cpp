// Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()==0 || prices.size()==1)
            return 0;
        
        std::vector<int> ans(prices.size(), 0);
        
        int maxYet = INT_MIN;
        
       
        for(int i=prices.size()-1; i>=0; i--)
        {
            ans[i]=maxYet;
            maxYet = max(maxYet, prices[i]);
        }
        
        int maxProfit = 0;
        
       for(int i=0;i<prices.size()-1;i++)
           maxProfit=max(ans[i]-prices[i], maxProfit);
          
        return maxProfit;
    }
};