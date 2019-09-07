// Palindromic Substrings
int countpalindromicSubstrings(std::vector<std::vector<int> >& v)
{
    int ans =0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
            if(v[i][j]==1)
                ans++;
    }
    return ans;
}
class Solution {
public:
    int countSubstrings(string s) {
        std::vector<std::vector<int> > v(s.size(), std::vector<int>(s.size(), 0) );
        
        for(int i=0;i<s.size();i++)
        {
            v[i][i]=1;
            if(i!=s.size()-1 && s[i]==s[i+1])
                v[i][i+1]=1;
        }
        for(int i=1;i<v.size();i++)
        {
            int x = 0;
            int y = i;
            for(int j=i+1; j<=v.size();j++)
            {
                if(v[x+1][y-1]==1 && s[x]==s[y])
                    v[x][y]=1;
                y++;
                x++;
            }
        }
        return countpalindromicSubstrings(v);
    }
};