// Count Numbers with Unique Digits
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans = 0;
        if(n == 0 )
            return 1;
        ans= 10;
        
        for(int i=2; i<= min(n, 10) ;i++)
        {
            int x =1;
            for(int j=1; j <=i ; j++)
            {
                if(j==1 || j==2)
                    x*=9;
                else
                    x*=(10-j+1);
            }
            ans+=x;
        }
        return ans;
    }
};