// Reverse Words in a String
class Solution {
public:
    string reverseWords(string s) {
        
        std::vector<string> ans;
        string currentString="";
        for(int i=0;i< s.size();i++)
        {
            if(s[i]==' ')
            {
                if(currentString!="")
                    ans.push_back(currentString);
                
                currentString="";
            }
            else
                currentString+=s[i];
        }
        if(currentString!="")
            ans.push_back(currentString);
        
        string reversedString="";
        std::reverse(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++)
            reversedString+=ans[i]+" ";
        
        reversedString.erase(reversedString.end()-1);
        return reversedString;
        
    }
};