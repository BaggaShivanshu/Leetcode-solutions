// Factorial Trailing Zeroes
class Solution {
public:
    int trailingZeroes(int n) {
        
        int x =1;
        
        int ans =0;
        
        while(true)
        {
            int num = pow(5,x);
            int toAdd = n/num;
            if(toAdd==0)
                break;
            ans+=toAdd;
            
            x++;
        }
        return ans;
        
    }
};