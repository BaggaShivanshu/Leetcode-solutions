// Count and Say
string getNext(string s)
{
    string ans="";
    int count=0;
    char prev = ' ';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=prev && i!=0)
        {
            ans+=to_string(count)+prev;
            count = 0;
        }
        prev = s[i];
        count++;
    }
    ans+=to_string(count)+prev;
    return ans;
}
class Solution {
public:
    string countAndSay(int n) {
        
        std::string ans ="";
        std::string current = "1";
        for(int i=2;i<=n;i++)
        {
            
            current = getNext(current);
           // std::cout<<current<<"\n";
        }
        return current;
    }
};