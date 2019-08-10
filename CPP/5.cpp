// Longest Palindromic Substring
void print(std::vector<std::vector<bool> > v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
            std::cout<<v[i][j]<<" ";
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
class Solution {
public:
    string longestPalindrome(string s) {
        if (!s.size())
            return "";
        if(s.size()==1)
            return s;
        //s="baad";
        std::vector<std::vector<bool> > v(s.size()+1, std::vector<bool>(s.size()+1, false));
        //print(v);
        
        for(int i=0;i<s.size();i++)
            v[i][i]=true;
        for(int i=0; i<s.size()-1;i++)
            if(s[i]==s[i+1])
                v[i][i+1]=true;
        
        for(int k=2;k<s.size();k++)
        {
            for(int i=0;i<s.size();i++)
            {
                int j= k;
                if(v[i+1][j-1] && s[i]==s[j])
                    v[i][j]=true;
            }
        }
        //print(v);
        int ansL = -1;
        int ansi= -1;
        int ansj=-1;
        for(int i=0;i<v.size();i++)
        {
            for(int j=i;j<v.size();j++)
            {
                if(v[i][j])
                {
                    if(j-i > ansL )
                    {
                        ansL= j-i;
                        ansi =i;
                        ansj = j;
                    }
                }
            }
        }
    return s.substr(ansi, ansL+1);
    }
    
};