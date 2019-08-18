// Perfect Squares
int findNumSquares(int n)
{
    std::vector<int> v(n+1, INT_MAX);
    v[0]=0; v[1]=1; 
    
    for(int i=2; i<=n ; i++)
    {
        for(int x = 1; x<=sqrt(i); x++)
        {
            if(x*x == i)
                v[i] = 1;
               
            v[i]= min(v[i],1+ v[i-x*x]);
        }
    }
    return v[n];
}
class Solution {
public:
    int numSquares(int n) {
        return findNumSquares(n);
                
    }
};