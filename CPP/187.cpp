// Repeated DNA Sequences
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        std::set<std::string> mySet;
        std::set<std::string> ans;
        string temp="";
        //first windown
        for(int i=0;i<10;i++)
            temp+=s[i];
        mySet.insert(temp);
        //std::cout<<temp<<"\n";
        for(int i=10;i<s.size();i++)
        {
            temp.erase(0,1);
            temp+=s[i];
            //std::cout<<temp<<"\n";
            if(mySet.count(temp))
                ans.insert(temp);
            mySet.insert(temp);
            
        }
        std::vector<string> a(ans.begin(), ans.end());
        return a;
        
    }
};