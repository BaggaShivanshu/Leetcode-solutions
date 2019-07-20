// Bitwise AND of Numbers Range
/*
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int ans=m&n;
        for(long i= (long)m+1;i<n;i++)
        {
            ans=ans&i;
            if(ans==0)
                break;
        }
        return ans;
        
    }
};
*/
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int i=0;
        while(m!=n)
        {
            m=m>>1;
            n=n>>1;
            i++;
        }
        return m<<i;
        
    }
};