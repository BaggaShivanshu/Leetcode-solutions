// Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        
        std::string ans ="";
        int mini = INT_MAX;
        int x = -1;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].length()<mini)
            {
                mini = strs[i].length();
                x=i;
            }
        }
        std::string smallestString = strs[x];
        // now we have the smallest string;
        
       bool found = false;
        for(int i=0;i<smallestString.size();i++)
        {
            char x = smallestString[i];
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=x)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
            ans+=x;
        }
        return ans;
        
    }
};