// Divide Two Integers
class Solution {
public:
    int divide(long dividend, long divisor) {
        
        long ans;
       
        if(dividend ==0 )
            return 0;
        if(divisor ==1)
        {
            if(dividend>=INT_MIN && dividend <=INT_MAX)
                return dividend;
            else
                return INT_MAX;
        }
        if(divisor ==-1)
        {
            ans =-1*dividend;
            if(ans>=INT_MIN && ans <=INT_MAX)
                return ans;
            else
                return INT_MAX;
        }
        
        int x = 1;
        
        if(dividend <0)
        {
            dividend*=-1;
            x*=-1;
        }
        if(divisor <0)
        {
            x*=-1;
            divisor*=-1;
        }
        
        
        
        ans = exp(log(dividend) - log(divisor)) ;
        ans*=x;
        
        return ans;
        
    }
};