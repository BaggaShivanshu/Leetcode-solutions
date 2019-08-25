// Group Anagrams
string Counter(string x)
{
    std::vector<int> v(26,0);
    for(int i=0;i<x.size();i++)
    {
        v[x[i]-'a']++;
    }
    
    std::string ans="";
    for(int i=0;i<v.size();i++)
    {
        ans+=(to_string(v[i]) + char(i+'a'));
    }
    std::cout<<ans<<"\n";
    return ans;
}
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        std::map<string, std::vector<string> > mymap;
        
        for(int i=0;i<strs.size();i++)
        {
            std::string counter = Counter(strs[i]);
            
            std::vector<string> temp;
            if(mymap.count(counter))
            {
                temp = mymap[counter];
                temp.push_back(strs[i]);
                mymap[counter]=temp;
                
            }
            else
            {
                temp.push_back(strs[i]);
                mymap.insert(make_pair(counter, temp));
            }
        }
        for (std::map<string, std::vector<string> >::iterator it=mymap.begin(); it!=mymap.end(); ++it)
        {
            ans.push_back(it->second);
        }
        return ans;
        
    }
};