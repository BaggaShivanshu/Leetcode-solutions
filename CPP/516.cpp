int ans(string& s , int i, int j, std::vector<std::vector<int> >& v)
{
   // std::cout<<i<<" "<<j<<"\n";
    if(i>j)
        return 0;
    if(i==j)
    {
        v[i][j]=1;
        return 1;
    }
    if(s[i]==s[j] && i==j-1)
    {
        v[i][j]=2;
        return 2;
    }
    if(s[i]==s[j])
    {
        if(v[i][j]==0)
            v[i][j] =  ans(s, i+1, j-1,v)+2;
        return v[i][j];
    }
    
    if(v[i][j]==0)
        v[i][j]= max(ans(s, i+1,j,v), ans(s, i, j-1,v));
    
    return v[i][j];
    
}

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        std::vector<std::vector<int> > v(s.size(), std::vector<int> (s.size(),0));
        return ans(s, 0, s.size()-1,v);
        
    }
};